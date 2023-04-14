using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public int unlockedLevel;
    public GameObject[] levels;
    void Start()
    {   
        for(int i = 0; i < unlockedLevel; i ++)
        {
            levels[i].GetComponent<UnlockLevel>().Unlock();
        }
    }
}
