using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class IK_Hand : MonoBehaviour
{
 
    [SerializeField] private GameObject followObject;

    [Header("Rotation Offset")]
 

    [Range(-360.0f, 360.0f)]
    public float Z;
    [Range(-360.0f, 360.0f)]
    public float X;
    [Range(-360.0f, 360.0f)]
    public float Y;

    [Header("Position Offset")]

    [Range(-1.0f, 1.0f)]
    public float pZ;
    [Range(-1.0f, 1.0f)]
    public float pX;
    [Range(-1.0f, 1.0f)]
    public float pY;


    private void Update()
    {
        gameObject.transform.position = new Vector3(followObject.transform.position.x - pX, followObject.transform.position.y - pY, followObject.transform.position.z - pZ);
        gameObject.transform.rotation = followObject.transform.rotation * Quaternion.Euler(new Vector3(X, Y, Z));
    }
}
