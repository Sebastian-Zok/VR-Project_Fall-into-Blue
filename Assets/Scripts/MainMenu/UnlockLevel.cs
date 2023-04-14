using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnlockLevel : MonoBehaviour
{
    public GameObject locked, unlocked;
    public void Unlock()
    {
        unlocked.SetActive(true);
        locked.SetActive(false);
        Collider col =  GetComponent<Collider>();
        col.enabled = true;
    }
 
}
