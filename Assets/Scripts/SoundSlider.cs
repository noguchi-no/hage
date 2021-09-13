using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;//Sliderを使用するために必要

[RequireComponent(typeof(Slider))]
public class SoundSlider : MonoBehaviour
{

    Slider m_Slider;//音量調整用スライダー
    float volume = 1.0f;

    void Awake()
    {
        AudioListener.volume = volume;
        m_Slider = GetComponent<Slider>();
        m_Slider.value = AudioListener.volume;
        
    }

    private void OnEnable()
    {
        m_Slider.value = AudioListener.volume;
        //スライダーの値が変更されたら音量も変更する
        m_Slider.onValueChanged.AddListener((sliderValue) => AudioListener.volume = sliderValue);
    }

    private void OnDisable()
    {
        m_Slider.onValueChanged.RemoveAllListeners();
    }

}