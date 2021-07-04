using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//ゲームの進行管理をするスクリプト
public class GameManager : MonoBehaviour
{
    
    //どこで習ったんかしらんけど、ちゃんとしたリストの書き方はこう
    public List<GameObject> hagePictures = new List<GameObject>();
    public int count = 0;
    public GameObject currentPicture;  

    public HairManager hairManager;

    bool hasGeneratedHagePic = false;


    // Update is called once per frame
    void Update()
    {

        //はげ画像が生成されていなかったら
        if(!hasGeneratedHagePic)
        {    

            //ボタンを押したら
            if(Input.GetMouseButtonDown(0))
            {
                
                int number = Random.Range(0, hagePictures.Count);    

                currentPicture = Instantiate(hagePictures[number], new Vector3(7,0,0), Quaternion.identity);

                hasGeneratedHagePic = true;
            }
        
        } 
        
        //if(hageIsMade == false) 
        //elseでよい
        else 
        {

            if(hairManager.isClear) {

                hasGeneratedHagePic = false;

            }

        }   
      
    }

}
