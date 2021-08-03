using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

//ゲームの進行管理をするスクリプト
public class GameManager : MonoBehaviour {

    public List<GameObject> hagePrefabs = new List<GameObject>();
    static public int score;
    public int highScore = 0;
    public GameObject currentPicture;
    public GameObject scoreText;
    public Text highScoreText;
    string key = "HIGHSCORE";
    public HairManager hairManager;
    public bool hasGeneratedHagePic;
    public bool hasGeneratedFirstPic;
    public float timeLimit = 10.0f;
    public GameObject limit;
    public int highScoreOnTimeAttack = 0;
    public Text highScoreTextOnTimeAttack;
    string key2 = "HIGHSCOREONTIME";
    public static bool timeAttack;

    void Start() {
        
        score = 0;

        if(SceneManager.GetActiveScene().name == "TimeAttack") {

            highScoreOnTimeAttack = PlayerPrefs.GetInt(key2, 0);
            highScoreTextOnTimeAttack.text = "ベスト：" + highScoreOnTimeAttack.ToString(); 
            
            timeAttack = true;
        
        } else {
            
            highScore = PlayerPrefs.GetInt(key, 0);
            highScoreText.text = "ベスト：" + highScore.ToString(); 

            timeAttack = false;
        }
        

    }

    // Update is called once per frame
    void Update() {

         if (Mathf.Approximately(Time.timeScale, 0f)) {
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

                int number = Random.Range(0, hagePrefabs.Count);    

                currentPicture = Instantiate(hagePrefabs[number], new Vector3(7,0,0), Quaternion.identity);

                hasGeneratedHagePic = true;

            }

        }
        
        if(currentPicture != null && currentPicture.GetComponent<HagePicture>().isClear) {

            currentPicture.GetComponent<HagePicture>().Flick();

            if(currentPicture.GetComponent<HagePicture>().isFlicked) {

                hasGeneratedHagePic = false;
                hairManager.hasGeneratedHair = false;

            }
            
        }

        if (HagePicture.isScored){
            
            if (score > highScore){

                highScore = score;
                PlayerPrefs.SetInt(key, highScore);
                PlayerPrefs.Save();

            }

            HagePicture.isScored = false;
        }

        if(SceneManager.GetActiveScene().name == "TimeAttack") {

            if(timeLimit > 0) {
            
                timeLimit -= Time.deltaTime; 
                limit.GetComponent<Text>().text = "残り時間" + timeLimit.ToString("N1");
        
            }  else {

                SceneManager.LoadScene("GameOver");

                if (score > highScoreOnTimeAttack){

                    highScoreOnTimeAttack = score;
                    PlayerPrefs.SetInt(key2, highScoreOnTimeAttack);
                    PlayerPrefs.Save();

                }

            }
        } 
      
    }

    

}
