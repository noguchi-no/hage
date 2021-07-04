using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


//はげの画像を操るスクリプト
public class HagePicture : MonoBehaviour
{
    public bool isClicked = false;

    bool stop = true;
    float speed = -18.0f;

    HairManager hairManager;

    void Start()
    {

        hairManager = GameObject.Find("HairManager").GetComponent<HairManager>();

    }
    
    
     //Update is called once per frame
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
            else
            {

                speed = -18.0f;

            }
            
        } 

    }   

}
