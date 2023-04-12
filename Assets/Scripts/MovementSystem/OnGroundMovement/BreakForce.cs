using UnityEngine;
using UnityEngine.InputSystem;


public class BreakForce : MonoBehaviour
{

    private Rigidbody rb;
    public float breakForce;
    public InputActionReference joystickRightClickReference = null;


    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    public void OnGround()
    {
        if (joystickRightClickReference.action.ReadValue<float>() == 1)
        {
            rb.velocity = rb.velocity * breakForce;
        }
     }
}
