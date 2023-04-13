using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtNearestCoin : MonoBehaviour
{
    public GameObject[] coins;
    private void Start()
    {
        coins = GameObject.FindGameObjectsWithTag("Coin");       
    }

    // Update is called once per frame
    void Update()
    {
        GameObject closest = null;
        float distance = Mathf.Infinity;
        
        foreach (GameObject coin in coins)
        {
            if (coin != null)
            {
                Vector3 diff = coin.transform.position - gameObject.transform.position;
                float curDistance = diff.magnitude;
                if (curDistance < distance)
                {
                    closest = coin;
                    distance = curDistance;
                }
            }
        }
        gameObject.transform.LookAt(closest.transform);
    }
}
