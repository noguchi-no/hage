using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using TMPro;

public class TitleAnimation : MonoBehaviour
{
    
    [Header("通常時の画像")]
    public Sprite[] hagePics;
    public GameObject hagePrefab;
    public GameObject currentPicture;
    public GameObject canvas;
    public float time4Ani;
    public TextMeshProUGUI titleText;
     
    private List<int> rotateList = new List<int>{0, 360, 720};
    
    // Start is called before the first frame update
    void Awake()
    {
        if(GameOverManager.countForAdmob >= 1){
        
            AdMobInters._interstitial.Show();
            GameOverManager.countForAdmob = 0;
            }
    }
    void Start()
    {
        
        //フレームレートの設定
        Application.targetFrameRate = 60;
        titleText.alpha = 0;
        currentPicture = Instantiate(hagePrefab, new Vector2(0, 0), Quaternion.identity);
        int hagePicNums = Random.Range(0,5);
        currentPicture.GetComponent<Image>().sprite = hagePics[hagePicNums];
        currentPicture.transform.SetParent(canvas.transform, false);
        currentPicture.transform.SetAsFirstSibling();
        float positionY = currentPicture.GetComponent<RectTransform>().anchoredPosition.y;
        
        
        
        var sequence = DOTween.Sequence();
        
            sequence
                .Append(currentPicture.GetComponent<RectTransform>().DOAnchorPosY(positionY + 1000, time4Ani).SetEase(Ease.OutElastic).From(true))
                .Join(currentPicture.GetComponent<Image>().DOFade(1.0f, time4Ani))
                .Join(currentPicture.GetComponent<RectTransform>().DOLocalRotate(new Vector3(rotateList[Random.Range(0,3)], rotateList[Random.Range(0,3)], rotateList[Random.Range(0,3)]), time4Ani, RotateMode.FastBeyond360))
                .Join(titleText.DOFade(1, time4Ani)).SetEase(Ease.OutBack)
                .Join(titleText.rectTransform.DOLocalMoveY(-50f, time4Ani).SetEase(Ease.OutBack).From(true));

    }

}
