using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class SnapTurn : MonoBehaviour
{

    public InputActionReference joystickAxisReference = null;
    private bool firstFlick = true;
    Vector2 valueFlick;


    void LateUpdate()
    {
        valueFlick = joystickAxisReference.action.ReadValue<Vector2>();
        if (firstFlick)
        {
            if ((valueFlick.x > 0.9f))
            {
                transform.Rotate(0, 45f, 0, Space.Self);
                firstFlick = false;
            }
            else if ((valueFlick.x < -0.9f))
            {
                transform.Rotate(0, -45f, 0, Space.Self);
                firstFlick = false;
            }
        }
        else if (valueFlick.x > 0.9f || (valueFlick.x < -0.9f))
        {
            firstFlick = false;
        }
        else
        {
            firstFlick = true;
        }
    }
}
