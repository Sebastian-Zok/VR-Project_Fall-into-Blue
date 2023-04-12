using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoostPlatform : MonoBehaviour
{
    public float boostForce;

    private Rigidbody rb;

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            rb = other.gameObject.GetComponent<Rigidbody>();
            rb.velocity = rb.velocity * boostForce;
        }
    }
}