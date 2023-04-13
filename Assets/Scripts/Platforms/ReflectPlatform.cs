using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReflectPlatform : MonoBehaviour
{
    private Rigidbody rb;
    public bool invertX, invertZ;
    private float timestamp;
 
    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            if (timestamp + 0.1f < Time.time)
            {
                rb = other.gameObject.GetComponent<Rigidbody>();
                float x, z;

                x = rb.velocity.x;
                z = rb.velocity.z;

                if (invertX)
                {
                    x *= -1;
                }
                if (invertZ)
                {
                    z *= -1;
                }


                rb.velocity = new Vector3(x, rb.velocity.y, z);
               // Instantiate(effect, gameObject.GetComponent<Collider>().ClosestPointOnBounds(other.gameObject.transform.position), transform.rotation * Quaternion.Euler(90, 0, 90));
             
                timestamp = Time.time;
            }
        }
    }
}
