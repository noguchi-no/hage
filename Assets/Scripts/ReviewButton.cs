using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReviewButton : MonoBehaviour
{

    public void OnClick() {
        UnityEngine.iOS.Device.RequestStoreReview();
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
