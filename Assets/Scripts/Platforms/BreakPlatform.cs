using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BreakPlatform : MonoBehaviour
{
    public float breakForce;

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            Rigidbody rb;
            rb = other.gameObject.GetComponent<Rigidbody>();
            rb.velocity = rb.velocity * breakForce;
        }
    }
}
