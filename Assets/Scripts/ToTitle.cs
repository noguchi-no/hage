using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;


public class ToTitle : MonoBehaviour
{
    public void OnClick() {
        transform.DOScale(1.05f, 0.4f).SetEase(Ease.OutElastic).OnComplete(() =>
        {
            SceneManager.LoadScene("Title");
        });
        

    }
}
