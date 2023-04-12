using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InvertPlatform : MonoBehaviour
{
    private Rigidbody rb;

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            rb = other.gameObject.GetComponent<Rigidbody>();
            rb.velocity = -rb.velocity;
        }
    }

   
}
