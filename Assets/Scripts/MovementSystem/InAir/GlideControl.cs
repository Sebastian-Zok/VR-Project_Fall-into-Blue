using UnityEngine.InputSystem;
using UnityEngine;

public class GlideControl : MonoBehaviour
{
    public float maxTiltToBodyRotationRatio, minTiltToBodyRotationRatio, glideActivateTime, glidingForce;
    private float inAirTime;
    private Rigidbody rb;
    private Camera cam;

    public InputActionReference rightControllerPosition = null;
    public InputActionReference leftControllerPosition = null;


    void Start()
    {
        rb = GetComponent<Rigidbody>();
        cam = Camera.main;

    }

    public void OnGround()
    {
        if (Time.time > (inAirTime + glideActivateTime))
        {
            var angle = Vector3.Angle(cam.transform.forward, rb.velocity);
            if (angle < maxTiltToBodyRotationRatio && angle > minTiltToBodyRotationRatio)
            {
                Vector3 rightPos = rightControllerPosition.action.ReadValue<Vector3>();
                Vector3 leftPos = leftControllerPosition.action.ReadValue<Vector3>();
                if (Vector3.Distance(rightPos, leftPos) > 1.2f)
                {
                    float diff = rightControllerPosition.action.ReadValue<Vector3>().y - leftControllerPosition.action.ReadValue<Vector3>().y;
                    diff = diff > 0.5f ? 0.5f : diff;
                    diff = diff < -0.5f ? -0.5f : diff;
                    rb.velocity = Quaternion.Euler(0, -diff * glidingForce, 0) * rb.velocity;
                 }
            }
        }
    }
}
