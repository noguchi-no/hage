using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

//髪の毛を管理するスクリプト
public class HairManager : MonoBehaviour
{
    public GameObject hairPrefab;
    public List<GameObject> hairList = new List<GameObject>();
    public List<bool> hair_deleting_list = new List<bool>();
    public bool hasGeneratedHair;
    public GameManager gameManager;    
    
    // Update is called once per frame
    void Update()
    {
        if (Mathf.Approximately(Time.timeScale, 0f)) {
		return;
	    }
        //髪の毛が生成されていないなら
        if (!hasGeneratedHair && gameManager.hasGeneratedHagePic) {
                    
            int hairCount = (int)Random.Range(1, 4.99f);
        
            for(int i = 0; i < hairCount; i++) {

                float hairPosition = Random.Range(6.0f, 8.0f);

                GameObject hair = Instantiate(hairPrefab, new Vector3(hairPosition,3.0f,0f), Quaternion.identity);

                hairList.Add(hair);
                hair_deleting_list.Add(false);

                hair.transform.SetParent(gameManager.currentPicture.transform);

            } 

            hasGeneratedHair = true;   
           
        } else {

            if(gameManager.currentPicture != null) {
                
                HairPick();

                for(int i = 0; i < hairList.Count; i++) {
                    
                    if(hairList[i].transform.parent == null) {
                        
                        if(hairList[i].transform.position.y < 0) {

                            Destroy(hairList[i]);

                            //リストからも消す
                            hairList.RemoveAt(i);

                        } else {

                            hairList[i].transform.Translate(0, Time.deltaTime * -5, 0);

                        } 
                    }

                }

            }

        }
          
    }
    
    void HairPick(){
            
        //他のボタンが押された時、動作させないための処理
        if (EventSystem.current.currentSelectedGameObject != null) return;

        //ボタンが押されたら
        if(Input.GetMouseButtonDown(0)) {

            if(gameManager.currentPicture.transform.childCount > 0) {

                GameManager.score++;

                hairList[gameManager.currentPicture.transform.childCount - 1].transform.parent = null;

            }

        }

        //if(hairList.Count == 0) {
        if(gameManager.currentPicture.transform.childCount == 0) {            

            if(gameManager.currentPicture != null) {
                
                //フリック呼び出しのタイミングずらし用
                if(Input.GetMouseButtonUp(0)) {

                    gameManager.currentPicture.GetComponent<HagePicture>().isClear = true;

                }
                                
            }

        }
    }
}
