using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HageGenerator : MonoBehaviour
{
    GameManager hage;

    float speed = -18.0f;
    
    // Start is called before the first frame update
    void Start()
    {
        hage = GameObject.Find("GameManager").GetComponent<GameManager>();
        //hair = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    
    /* Update is called once per frame
    //void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
             StartCoroutine("Coroutine");
        }
        //if (transform.position.x <= 0)
        {
            //StopCoroutine("Coroutine");
        }
           if(transform.position.x <= -5.0f)
        {
            Destroy(gameObject);
        }
    }   
        //transform.Translate(Time.deltaTime * this.speed, 0, 0);
        
        
        //↓ちょっとずれてしまう（<= 0.0fだとさらにズレる）
        /*if (transform.position.x <= 0.18f)
        {
            //Time.timeScale = 0;
        }
        if (hage.count >= 2)
        {
            Time.timeScale = 1;
            Invoke("Stop", 0.3f);
        }
        
       
    
    
    void Stop ()
    {
        
            hage.count--;

        if (hage.count <=1)
        {
            Time.timeScale = 0;
        }
        //一回しか呼び出されないからカウント増えても止まったまま
    }*/
  
    
    private IEnumerator Coroutine()
    {
        while(true)
        {
        transform.Translate(Time.deltaTime * this.speed, 0, 0);
        yield return null;
        }
        
    }
}
