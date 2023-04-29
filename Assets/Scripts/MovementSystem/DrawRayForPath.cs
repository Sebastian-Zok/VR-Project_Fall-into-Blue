using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawRayForPath : MonoBehaviour
{
    public int time;
    private float last;
    public GameObject coin;

    // Update is called once per frame
    void Update()
    {
        if (last + time < Time.time)
        {
            Debug.DrawRay(transform.position, new Vector3(0, 1, 0) * 0.1f, Color.cyan, 100f);
            last = Time.time;

            if(coin != null)
            {
                Instantiate(coin, this.gameObject.transform.position, Quaternion.identity);

            }

        }
    }
}
