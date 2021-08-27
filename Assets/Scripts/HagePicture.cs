using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;

//はげの画像を操るスクリプト
public class HagePicture : MonoBehaviour {
    public bool isClicked;
    public bool isFlicked; 
    public bool isClear;
    public static bool isScored;
    public bool isSad;
    public bool isHappy;
    public Sprite hageHappy;
    public Sprite hageSad;
    HairManager hairManager;
    SpriteRenderer hagePic;
    Vector2 startPos;
    GameManager gameManager;
    float speed = -3600.0f;
    int hagePicNums;
    
    void Start() {

        hairManager = GameObject.Find("HairManager").GetComponent<HairManager>();

        hagePic = this.GetComponent<SpriteRenderer>();

        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        hagePicNums = gameManager.hagePicNums;
        
    }

    //フリック動作
    public void Flick() {

        //他のボタンが押された時、動作させないための処理
        if(EventSystem.current.currentSelectedGameObject != null) return;
        
        
            if(Input.GetMouseButtonDown(0)) {

                startPos = Input.mousePosition;
            
            }
        
            if(Input.GetMouseButtonUp(0)) {
                
                Vector2 endPos = Input.mousePosition;
                float swipeLength = endPos.x - startPos.x;

                if(-30 > swipeLength) {

                    if(!isSad){
                        speed = -3600.0f;
                        isFlicked = true;

                        gameManager.sm.FlickSound();
                        
                    }
                
                } else if(swipeLength == 0) {
                    
                    gameManager.sm.SadSound();
                    
                    this.GetComponent<Image>().sprite = gameManager.sadHagePics[hagePicNums];
                    
                    Debug.Log(this.GetComponent<Image>().sprite);

                    isSad = true;

                    gameManager.SaveHighScore(GameManager.score);

                    //Invoke("GameOver", 1);
                    StartCoroutine("GameOver");

                }
            
            
            }   

    }

    IEnumerator GameOver(){
        yield return new WaitForSeconds(1.0f);

        SceneManager.LoadScene("GameOver");

    }
    
    void Update() {

        if (Mathf.Approximately(Time.timeScale, 0f)) return;

        this.GetComponent<RectTransform>().anchoredPosition += new Vector2(Time.deltaTime * speed, 0);

        if(this.GetComponent<RectTransform>().anchoredPosition.x <= -800) {
            
            Destroy(this.gameObject);

        } else if (this.GetComponent<RectTransform>().anchoredPosition.x <= 0) {

            //毛が消えていないなら
            if(!isClear) {
                
                speed = 0;
                this.GetComponent<RectTransform>().anchoredPosition = new Vector2(0.0f, this.GetComponent<RectTransform>().anchoredPosition.y);

            } else {

                //初期がはげじゃなかったら
                if(hairManager.hairCount != 0){
                    
                    if(!isHappy){
                        
                        this.GetComponent<Image>().sprite = gameManager.happyHagePics[hagePicNums];
                        this.GetComponent<Image>().color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
                        gameManager.sm.HappySound();
                        isHappy = true;
                    }

                } else {
                    
                    if(isFlicked){

                        if(!isHappy){
                            
                            this.GetComponent<Image>().sprite = gameManager.happyHagePics[hagePicNums];
                            this.GetComponent<Image>().color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
                            gameManager.sm.HappySound();
                            isHappy = true;
                        }
                        
                    }
                }
                
                                                
            }
            
            //最初から毛が0ほんのやつが流れてきた時
            if (hairManager.hairCount == 0) isClear = true;
            
        } 

    }  

}
