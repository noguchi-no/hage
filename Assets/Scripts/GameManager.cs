using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;

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
    public Text highScoreText;
    HairManager hairManager;
    
    //これいるのか
    public bool hasGeneratedHagePic;
    
    public bool hasGeneratedFirstPic;
    public float timeLimit = 10.0f;
    public GameObject limit;
    public int highScoreOnTimeAttack = 0;
    public Text highScoreTextOnTimeAttack;
    public static bool timeAttack;
    public SoundManager sm;
    public int countForLimit;
    public float currentTime;
    public float gameOverTimeLimit = 8.0f;
    bool isSounded = false;
    public GameObject startText;
    public GameObject canvas;
    
    [System.Serializable]
    public class HighScoreData {
        public int highScore;
        public int highScoreOnTimeAttack;
    }
    HighScoreData highScoreData = new HighScoreData();

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

        scoreText.GetComponent<Text>().text = score.ToString();

        //ボタンを押したら
        if(!hasGeneratedFirstPic) {

            if(Input.GetMouseButtonDown(0)) {

                startText.SetActive(false);
                sm.playStartSound();

                hasGeneratedFirstPic = true;
                
                GeneratePic();
            
            }

        } else {

            if(SceneManager.GetActiveScene().name == "Game") {
            
                if(currentTime > 0) {
                    
                    currentTime -= Time.deltaTime; 

                    if(currentTime < gameOverTimeLimit/2) currentPicture.GetComponent<Image>().color = new Color(1.0f, Mathf.Abs(Mathf.Sin(currentTime*10)), Mathf.Abs(Mathf.Sin(currentTime*10)), 1.0f);

                } else {

                    SaveHighScore(score);

                    //フラグ立てないと何回も鳴る
                    if(!isSounded) {
                        
                        sm.SadSound();
                        isSounded = true;

                    }

                    Invoke("GameOver", 1);

                }

                if(countForLimit >= 5){

                    gameOverTimeLimit = 3.0f;
                
                } else if (countForLimit >= 3){

                    gameOverTimeLimit = 5.0f;
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

            if(timeLimit > 0) {
            
                timeLimit -= Time.deltaTime; 
                limit.GetComponent<Text>().text = "残り時間" + timeLimit.ToString("N1");
        
            }  else {

                SaveHighScore(score);
                SceneManager.LoadScene("GameOver");

            }
        } 
      
    }

    //画像生成
    void GeneratePic() {
        
        currentPicture = Instantiate(hagePrefab);

        hagePicNums = Random.Range(0, hagePics.Length);

        currentPicture.GetComponent<Image>().sprite = hagePics[hagePicNums];
        currentPicture.transform.SetParent(canvas.transform, false);
        currentPicture.GetComponent<RectTransform>().anchoredPosition = new Vector2(800, 0);

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

}
