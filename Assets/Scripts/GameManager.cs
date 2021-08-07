using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;

//ゲームの進行管理をするスクリプト
public class GameManager : MonoBehaviour {

    public List<GameObject> hagePrefabs = new List<GameObject>();
    public GameObject hageRare;
    static public int score;
    public int highScore = 0;
    public GameObject currentPicture;
    public GameObject scoreText;
    public Text highScoreText;
    //string key = "HIGHSCORE";
    HairManager hairManager;
    public bool hasGeneratedHagePic;
    public bool hasGeneratedFirstPic;
    public float timeLimit = 10.0f;
    public GameObject limit;
    public int highScoreOnTimeAttack = 0;
    public Text highScoreTextOnTimeAttack;
    //string key2 = "HIGHSCOREONTIME";
    public static bool timeAttack;
    public SoundManager sm;
    public int countForLimit;
    public float currentTime;
    public float gameOverTimeLimit = 8.0f;
    
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

                hasGeneratedFirstPic = true;
                
                int number = Random.Range(0, hagePrefabs.Count);    

                currentPicture = Instantiate(hagePrefabs[number], new Vector3(7,0,0), Quaternion.identity);

                hasGeneratedHagePic = true;
            
            }

        } else {

            if(currentPicture.GetComponent<HagePicture>().isFlicked) {

                int probab = Random.Range(0, 101);

                if(probab <= 90){

                    int number = Random.Range(0, hagePrefabs.Count);    

                    currentPicture = Instantiate(hagePrefabs[number], new Vector3(7,0,0), Quaternion.identity);

                    hasGeneratedHagePic = true;

                }
                
                else{

                    currentPicture = Instantiate(hageRare, new Vector3(7,0,0), Quaternion.identity);

                    hasGeneratedHagePic = true;
                }
                

                                
            }

            if(SceneManager.GetActiveScene().name == "Game") {
            
                if(currentTime > 0) {
                    
                    currentTime -= Time.deltaTime; 

                } else {

                    SaveHighScore(score);

                    sm.SadSound();

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
