using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class ImageStartAnime : MonoBehaviour
{
    public Ease easeType;
    bool isImageShowed;

    // Start is called before the first frame update
    void Start()
    {
        

    }

    void Update()
    {
        if(!isImageShowed){

            if(Input.GetMouseButtonDown(0)){

            RectTransform rect = GetComponent<RectTransform>();
            rect.DOScaleY(1.2f, 0.3f).SetEase(easeType).OnComplete(() => {GetComponent<Image>().DOFade(0, 0.3f).SetEase(easeType);});
            
            isImageShowed = true;
            }
        }
    }

    
}
