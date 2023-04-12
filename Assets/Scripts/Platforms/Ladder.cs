using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ladder : MonoBehaviour
{
    public float ladderForce;
    private Rigidbody rb;
    private Vector3 vel;
    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            rb = other.gameObject.GetComponent<Rigidbody>();
            vel = rb.velocity;
         }
    }

    void OnTriggerStay(Collider other)
    {
        if (other.tag == "Player")
        {
            rb.velocity = new Vector3(0, 10, 0);
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            rb.velocity = vel;
        }
    }
}
