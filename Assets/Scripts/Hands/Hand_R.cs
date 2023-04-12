using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class Hand_R : MonoBehaviour
{

    public InputActionReference rightGrabReference = null;
    public InputActionReference rightTriggerReference = null;

    public GameObject handModel;


    private Animator handAnimator;



    // Start is called before the first frame update
    void Start()
    {
        handAnimator = this.gameObject.GetComponent<Animator>();
    }

    void UpdateHandAnimation()
    {
        handAnimator.SetFloat("Grab", rightGrabReference.action.ReadValue<float>()); 
        handAnimator.SetFloat("Trigger", rightTriggerReference.action.ReadValue<float>());
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
