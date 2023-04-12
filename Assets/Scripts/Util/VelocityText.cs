using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class VelocityText : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject player;
    private Text text;
    private Rigidbody rb;

    void Start()
    {
       text = this.gameObject.GetComponent<Text>();
        rb = player.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        text.text = rb.velocity.magnitude.ToString();
    }
}
