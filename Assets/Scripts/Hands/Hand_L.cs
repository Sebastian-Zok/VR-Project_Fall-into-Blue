using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class Hand_L : MonoBehaviour
{

    public InputActionReference leftGrabReference = null;
    public InputActionReference leftTriggerReference = null;
 
    public GameObject handModel;

    private Animator handAnimator;

    // Start is called before the first frame update
    void Start()
    {
        handAnimator = this.gameObject.GetComponent<Animator>();
    }

    void UpdateHandAnimation()
    {
            handAnimator.SetFloat("Grab", leftGrabReference.action.ReadValue<float>());
            handAnimator.SetFloat("Trigger", leftTriggerReference.action.ReadValue<float>());  
    }

    // Update is called once per frame
    void Update()
    {
        UpdateHandAnimation();
    }


    public void activateHand()
    {
        handModel.SetActive(true);
    }

    public void deactivateHand()
    {
        handModel.SetActive(false);
    }
}
