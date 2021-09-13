using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;
using TMPro;
using Cysharp.Threading.Tasks;
using System.Threading;
using DG.Tweening;


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
    public HairManager hairManager;
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
    public bool isSounded = false;    
    public GameObject canvas;
    private bool isAnimated;
    
    [System.Serializable]
    public class HighScoreData {
        public int highScore;
        public int highScoreOnTimeAttack;
    }

    HighScoreData highScoreData = new HighScoreData();

    public GameObject stopButton;     
    private float timeForStartInvoke = 0.5f;
    public bool isStarted;
    public static bool timeUp;
    
    

    private async UniTaskVoid GameO(CancellationToken token)
   {
       await UniTask.Delay(1000, cancellationToken: token);

       SceneManager.LoadScene("GameOver");
   }
   
    void Start() {

        score = 0;
        currentTime = gameOverTimeLimit;
        LoadHighScore();

        if(SceneManager.GetActiveScene().name == "TimeAttack") {

            highScoreTextOnTimeAttack.text = "ハイスコア：" + highScoreOnTimeAttack.ToString(); 
            
            timeAttack = true;
        
        } else {
            
            highScoreText.text = "ハイスコア：" + highScore.ToString(); 

            timeAttack = false;
        }
        
        
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

                //isStarted =true;
                StartCoroutine("GameStart");
                //Invoke("", timeForStartInvoke);

                hasGeneratedFirstPic = true;
            }

        } else {

            if(SceneManager.GetActiveScene().name == "Game") {
            
                if(currentTime > 0) {
                    
                    currentTime -= Time.deltaTime; 
                    //sad中は点滅なし
                    if(hasGeneratedHagePic&&!currentPicture.GetComponent<HagePicture>().isSad){

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
                    
                    if(!isAnimated){
                        
                        currentPicture.GetComponent<RectTransform>().DOShakePosition(1.0f, new Vector2(15, 0), 14, 0, false, false).SetEase(Ease.Linear);
                        isAnimated = true;
                    }

                    var token = this.GetCancellationTokenOnDestroy();
                    GameO(token).Forget();
                    //StartCoroutine("GameOver");
                    //Invoke("GameOver", 1);
                    
                    //return;
                }
                //ゲームバランス、要検討
                if(countForLimit >= 30){

                    gameOverTimeLimit = 0.85f;
                
                }
                if(countForLimit >= 30){

                    gameOverTimeLimit = 0.9f;
                
                }
                if(countForLimit >= 25){

                    gameOverTimeLimit = 1.0f;
                
                }
                if(countForLimit >= 20){

                    gameOverTimeLimit = 1.1f;
                
                }
                if(countForLimit >= 15){

                    gameOverTimeLimit = 1.2f;
                
                }
                if(countForLimit >= 11){

                    gameOverTimeLimit = 1.5f;
                
                }
                if(countForLimit >= 8){

                    gameOverTimeLimit = 2.0f;
                
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
                limit.GetComponent<TextMeshProUGUI>().text = "リミット：" + "<color=#ff4500>" + timeLimit.ToString("N1") + "</color>";


                
                } else {

                    SaveHighScore(score);
                    timeUp = true;
                    SceneManager.LoadScene("GameOver");
                    
                }
            }
            
        } 
      
    }

    //画像生成
    void GeneratePic() {
        
            currentPicture = Instantiate(hagePrefab, new Vector2(800, 0), Quaternion.identity);
        
            //hagePics最後をレアな画像にする
            int probab = Random.Range(0, 101);

            if(probab <= 92){
                hagePicNums = Random.Range(0, hagePics.Length-2);
            }
            else{
                hagePicNums = hagePics.Length-1;
            }

            currentPicture.GetComponent<Image>().sprite = hagePics[hagePicNums];

            currentPicture.transform.SetParent(canvas.transform, false);

            //currentPicture.GetComponent<RectTransform>().anchoredPosition = new Vector2(800, 0);
            //画像を1番背面に持ってくる
            currentPicture.transform.SetAsFirstSibling();

            hasGeneratedHagePic = true;

    }

    //jsonに書きこみ
    public void SaveHighScore(int _score) {

        if(SceneManager.GetActiveScene().name == "TimeAttack") {

            if (_score <= highScoreOnTimeAttack) {
                hasNewRecord = false;
                return;

            }

            highScoreData.highScoreOnTimeAttack = _score;
            hasNewRecord = true;

        } else {

            if(_score <= highScore) {
                hasNewRecord = false;
                return;
            }
            highScoreData.highScore = _score;
            hasNewRecord = true;
        }

        StreamWriter writer;

        string jsonstr = JsonUtility.ToJson(highScoreData);

        writer = new StreamWriter(Application.persistentDataPath + "/savedata.json", false);
        writer.Write(jsonstr);
        writer.Flush();
        writer.Close();

    }

    void LoadHighScore() {

        string datastr = "";

        StreamReader reader;

        reader = new StreamReader(Application.persistentDataPath + "/savedata.json", false);
        datastr = reader.ReadToEnd();
        reader.Close();

        highScoreData = JsonUtility.FromJson<HighScoreData>(datastr);

        highScore = highScoreData.highScore;
        highScoreOnTimeAttack = highScoreData.highScoreOnTimeAttack;

    }
        
    
    /*private IEnumerator GameOver(){

        yield return new WaitForSeconds(timeForGameOver);

        SceneManager.LoadScene("GameOver");
        
    }*/

   
   
    private IEnumerator GameStart(){

        yield return new WaitForSeconds(timeForStartInvoke);

        GeneratePic();
                
        stopButton.SetActive(true);

        //isStarted = false;
    }

}
