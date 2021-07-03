using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject [] pics;
    int number;
    public int count=0;
    bool stop = true;
    //bool click = false;
    //float speed = 0;
    public GameObject picture;  
    Hair hairs;
 
    // Start is called before the first frame update
    void Start()
    {
        hairs = GameObject.Find("Hair").GetComponent<Hair>();
    }

    // Update is called once per frame
    void Update()
    {

        if(stop)
        {
            if(Input.GetMouseButtonDown(0))
            {
                number = Random.Range(0, pics.Length);        
                picture = Instantiate(pics[number], new Vector3(7,0,0), Quaternion.identity);
                stop = false;
            }
        }
         
        if(hairs.make == true)
        {
            stop = true;
        }
        
                
        
      
    }
   /*void Stop ()
   {
    //Time.timeScale = 0;
   }
   */
}
