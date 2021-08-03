using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameOverManager : MonoBehaviour
{
    public GameObject scoreText;

    void Start() {

        scoreText.GetComponent<Text>().text = "<size=100>" + GameManager.score.ToString() + "</size>" + "本抜き";
    
    }

    public void OnClick() {

        if(GameManager.timeAttack){
            SceneManager.LoadScene("TimeAttack");
        }
        else{
            SceneManager.LoadScene("Game");
        }
        

    }
    
}
