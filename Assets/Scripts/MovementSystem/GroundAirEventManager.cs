using UnityEngine;
using UnityEngine.Events;
  

public class GroundAirEventManager : MonoBehaviour
{

    public UnityEvent onGround;
    public UnityEvent inAir;
    public float inAirTimeThreshold;

    private bool grounded = false;
    private float inAirTime;


    void Start()
    {
        if (onGround == null)
            onGround = new UnityEvent();

        if (inAir == null)
            inAir = new UnityEvent();

    }

    void FixedUpdate()
    {
        if (grounded)
        {
            onGround.Invoke();
        }
        else {
            if (Time.time > (inAirTime + inAirTimeThreshold)) {
                inAir.Invoke();
            }
        }
    }

    void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.tag == "Terrain")
        {
            inAirTime = Time.time;

            grounded = false;
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
        }
    }
}
