using UnityEngine.InputSystem;
using UnityEngine;

public class TiltControl : MonoBehaviour
{

    public float maxTiltToBodyRotationRatio, minTiltToBodyRotationRatio, tiltForce;
    private Rigidbody rb;
    private Camera cam;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        cam = Camera.main;
    }

    public void OnGround()
    {
        var angle = Vector3.Angle(cam.transform.forward, rb.velocity);
        if (angle < maxTiltToBodyRotationRatio && angle > minTiltToBodyRotationRatio)
        {
            Quaternion quat = Quaternion.Euler(0, -cam.transform.localRotation.z * tiltForce, 0);
            rb.velocity = quat * rb.velocity;
        }
    }
}
