using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class GameOverManager : MonoBehaviour
{
    public Button gameButton;
    public SoundManager sm;
    bool isSounded = false;
    public static int countForAdmob;

    void Start() {

        countForAdmob++;
        AdMobBanner.bannerView.Show();
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

            transform.DOScale(gameButton.transform.localScale*1.1f, 0.4f).SetEase(Ease.OutElastic).OnComplete(() =>
            {
                SceneManager.LoadScene("TimeAttack");
            });

        } else{
            transform.DOScale(gameButton.transform.localScale*1.1f, 0.4f).SetEase(Ease.OutElastic).OnComplete(() =>
            {
                SceneManager.LoadScene("Game");
            });
        }
        

    }
    
}
