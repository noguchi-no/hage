using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ToGame : MonoBehaviour
{
    public void OnClick()
    {
        if (GameManager.timeAttack){
            SceneManager.LoadScene("TimeAttack");
        }
        else{
            SceneManager.LoadScene("Game");
        }
        
    }

//条件分岐でタイムアタックとノーマルモードに分けてロードシーンする
}
