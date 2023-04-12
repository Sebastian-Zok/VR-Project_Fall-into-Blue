using UnityEngine;
using UnityEngine.InputSystem;

public class Skiing : MonoBehaviour
{

    private Camera cam;

    private Rigidbody rb;
    public float misclickBreakForce;
    public float skiingSpeed;
    private float lastBoostTimeStamp;
    public InputActionReference joystickLeftClickReference = null;
    public bool isUphill;


    void Start()
    {
        rb = GetComponent<Rigidbody>();
        cam = Camera.main;
    }

    public void OnGround()
    {
        isUphill = (rb.velocity.y > 0.0f) ? true : false;
        if (joystickLeftClickReference.action.ReadValue<float>() == 1)
        {
            if (isUphill && (lastBoostTimeStamp + 0.25f <= Time.time)) // Bergauf
            {
                rb.velocity = rb.velocity * misclickBreakForce;
            }
            else  // Bergab
            {
                rb.velocity = rb.velocity + new Vector3(cam.transform.forward.x, -1f, cam.transform.forward.z) * skiingSpeed;
            }
        }
        else
        {
           // Gravity off?
        }
    }
}
