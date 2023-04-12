using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ImpactSystem : MonoBehaviour
{

    private Rigidbody rb;
    public float impactThreshold;
    private float inAirTime;
 

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
     }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Terrain")
        {
            if (Time.time > (inAirTime + impactThreshold))
            {
                Vector3 normal = collision.contacts[0].normal;
                Vector3 vel = rb.velocity;
                float impact = vel.y + collision.relativeVelocity.y;
                // measure angle
                Debug.DrawRay(transform.position, normal, Color.green, 100f);
                Debug.DrawRay(transform.position, vel, Color.red, 100f);
                Debug.DrawRay(transform.position, collision.relativeVelocity, Color.blue, 100f);
                Debug.DrawRay(transform.position, new Vector3(1, 1, 1) * impact, Color.cyan, 100f);

                if (impact >= collision.relativeVelocity.y && impact > 4)
                    {
                        // rb.velocity /= slowMultiplier * impact;
                        rb.AddForce(-rb.velocity * impact);
                    }
                }
            }
        }
   

    void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.tag == "Terrain")
        {
            inAirTime = Time.time;
        }
    }

}
