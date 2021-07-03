using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HairController : MonoBehaviour
{
    bool once = true;
    Hair hair;
    // Start is called before the first frame update
    void Start()
    {
        hair = GameObject.Find("Hair").GetComponent<Hair>();
    }

    // Update is called once per frame
    void Update()
    {
        
        
        if(transform.position.x <= -5.0f)
        {
            if (once)
        {
            hair.hairList.Clear();
            once = false;
        }
            
        }


    }
}
