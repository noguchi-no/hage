using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;
using UnityEngine.UI;

public class ToTimeAttack : MonoBehaviour
{
    public Button ToTimeAttackButton;
    public void OnClick() {
        transform.DOScale(ToTimeAttackButton.transform.localScale*1.1f, 0.2f).SetEase(Ease.OutElastic).OnComplete(() =>
        {
            SceneManager.LoadScene("TimeAttack");
        });
    }
}
