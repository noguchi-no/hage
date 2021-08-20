using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;
using TMPro;


//ゲームの進行管理をするスクリプト
public class GameManager : MonoBehaviour {
    public GameObject hagePrefab;
    public int hagePicNums;

    [Header("通常時の画像")]
    public Sprite[] hagePics;
    
    [Header("幸福時の画像")]
    public Sprite[] happyHagePics;

    [Header("悲痛時の画像")]
    public Sprite[] sadHagePics;
    static public int score;
    public int highScore = 0;
    public GameObject currentPicture;
    public GameObject scoreText;
    public TextMeshProUGUI highScoreText;
    HairManager hairManager;
    
    //これいるのか
    public bool hasGeneratedHagePic;
    static public bool hasNewRecord;
    
    public bool hasGeneratedFirstPic;
    public float timeLimit = 30.0f;
    public GameObject limit;
    public int highScoreOnTimeAttack = 0;
    public TextMeshProUGUI highScoreTextOnTimeAttack;
    public static bool timeAttack;
    public SoundManager sm;
    public int countForLimit;
    public float currentTime;
    public float gameOverTimeLimit = 8.0f;
    bool isSounded = false;
    
    public GameObject canvas;
    
    [System.Serializable]
    public class HighScoreData {
        public int highScore;
        public int highScoreOnTimeAttack;
    }
    HighScoreData highScoreData = new HighScoreData();

    public GameObject stopButton; 
    
    private float timeForStartInvoke = 0.5f;
    public bool isStarted;

    void Start() {

        score = 0;
        currentTime = gameOverTimeLimit;
        LoadHighScore();

        if(SceneManager.GetActiveScene().name == "TimeAttack") {

            highScoreTextOnTimeAttack.text = "ベスト：" + highScoreOnTimeAttack.ToString(); 
            
            timeAttack = true;
        
        } else {
            
            highScoreText.text = "ベスト：" + highScore.ToString(); 

            timeAttack = false;
        }
        
        hairManager = GameObject.Find("HairManager").GetComponent<HairManager>();
    }

    // Update is called once per frame
    void Update() {

        if(Mathf.Approximately(Time.timeScale, 0f)){
		    return;
	    }
        
       
        
        scoreText.GetComponent<TextMeshProUGUI>().text = score.ToString();

        //ボタンを押したら
        if(!hasGeneratedFirstPic) {
            
            if(Input.GetMouseButtonDown(0)) {

                sm.playStartSound();

                isStarted =true;

                Invoke("GameStart", timeForStartInvoke);

                hasGeneratedFirstPic = true;
            }

        } else {

            if(SceneManager.GetActiveScene().name == "Game") {
            
                if(currentTime > 0) {
                    
                    currentTime -= Time.deltaTime; 
                    //sad中は点滅なし
                    if(!currentPicture.GetComponent<HagePicture>().isSad){

                        if(gameOverTimeLimit > 2.0){

                            if(currentTime < 1.5f) currentPicture.GetComponent<Image>().color = new Color(1.0f, Mathf.Abs(Mathf.Sin(currentTime*10)), Mathf.Abs(Mathf.Sin(currentTime*10)), 1.0f);
                            
                            }

                        else{

                            if(currentTime < 0.5f) currentPicture.GetComponent<Image>().color = new Color(1.0f, Mathf.Abs(Mathf.Sin(currentTime*10)), Mathf.Abs(Mathf.Sin(currentTime*10)), 1.0f);
                            
                            }
                    }
                    
                    

                } else {

                    SaveHighScore(score);

                    //フラグ立てないと何回も鳴る
                    if(!isSounded) {
                        
                        sm.SadSound();
                        isSounded = true;

                    }
                   
                    currentPicture.GetComponent<Image>().sprite = sadHagePics[hagePicNums];
                    Invoke("GameOver", 1);

                }
                //ゲームバランス、要検討
                if(countForLimit >= 16){

                    gameOverTimeLimit = 1.5f;
                
                }
                if(countForLimit >= 11){

                    gameOverTimeLimit = 2.0f;
                
                }
                if(countForLimit >= 8){

                    gameOverTimeLimit = 2.5f;
                
                }
                if(countForLimit >= 4){

                    gameOverTimeLimit = 3.0f;
                
                } else if (countForLimit >= 2){

                    gameOverTimeLimit = 4.0f;
                }

            }       

        }
        
        if(currentPicture != null && currentPicture.GetComponent<HagePicture>().isClear) {
            
            currentPicture.GetComponent<HagePicture>().Flick();

            if(currentPicture.GetComponent<HagePicture>().isFlicked) {
                
                hasGeneratedHagePic = false;
                hairManager.hasGeneratedHair = false;
            
                currentTime = gameOverTimeLimit;
                countForLimit++;

                GeneratePic();

            }            
        }

        //タイムアタックシーン
        if(SceneManager.GetActiveScene().name == "TimeAttack") {

            if(hasGeneratedFirstPic){

                if(timeLimit > 0) {
            
                timeLimit -= Time.deltaTime; 
                limit.GetComponent<TextMeshProUGUI>().text = "残り時間：" + timeLimit.ToString("N1");
                
                } else {

                    SaveHighScore(score);
                    SceneManager.LoadScene("GameOver");

                }
            }
            
        } 
      
    }

    //画像生成
    void GeneratePic() {
        
            currentPicture = Instantiate(hagePrefab);
        
            //hagePics最後をレアな画像にする
            int probab = Random.Range(0, 101);
            Debug.Log(probab);

            if(probab <= 92){
                hagePicNums = Random.Range(0, hagePics.Length-2);
            }
            else{
                hagePicNums = hagePics.Length-1;
            }

            currentPicture.GetComponent<Image>().sprite = hagePics[hagePicNums];
            currentPicture.transform.SetParent(canvas.transform, false);

            currentPicture.GetComponent<RectTransform>().anchoredPosition = new Vector2(800, 0);
            //画像を1番背面に持ってくる
            currentPicture.transform.SetAsFirstSibling();

            hasGeneratedHagePic = true;

        
        
    }

    //jsonに書きこみ
    public void SaveHighScore(int _score) {

        if(SceneManager.GetActiveScene().name == "TimeAttack") {

            if (_score <= highScoreOnTimeAttack) return;

            highScoreData.highScoreOnTimeAttack = _score;

        } else {

            if(_score <= highScore) return;

            highScoreData.highScore = _score;
            hasNewRecord = true;
        }

        StreamWriter writer;

        string jsonstr = JsonUtility.ToJson(highScoreData);

        writer = new StreamWriter(Application.dataPath + "/savedata.json", false);
        writer.Write(jsonstr);
        writer.Flush();
        writer.Close();

    }

    void LoadHighScore() {

        string datastr = "";

        StreamReader reader;

        reader = new StreamReader(Application.dataPath + "/savedata.json", false);
        datastr = reader.ReadToEnd();
        reader.Close();

        highScoreData = JsonUtility.FromJson<HighScoreData>(datastr);

        highScore = highScoreData.highScore;
        highScoreOnTimeAttack = highScoreData.highScoreOnTimeAttack;

    }

    void GameOver(){

        SceneManager.LoadScene("GameOver");

    }
    void GameStart(){

                GeneratePic();
                
                stopButton.SetActive(true);

                isStarted = false;
    }

}
