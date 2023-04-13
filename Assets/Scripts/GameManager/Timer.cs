using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Timer : MonoBehaviour
{
    public float timeRemaining = 10;
    public bool timerIsRunning = false;
    public Text timerText;

    public int coinCounter;
    public Text coinText;

    private void Start()
    {
        // Starts the timer automatically
        timerIsRunning = true;
    }
    void Update()
    {
        if (timerIsRunning)
        {
            if (timeRemaining > 0)
            {
                timeRemaining -= Time.deltaTime;
                timerText.text = Mathf.FloorToInt(timeRemaining).ToString();
                
            }
            else
            {
                timerText.text =  "Time has run out!";
                timeRemaining = 0;
                timerIsRunning = false;
            }
        }
    }

   public void Coin()
    {
        print("sd");

        coinCounter++;
        coinText.text = coinCounter.ToString() + " of 5";
    }
}
