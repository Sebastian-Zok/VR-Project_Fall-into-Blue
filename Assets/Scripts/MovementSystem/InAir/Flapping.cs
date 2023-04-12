using UnityEngine.InputSystem;
using UnityEngine;

public class Flapping : MonoBehaviour
{
    public float flappingForce;
    private Rigidbody rb;

    public InputActionReference rightControllerVelocity = null;
    public InputActionReference leftControllerVelocity = null;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    public void OnGround()
    {
        var leftHandVelocity = leftControllerVelocity.action.ReadValue<Vector3>().y;
        var rightHandVelocity = rightControllerVelocity.action.ReadValue<Vector3>().y;
        var vel = leftHandVelocity + rightHandVelocity;

        if (vel < -1 && rb.velocity.y <= 0)
        {
            rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y * flappingForce, rb.velocity.z);
        }
    }

}
