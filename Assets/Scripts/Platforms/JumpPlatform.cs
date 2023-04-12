using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpPlatform : MonoBehaviour
{

    public float jumpForce;
  

    private Rigidbody rb;

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            other.gameObject.GetComponent<Rigidbody>().AddForce(Vector3.up * jumpForce);
         }
    }
}
