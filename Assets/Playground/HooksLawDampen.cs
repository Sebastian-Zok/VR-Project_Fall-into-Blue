using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HooksLawDampen : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    /*
       RaycastHit hit;

       if (Physics.Raycast(transform.position, -Vector3.up, out hit, 1f))
       {
           float forceAmount = HooksLawDampen(hit.distance);
           rb.AddForceAtPosition(forceAmount * Vector3.up, rb.centerOfMass);
           // debugText2.text = previousVelocity.ToString();
       }
       else
       {
           lastHitDistance = length * 1.1f;
       }


   public float strength, length, dampening, lastHitDistance;

   private float  HooksLawDampen(float hitDistance)
   {
       float forceAmount = strength * (length - hitDistance) + (dampening * (lastHitDistance - hitDistance));
       forceAmount = Mathf.Max(0f, forceAmount);
       lastHitDistance = hitDistance;
       return forceAmount;
   }
     */

    // Update is called once per frame
    void Update()
    {
        
    }
}
