using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public int unlockedLevel;
    public GameObject[] levels;
    void Start()
    {
        unlockedLevel = PlayerPrefs.GetInt("Level");
        if (unlockedLevel == 0)
        {
            unlockedLevel = 1;
        }
        for(int i = 0; i < unlockedLevel; i ++)
        {
            levels[i].GetComponent<UnlockLevel>().Unlock();
        }
    }
}
