using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Menu : MonoBehaviour
{
bool isOnPause;

public void pause()
{
    
    if(isOnPause){

        Time.timeScale = 1;
        isOnPause = false;
    }
    else{

        Time.timeScale = 0;
        isOnPause = true;
    }
}
    
}
