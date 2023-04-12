using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WingsBelowCamera : MonoBehaviour
{
    [SerializeField] private GameObject followObject;

    private void Update()
    {
        gameObject.transform.position = new Vector3(followObject.transform.position.x, gameObject.transform.position.y  , followObject.transform.position.z   );
     }
}
