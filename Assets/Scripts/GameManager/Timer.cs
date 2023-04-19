using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Timer : MonoBehaviour
{
    public int level;
    public float timeRemaining = 10;
    public bool timerIsRunning = false;
    public Text timerText;

    public int coinCounter;
    public Text coinText;

    public Text playerInfo;

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
  
        coinCounter++;
        coinText.text = coinCounter.ToString() + " of 5";
        if(coinCounter == 5)
        {
            if (PlayerPrefs.GetInt("Level") < level)
            {
                PlayerPrefs.SetInt("Level", level + 1);
            }
            playerInfo.text = "You won";
        }
    }
}
