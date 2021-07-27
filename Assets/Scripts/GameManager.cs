using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//ゲームの進行管理をするスクリプト
public class GameManager : MonoBehaviour {
    public List<GameObject> hagePrefabs = new List<GameObject>();
    public int score;
    public GameObject currentPicture;
    public GameObject scoreText;

    public HairManager hairManager;
    public bool hasGeneratedHagePic;
    public bool hasGeneratedFirstPic;

    // Update is called once per frame
    void Update()
    {

        scoreText.GetComponent<Text>().text = score.ToString();

        //ボタンを押したら
        if(!hasGeneratedFirstPic) {

            if(Input.GetMouseButtonDown(0)) {

                hasGeneratedFirstPic = true;
                
                int number = Random.Range(0, hagePrefabs.Count);    

                currentPicture = Instantiate(hagePrefabs[number], new Vector3(7,0,0), Quaternion.identity);

                hasGeneratedHagePic = true;
            
            }

        } else {

            if(currentPicture.GetComponent<HagePicture>().isFlicked) {

                int number = Random.Range(0, hagePrefabs.Count);    

                currentPicture = Instantiate(hagePrefabs[number], new Vector3(7,0,0), Quaternion.identity);

                hasGeneratedHagePic = true;

            }

        }
        
        if(currentPicture != null && currentPicture.GetComponent<HagePicture>().isClear) {

            currentPicture.GetComponent<HagePicture>().Flick();

            if(currentPicture.GetComponent<HagePicture>().isFlicked) {

                hasGeneratedHagePic = false;
                hairManager.hasGeneratedHair = false;

            }
            
        }
      
    }

}
