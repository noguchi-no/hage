using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GO4Coroutine : MonoBehaviour
{
    public GameManager gameManager;

    private IEnumerator GameOver(){

        yield return new WaitForSeconds(1.0f);

        SceneManager.LoadScene("GameOver");

    }

    

    // Update is called once per frame
    void Update()
    {
        if(gameManager.currentPicture.GetComponent<HagePicture>().isSad)
        {
            StartCoroutine("GameOver");
        }
        
    }
}
