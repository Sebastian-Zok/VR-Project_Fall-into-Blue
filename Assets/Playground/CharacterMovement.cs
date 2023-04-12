using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class CharacterMovement : MonoBehaviour
{
    [Header("Movement Parameters")]
    public float moveSpeed;
    public float skiingSpeed;
    public float breakForce;
    public float misclickBreakForce;

    public float tiltForce;
    public float maxTiltToBodyRotationRatio;
    public float minTiltToBodyRotationRatio;
    public float glidingForce;

    public float flappingForce;

    private float inAirTime;
    public float glideActivateTime;
    public float cooldownPeriodInSeconds;
    public float loseImpact, slowImpact, slowMultiplier;


    private Rigidbody rb;
  
    private float lastBoostTimeStamp;
     

    [Header("Output Parameters")]
    private bool grounded = false;
    public bool isUphill;
     public Text debugText, debugText1, debugText2;


    [Header("Input References")]
    public GameObject cam;
    public InputActionReference joystickLeftClickReference = null;
    public InputActionReference joystickRightClickReference = null;
    public InputActionReference leftJoystickReference = null;
    public InputActionReference rightControllerVelocity = null;
    public InputActionReference leftControllerVelocity = null;
    public InputActionReference rightControllerPosition = null;
    public InputActionReference leftControllerPosition = null;


    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();  
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (grounded)
        {
            OnGround();
        }
        else
        {
            InAir();
        }
    }

   
    void OnGround() {

        /*
        #region JoystickMove
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
        #endregion
         


        #region Break (rightJoystick)
        if (joystickRightClickReference.action.ReadValue<float>() == 1)
        {
            rb.velocity = rb.velocity * breakForce;
        }
        #endregion
       


        #region Skiing System
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
            if (isUphill)
            {
                rb.useGravity = false;
            }
        }
        #endregion

        

        #region Tilt control
        var angle = Vector3.Angle(cam.transform.forward, rb.velocity);
        if (angle < maxTiltToBodyRotationRatio && angle > minTiltToBodyRotationRatio)
        {
            Quaternion quat = Quaternion.Euler(0, -cam.transform.localRotation.z * tiltForce, 0);

           // Quaternion quatc = Quaternion.Lerp(cam.transform.localRotation, quat, Time.deltaTime * 0.5f);
            rb.velocity = quat * rb.velocity;
           /* debugText.text = quat.ToString();
            debugText2.text = quatc.ToString();

            gameObject.transform.Rotate(new Vector3(0,quatc.y, 0), Space.Self);           
        }
       */
    }


     void InAir()
    {
         #region Flapping
             var leftHandVelocity = leftControllerVelocity.action.ReadValue<Vector3>().y;
             var rightHandVelocity = rightControllerVelocity.action.ReadValue<Vector3>().y;
             var vel = leftHandVelocity + rightHandVelocity;

             if (vel < -1 && rb.velocity.y <= 0)
             {
                  rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y * flappingForce, rb.velocity.z);
             }
         #endregion

         #region Dive Force 
         if (joystickLeftClickReference.action.ReadValue<float>() == 1)
            {
                rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y - 0.5f, rb.velocity.z);
            }
         #endregion

         #region Glide
            if (Time.time  > (inAirTime + glideActivateTime))
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
                        debugText2.text = diff.ToString();
                    }
                }



            }
        #endregion

    }
 
    void OnCollisionExit(Collision collision)
    {
         if (collision.gameObject.tag == "Terrain")
        {
            inAirTime = Time.time;
            grounded = false;
            rb.useGravity = true;
        }
    }


    void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.tag == "Terrain")
        {      
            grounded = true;        
        }
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Terrain")
        {
            grounded = true;

            Impact(collision); 
        }
    }



    void Impact(Collision collision)
    {
        if (Time.time > (inAirTime + 1))
        {
            Vector3 normal = collision.contacts[0].normal;
            Vector3 vel = rb.velocity;
            float impact = vel.y + collision.relativeVelocity.y;
            // measure angle
            Debug.DrawRay(transform.position, normal, Color.green, 100f);
            Debug.DrawRay(transform.position, vel, Color.red, 100f);
            Debug.DrawRay(transform.position, collision.relativeVelocity, Color.blue, 100f);
            Debug.DrawRay(transform.position, new Vector3(1, 1, 1) * impact, Color.cyan, 100f);

            if (impact < collision.relativeVelocity.y)
            {

                debugText.text = "nee";
            }
            else
            {
                debugText.text = Mathf.Abs(vel.y - collision.relativeVelocity.y).ToString();
                if (impact > 4)
                {
                    // rb.velocity /= slowMultiplier * impact;
                    rb.AddForce(-rb.velocity * impact);
                }
            }
        }
    }
}
