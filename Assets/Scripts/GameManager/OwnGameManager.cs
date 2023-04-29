using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class OwnGameManager : MonoBehaviour
{
    public int level;
    public float timeRemaining = 10;
    public bool timerIsRunning = false;
    public Text timerText;

     private int totalCoins;
    public int coinCounter;
    public Text coinText;

    public Text playerInfo;

    private void Start()
    {
        // Starts the timer automatically
        timerIsRunning = true;
         totalCoins = GameObject.FindGameObjectsWithTag("Coin").Length;
        coinText.text = coinCounter.ToString() + " of " + totalCoins;

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
                playerInfo.text = "Try again (Right Grab to reset)";
                timeRemaining = 0;
                timerIsRunning = false;
            }
        }
    }

   public void Coin()
    {
  
        coinCounter++;
        coinText.text = coinCounter.ToString() + " of "+ totalCoins;
        if(coinCounter == totalCoins && timerIsRunning)
        {
            if (PlayerPrefs.GetInt("Level") < level)
            {
                PlayerPrefs.SetInt("Level", level + 1);
            }
            playerInfo.text = "You won";
        }
    }
}
