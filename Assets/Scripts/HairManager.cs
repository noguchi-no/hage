using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

//髪の毛を管理するスクリプト
public class HairManager : MonoBehaviour {
    public GameObject hairPrefab;
    public List<GameObject> hairList = new List<GameObject>();
    public List<float> hairPosxList = new List<float>();
    public bool hasGeneratedHair;
    public GameManager gameManager;

    public int hairCount;    
    void Update()
    {
        //時間が停止してたらリターンする
        if (Mathf.Approximately(Time.timeScale, 0f)) return;
	    
        //髪の毛が生成されていないなら
        if (!hasGeneratedHair && gameManager.hasGeneratedHagePic) {
            
            //ゲームスタートで最初に流れてくるのが0本だとエラー起きるから最初は1本以上にした
            if(GameManager.score == 0){
                
                hairCount = (int)Random.Range(1, 5.99f);

            } else {

                hairCount = (int)Random.Range(0, 5.99f);
            
            }

            Debug.Log(hairCount);
            
            for(int i = 0; i < hairCount; i++) {

                float hairPosition = Random.Range(6.0f, 8.0f);

                GameObject hair = Instantiate(hairPrefab, new Vector3(hairPosition,3.0f,0f), Quaternion.identity);

                hairList.Add(hair);
                hairPosxList.Add(0);

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
                            hairPosxList.RemoveAt(i);

                        } else {

                            hairList[i].transform.position = new Vector3(hairPosxList[i] - (Mathf.Sin(Time.time * 5)),
                                                                         Time.deltaTime * -5 + hairList[i].transform.position.y, 
                                                                         0);
                            
    
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
                
                gameManager.sm.TapSound();

                GameManager.score++;

                hairPosxList[gameManager.currentPicture.transform.childCount - 1] = hairList[gameManager.currentPicture.transform.childCount - 1].transform.position.x;

                hairList[gameManager.currentPicture.transform.childCount - 1].transform.parent = null;

            }

        }

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
