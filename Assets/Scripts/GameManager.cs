using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//ゲームの進行管理をするスクリプト
public class GameManager : MonoBehaviour
{
    
    //どこで習ったんかしらんけど、ちゃんとしたリストの書き方はこう
    public List<GameObject> hagePictures = new List<GameObject>();
    public int count = 0;
    public GameObject currentPicture;  

    public HairManager hairManager;

    public static bool hasGeneratedHagePic = false;


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
        /*else if(HagePicture.isFlicked)
        {
            int number = Random.Range(0, hagePictures.Count);    

            currentPicture = Instantiate(hagePictures[number], new Vector3(7,0,0), Quaternion.identity);

            HagePicture.isFlicked = false;
        }*/
        
        else 
        {

            if(hairManager.isClear) 
            //if(HairManager.hairList.Count == 0)
            {

                hasGeneratedHagePic = false;
                
            }

        }   
      
    }

}
