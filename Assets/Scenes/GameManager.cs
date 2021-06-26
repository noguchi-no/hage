using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject [] Prefab;
    int number;
    public int count=0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
        number = Random.Range(0, Prefab.Length);
        Instantiate(Prefab[number], new Vector3(7,0,0), Quaternion.identity);
        //count++;

        //Invoke("Stop", 0.3f);
        
        }
      
    }
   /*void Stop ()
   {
    //Time.timeScale = 0;
   }
   */
}
