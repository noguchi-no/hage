using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Menu : MonoBehaviour
{

public GameObject popUp;

void Update()
{
    
    if(popUp.activeSelf){

        Time.timeScale = 0f;
        
    }
    else{

        Time.timeScale = 1f;
        
    }
}
    
}
