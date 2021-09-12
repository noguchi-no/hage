using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CameraShake : MonoBehaviour
{
    [SerializeField] private Camera _camera;
    // Start is called before the first frame update
    void Start()
    {
        _camera.DOShakePosition(duration: 10, strength: 1, vibrato: 1, fadeOut: false).SetLoops(-1);
        Debug.Log("振動");
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKey(KeyCode.Space))
        {
            
            
        }
    }
}
