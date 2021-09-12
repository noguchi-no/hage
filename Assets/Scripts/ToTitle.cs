using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;
using UnityEngine.UI;

public class ToTitle : MonoBehaviour
{
    public Button toTitleButton;
    public void OnClick() {
        transform.DOScale(toTitleButton.transform.localScale*1.1f, 0.2f).SetEase(Ease.OutElastic).OnComplete(() =>
        {
            SceneManager.LoadScene("Title");
        });
        

    }
}
