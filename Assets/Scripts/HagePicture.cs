using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


//はげの画像を操るスクリプト
public class HagePicture : MonoBehaviour
{
    public bool isClicked = false;

    
    float speed = -18.0f;

    HairManager hairManager;

    public Sprite hageHappy;

    SpriteRenderer hagePic;

    Vector2 startPos;
    Vector2 endPos;
    
    public static bool isFlicked = false; 

    void Start()
    {

        hairManager = GameObject.Find("HairManager").GetComponent<HairManager>();

        hagePic = this.GetComponent<SpriteRenderer>();
        
    }
    //タッチした位置と指を離した位置を取得
    void Flick()
    {
        if (Input.GetMouseButtonDown(0))
        {
            startPos = Input.mousePosition;
        }
        if (Input.GetMouseButtonUp(0))
        {
            Vector2 endPos = Input.mousePosition;
            //GetDirection();
            float swipeLength = endPos.x - startPos.x;

            //string direction;

            if (-30 > swipeLength)
            {
                speed = -18.0f;
                isFlicked = true;
            }
            else
            {
                Debug.Log("gameover");
            }
            
        }
        
    }

    //void GetDirection()
    
    void Update()
    {

        transform.Translate(Time.deltaTime * speed, 0, 0);

        //髪が生成されているならば
        if (hairManager.hasGeneratedHair)
        {

            //ボタンが押されたら
            if(Input.GetMouseButtonDown(0))
            {
                isClicked = true;
                            
                speed = -18.0f;

            }
        }

        //xが-5.0以下なら
        if(transform.position.x <= -5.0f)
        {
            
            //自身を破壊する
            Destroy(this.gameObject);

        }
        //xが0.18以下なら
        else if (transform.position.x <= 0.18f)
        {

            //毛が消えていないなら
            if(!hairManager.isClear)
            {

                speed = 0;

            }
            //毛が消えてたら
            else
            {

                //speed = -18.0f;
                Flick();
                
            }
            
            if(HairManager.hairList.Count == 0)
            {
                hagePic.sprite = hageHappy;
            }
        } 

    }  

}
