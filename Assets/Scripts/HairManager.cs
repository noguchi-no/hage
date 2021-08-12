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
    public GameObject canvas;
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
            
            for(int i = 0; i < hairCount; i++) {

                GameObject hair = Instantiate(hairPrefab);

                hairList.Add(hair);
                hairPosxList.Add(0);

                hair.transform.SetParent(gameManager.currentPicture.transform, false);
                hair.GetComponent<RectTransform>().anchoredPosition = new Vector2(Random.Range(-250, 250), Random.Range(300, 400));


            } 

            hasGeneratedHair = true;   
                       
        } else {

            if(gameManager.currentPicture != null) {
                
                HairPick();

                for(int i = 0; i < hairList.Count; i++) {
                    
                    if(hairList[i].transform.parent == canvas.transform) {
                        
                        if(hairList[i].GetComponent<RectTransform>().anchoredPosition.y < 0) {

                            Destroy(hairList[i]);

                            //リストからも消す
                            hairList.RemoveAt(i);
                            hairPosxList.RemoveAt(i);

                        } else {

                            hairList[i].GetComponent<RectTransform>().anchoredPosition = new Vector2(
                                hairPosxList[i] + Mathf.Sin(Time.time * 10)*50, 
                                hairList[i].GetComponent<RectTransform>().anchoredPosition.y + Time.deltaTime * -800);
                                
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

                hairPosxList[gameManager.currentPicture.transform.childCount - 1] = hairList[gameManager.currentPicture.transform.childCount - 1].GetComponent<RectTransform>().anchoredPosition.x;

                hairList[gameManager.currentPicture.transform.childCount - 1].transform.SetParent(canvas.transform, false);

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
