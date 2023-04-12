using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class JoystickMovement : MonoBehaviour
{
    [Header("Movement Parameters")]
    public float moveSpeed;

    public InputActionReference leftJoystickReference = null;
    public InputActionReference joystickLeftClickReference = null;
    private Camera cam;

    private Rigidbody rb;
    private float lastBoostTimeStamp;
    public float cooldownPeriodInSeconds;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        cam = Camera.main;
    }

    public void OnGround() {
         if (rb.velocity.magnitude < moveSpeed * 2)
        {
            Vector2 inputAxis = leftJoystickReference.action.ReadValue<Vector2>();
            Vector3 direction = inputAxis.y * cam.transform.forward + inputAxis.x * cam.transform.right;
            rb.velocity = new Vector3(direction.x, 0, direction.z) * moveSpeed;
            #region Intial Boost
            if (lastBoostTimeStamp + cooldownPeriodInSeconds <= Time.time)
            {
                if (joystickLeftClickReference.action.ReadValue<float>() == 1)
                {
                    rb.AddForce(new Vector3(cam.transform.forward.x, 0, cam.transform.forward.z) * 500f);
                    lastBoostTimeStamp = Time.time;
                }
            }
            #endregion
        }
    }
 
}
