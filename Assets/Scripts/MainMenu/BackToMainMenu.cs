using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;


public class BackToMainMenu : MonoBehaviour
{
    public Scene_Manager m;
    public InputActionReference mainMenuClickReference = null;
    public float pressedTimeThreshold;
    public Text playerInfo;
    private float lastNotPressedTime;
    private string storeText;
    private bool clicked = false;
    void Update()
    {
        if (mainMenuClickReference.action.ReadValue<float>() == 1)
        {
            if (!clicked)
            {
                storeText = playerInfo.text;
                clicked = true;
            }
            playerInfo.text = "Hold to Return to Main Menu";
            if (lastNotPressedTime + pressedTimeThreshold < Time.time)
            {
                m.GoToScene(0);
            }
        }
        else {
            lastNotPressedTime = Time.time;
            if (clicked)
            {
                playerInfo.text = storeText;
                clicked = false;
            }
        }
    }
}
