using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;
using UnityEngine.UI;

public class ToGame : MonoBehaviour
{
    public Button toGameButton;
    public void OnClick() {
        transform.DOScale(toGameButton.transform.localScale*1.05f, 0.2f).SetEase(Ease.OutElastic).OnComplete(() =>
        {
            SceneManager.LoadScene("Game");
        });
        

    }

}
