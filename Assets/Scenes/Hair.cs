using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Hair : MonoBehaviour
{
    int count = 0;
    public GameObject [] Hairgroup;
    int number;
    float speed = -18.0f;
    Image hage;
    public Sprite hage2;
    int counter = 0;
    
    // Start is called before the first frame update
    void Start()
    {
        hage = this.GetComponent<Image>();
    
    }

    
    // Update is called once per frame
    void Update()
    {
        

        if (Input.GetMouseButtonDown(0))
        {
            //counter++;
            //if (counter == 1)
            
            number = Random.Range(0, Hairgroup.Length);
            for(int i = 0; i <= number; i++)
            {
                float posi = Random.Range(-1.0f, 1.0f);
                Instantiate(Hairgroup[number], new Vector3(posi,0f,0f), Quaternion.identity);
            }
            
        
     
        
        count += number;

            //if (counter >= 2 && counter <= number)
            {
                
                    //Destroy(transform.GetChild(0).gameObject);
                
            
            //↓なくしたらInvokeはできる、spriteだから参照できない？
            //hage.sprite = hage2;

            //Invoke("Delay", 2.0f);            
            }
            

        }


        
        //transform.Translate(Time.deltaTime * speed, 0, 0);
     
        
    }
    

    //void Delay() {Debug.Log("できてる" //speed = -18.0f;}
    
}
