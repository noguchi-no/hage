using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Hair : MonoBehaviour
{
    //int count = 0;
    public GameObject hairs;
    public int number;
    //float speed = -18.0f;
    GameManager hage;
    //public Sprite hage2;
    int counter = 0;
    public List<GameObject> hairList = new List<GameObject>();
    //public Transform hageTrans;
    public bool make = true;
    GameObject hairInstance;
    
    
    // Start is called before the first frame update
    void Start()
    {
        hage = GameObject.Find("GameManager").GetComponent<GameManager>();
    
    }

    
    // Update is called once per frame
    void Update()
    {

        if (make)
        {
            
            if (Input.GetMouseButtonDown(0))
            {   
                    //↓4が出る確率が低い？？？
                    number = Random.Range(0, 4);
                
                
                    for(int i = 0; i <= number; i++)
                    {           
                        float posi = Random.Range(6.0f, 8.0f);
                        hairInstance = Instantiate(hairs, new Vector3(posi,3.0f,0f), Quaternion.identity);

                        hairList.Add(hairInstance);

                        
                        
                        hairInstance.transform.SetParent(hage.picture.transform);
                    } 
                    //counter++;
                    //make = false;                    
            }
                //if (counter >= 2 && counter <= number)    
                        //Destroy(transform.GetChild(0).gameObject);
                //↓なくしたらInvokeはできる、spriteだから参照できない？
                //hage.sprite = hage2;

                //Invoke("Delay", 2.0f);            
        }

        if (make == false)
        {
            if(Input.GetMouseButtonDown(0))
            {
                        Destroy(hairList[number);
                        //Destroy(transform.GetChild(number).gameObject);
                        number--;
                        
                        if(number == -1)
                        {
                            make = true;
                            hairList.Clear();
                        }
            }

        }
                   
    }
    //void Delay() {Debug.Log("できてる" //speed = -18.0f;}
    
}
