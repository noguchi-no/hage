using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using TMPro;

public class GameOAnimation : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI newRecordText;
    [SerializeField]
    private TextMeshProUGUI unitText;
    [SerializeField]
    private Text countText;
    [SerializeField]
    private TextMeshProUGUI gameOverText;

 
    // Start is called before the first frame update
    void Start()
    {
        
        newRecordText.alpha = 0;
        unitText.alpha = 0;
        gameOverText.alpha = 0;
        

        //スコア表示
        var sequence = DOTween.Sequence();
        sequence
            .Append(gameOverText.DOFade(1,1f)).SetEase(Ease.InOutFlash)
            .Join(gameOverText.rectTransform.DOLocalMoveY(-40f, 1f).SetEase(Ease.InOutFlash).From(true))
            .Append(countText.DOFade(1f, 2f))
            .Join(countText.DOCounter(0, GameManager.score, 2f))
            .AppendCallback(() => countText.transform.localScale = Vector3.one * 1.25f)
            .Append(countText.transform.DOScale(Vector3.one, 0.5f))
            .Append(unitText.DOFade(1f, 0.5f));
        
        //ニューレコードの表示
        if(GameManager.hasNewRecord){

            float positionX = newRecordText.rectTransform.anchoredPosition.x;

            sequence
                .Append(newRecordText.rectTransform.DOAnchorPosX(positionX -100, 1.0f).From(true))
                .Join(newRecordText.DOFade(1.0f, 1.0f));
        }


    }
}