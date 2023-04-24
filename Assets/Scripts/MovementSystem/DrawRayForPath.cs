using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawRayForPath : MonoBehaviour
{

    private float last;

    // Update is called once per frame
    void Update()
    {
        if (last + 1 > Time.time)
        {
            Debug.DrawRay(transform.position, new Vector3(0, 1, 0) * 0.1f, Color.cyan, 100f);
            last = Time.time;
        }
    }
}
