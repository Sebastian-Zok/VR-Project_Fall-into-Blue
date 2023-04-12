using UnityEngine;
using UnityEngine.InputSystem;


public class DiveForce : MonoBehaviour
{
    public float diveForce;
    private Rigidbody rb;

    public InputActionReference joystickLeftClickReference = null;


    void Start()
    {
        rb = GetComponent<Rigidbody>();
     }

    public void OnGround()
    {
        if (joystickLeftClickReference.action.ReadValue<float>() == 1)
        {
            rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y - diveForce, rb.velocity.z);
        }
    }
}
