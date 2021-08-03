using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;

//はげの画像を操るスクリプト
public class HagePicture : MonoBehaviour
{
    public bool isClicked;
    public bool isFlicked; 
    public bool isClear;
    public static bool isScored;
    public Sprite hageHappy;
    public Sprite hageSad;
    public float speed;
    HairManager hairManager;
    SpriteRenderer hagePic;
    Vector2 startPos;

    void Start() {

        hairManager = GameObject.Find("HairManager").GetComponent<HairManager>();

        hagePic = this.GetComponent<SpriteRenderer>();

        speed = -18.0f;
        
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

                speed = -18.0f;
                isFlicked = true;
            
            } else if(swipeLength == 0) {
                
                Debug.Log("gameover");
                
                //本来ならこう書くところ
                //hagePic.sprite = hageSad;
                hageHappy = hageSad;
                
                isScored = true;
                Invoke("GameOver", 1);
            
            }
            
            
        }
        
    }

    void GameOver(){

        SceneManager.LoadScene("GameOver");

    }
    
    void Update() {

        transform.Translate(Time.deltaTime * speed, 0, 0);

        //xが-5.0以下なら
        if(transform.position.x <= -5.0f) {
            
            //自身を破壊する
            Destroy(this.gameObject);

        //xが0.18以下なら
        } else if (transform.position.x <= 0.18f) {

            //毛が消えていないなら
            if(!isClear) {

                speed = 0;

            } else {

                hagePic.sprite = hageHappy;
                                                
            }
            
        } 

    }  

}
