using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class GameOverManager : MonoBehaviour
{
    
    public SoundManager sm;
    bool isSounded = false;
    void Start() {

        //scoreText.GetComponent<Text>().text = "<size=100>" + GameManager.score.ToString() + "</size>" + "本抜き";
    
    }
    

    void Update() {
        
        //謎に一回だけエラー出る
        if(!isSounded) {
            
            sm.playGameoverSound();

            isSounded = true;
        }
    }

    public void OnClick() {

        if(GameManager.timeAttack){

            transform.DOScale(1.05f, 0.4f).SetEase(Ease.OutElastic).OnComplete(() =>
        {
            SceneManager.LoadScene("TimeAttack");
        });

        } else{
            transform.DOScale(1.05f, 0.4f).SetEase(Ease.OutElastic).OnComplete(() =>
        {
            SceneManager.LoadScene("Game");
        });
        }
        

    }
    
}
