using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using TMPro;

public class TextStartAnime : MonoBehaviour
{
    
    public Ease easeType;
    public TextMeshProUGUI startText;
    bool isTextShowed;
    public float DurationSeconds;
    // Start is called before the first frame update

    void Start()
    {
        startText.DOFade(0.0f, DurationSeconds).SetEase(this.easeType).SetLoops(-1, LoopType.Yoyo);
    }

    void Update()
    {
        if(!isTextShowed){

            if(Input.GetMouseButtonDown(0)){
                RectTransform rect = GetComponent<RectTransform>();
                rect.DOScale(2f, 0.5f).OnComplete(()=> { startText.DOFade(0,0.25f).SetEase(easeType); });

                isTextShowed = true;
                DOTween.Kill(startText);
                
            }
        }
        
        
        
    }

   
    
}
