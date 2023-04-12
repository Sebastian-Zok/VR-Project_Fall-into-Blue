using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionRay : MonoBehaviour
{
    private bool grounded;
    private Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
     }
    
    void OnCollisionExit(Collision other)
    { 
        rb.useGravity = true;
    }

    void Update(){
        if (Input.GetMouseButton(1)) 
        {
           rb.AddForce(-transform.up * 1.05f);
        }
    }

    void OnCollisionStay(Collision collision)
    {
        if (Input.GetMouseButton(0)) 
        {
            print("clicked");
            if(rb.velocity.y > 0.0f){
                 rb.velocity = rb.velocity * 0.5f;
                 print("BREAK");
            } else if( rb.velocity.y < 0.0f){
                 rb.velocity = rb.velocity * 1.05f;
                 print("BOOST");
            }

        }
        else {
            if(rb.velocity.y > 0.0f){
                 rb.useGravity = false;
            }
        }

        Vector3 forward = transform.TransformDirection(Vector3.forward) * 10;
        Debug.DrawRay(transform.position, rb.velocity, Color.green, 100f);
    
        foreach (ContactPoint contact in collision.contacts)
        {
            Debug.DrawRay(contact.point, contact.normal, Color.red, 100f);
        }
    }
}
