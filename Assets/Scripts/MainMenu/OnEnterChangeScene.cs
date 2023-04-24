using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnEnterChangeScene : MonoBehaviour
{
    // Start is called before the first
    public Scene_Manager m;
    public int sceneIndex;
    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
             m.GoToScene(sceneIndex);
        }
    }
}
