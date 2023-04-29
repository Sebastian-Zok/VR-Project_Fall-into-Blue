using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class ResetLevel : MonoBehaviour
{

    public InputActionReference resetClickReference = null;


    void Update()
    {
        if (resetClickReference.action.ReadValue<float>() == 1)
        {
            print("sd");
            Application.LoadLevel(Application.loadedLevel);
        }
    }
}
