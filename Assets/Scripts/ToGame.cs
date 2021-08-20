using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class ToGame : MonoBehaviour
{
    public void OnClick() {
        transform.DOScale(1.05f, 0.3f).SetEase(Ease.OutElastic).OnComplete(() =>
        {
            SceneManager.LoadScene("Game");
        });
        

    }

}
