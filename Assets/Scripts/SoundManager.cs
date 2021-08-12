using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public AudioClip flickSE;
    public AudioClip tapSE;
    public AudioClip sadSE;
    public AudioClip happySE;
    public AudioClip startSE;
    public AudioClip gameoverSE;
    public AudioSource aud;
    
    // Start is called before the first frame update
    void Start() {

        aud = this.GetComponent<AudioSource>();
    }

    public void FlickSound()
    {
        aud.PlayOneShot(flickSE);
    }

    public void TapSound()
    {
        aud.PlayOneShot(tapSE);
    }

    public void HappySound()
    {
        aud.PlayOneShot(happySE, 0.7f);
    }
    public void SadSound()
    {
        aud.PlayOneShot(sadSE);
    }

    public void playStartSound() {
        aud.PlayOneShot(startSE);
    }

    public void playGameoverSound() {
        aud.PlayOneShot(gameoverSE);
    }

    
}
