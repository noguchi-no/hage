using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//髪の毛を管理するスクリプト
public class HairManager : MonoBehaviour
{
    public GameObject hairPrefab;
    public static List<GameObject> hairList = new List<GameObject>();
    public bool hasGeneratedHair = false;

    public GameObject countNumber;
    int count = 0;
    //float gameOverTime = 1.5f;

    //毛を全部消したか格納する
    public bool isClear = false;


    public GameManager gameManager;
    
    
    // Update is called once per frame
    void Update()
    {

        //髪の毛が生成されていないなら
        if (!hasGeneratedHair)
        {

            //ボタンが押されたら
            if (Input.GetMouseButtonDown(0))
            {   
                    //gameOverTime = 1.5f;
                    
                    int hairCount = (int)Random.Range(1, 4.99f);
                
                    for(int i = 0; i < hairCount; i++)
                    {           
                        float hairPosition = Random.Range(6.0f, 8.0f);

                        GameObject hair = Instantiate(hairPrefab, new Vector3(hairPosition,3.0f,0f), Quaternion.identity);

                        hairList.Add(hair);

                        hair.transform.SetParent(gameManager.currentPicture.transform);

                    } 

                    hasGeneratedHair = true;   
                    isClear = false;          
            }
           
        }
        else
        {

            //ボタンが押されたら
            if(Input.GetMouseButtonDown(0))
            {
                

                if(hairList.Count == 0)
                {
                    hasGeneratedHair = false;
                    isClear = true;
                    
                    /*Invoke("Empty", 1.5f);
                    
                    
                    if(gameOverTime > 0.0f && gameOverTime < 1.5f)
                    {
                        Debug.Log("GameOver");
                    }

                    gameOverTime -= Time.deltaTime;

                    if(gameOverTime <= 0.0f)
                    {
                        gameOverTime = 0.0f;
                    }*/

                }
                
                    
                else
                {
                    count++;
                    Destroy(hairList[hairList.Count - 1]);

                    //リストからも消す
                    hairList.RemoveAt(hairList.Count - 1);

                }

            }

        }

        countNumber.GetComponent<Text>().text = count.ToString();

        
          
    }
    /*void Empty()
        {
            hasGeneratedHair = false;
            isClear = true; 
        }
        */
}
