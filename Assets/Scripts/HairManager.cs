using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

//髪の毛を管理するスクリプト
public class HairManager : MonoBehaviour
{
    public GameObject hairPrefab;
    public static List<GameObject> hairList = new List<GameObject>();
    public bool hasGeneratedHair;
    
    public GameManager gameManager;    
    
    // Update is called once per frame
    void Update()
    {
        //髪の毛が生成されていないなら
        if (!hasGeneratedHair && gameManager.hasGeneratedHagePic) {
                    
            int hairCount = (int)Random.Range(1, 4.99f);
        
            for(int i = 0; i < hairCount; i++) {

                float hairPosition = Random.Range(6.0f, 8.0f);

                GameObject hair = Instantiate(hairPrefab, new Vector3(hairPosition,3.0f,0f), Quaternion.identity);

                hairList.Add(hair);

                hair.transform.SetParent(gameManager.currentPicture.transform);

            } 

            hasGeneratedHair = true;   
           
        } else {

            HairPick();

        }

        
          
    }
    
    void HairPick(){
        
            if (EventSystem.current.currentSelectedGameObject != null) {
                return;
            }
            //ボタンが押されたら
            if(Input.GetMouseButtonDown(0)) {

                if(hairList.Count > 0) {

                    //gameManager.
                    GameManager.score++;
                    Destroy(hairList[hairList.Count - 1]);

                    //リストからも消す
                    hairList.RemoveAt(hairList.Count - 1);

                }

            }

            if(hairList.Count == 0) {

                if(gameManager.currentPicture != null) {

                    if(Input.GetMouseButtonUp(0)) {

                        gameManager.currentPicture.GetComponent<HagePicture>().isClear = true;

                    }
                                    
                }

            }
        }
}
