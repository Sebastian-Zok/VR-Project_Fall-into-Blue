using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Services.Analytics;
using Unity.Services.Core;
using Unity.Services.Core.Analytics;
public static class UGS_Analytics
{
    public static int level;
    public static float timeRemaining;
    public static int coinCounter = 0;

    public async static void LevelCompleted()
    {
        //Define Custom Parameters
        Dictionary<string, object> parameters = new Dictionary<string, object>()
       {
           { "levelNr", level},
            { "coinCounter", coinCounter },
            { "timeRemaining", timeRemaining }
       };

        try
        {
            // The ‘levelCompleted’ event will get cached locally 
            //and sent during the next scheduled upload, within 1 minute
            AnalyticsService.Instance.CustomData("levelCompleted", parameters);
        }
        catch (ServicesInitializationException)
        {
            try
            {
                await UnityServices.InitializeAsync();
                AnalyticsService.Instance.CustomData("levelCompleted", parameters);
            }
            catch (ConsentCheckException e)
            {
                Debug.Log(e.ToString());
            }
        }
    }

    public async static void LevelReset()
    {
        //Define Custom Parameters
        Dictionary<string, object> parameters = new Dictionary<string, object>()
       {
           { "levelNr", level},
            { "coinCounter", coinCounter },
            { "timeRemaining", timeRemaining }
       };

        try
        {
            // The ‘levelCompleted’ event will get cached locally 
            //and sent during the next scheduled upload, within 1 minute
            AnalyticsService.Instance.CustomData("levelReset", parameters);
        }
        catch (ServicesInitializationException)
        {
            try
            {
                await UnityServices.InitializeAsync();
                AnalyticsService.Instance.CustomData("levelReset", parameters);
            }
            catch (ConsentCheckException e)
            {
                Debug.Log(e.ToString());
            }
        }
    }
}
