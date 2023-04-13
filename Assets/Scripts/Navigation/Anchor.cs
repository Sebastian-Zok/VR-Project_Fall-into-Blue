using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Anchor : MonoBehaviour
{
    [SerializeField] private GameObject AnchorPoint;

    private void Update()
    {
        gameObject.transform.position = new Vector3(AnchorPoint.transform.position.x, AnchorPoint.transform.position.y, AnchorPoint.transform.position.z);
    }
}
