using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Scene_Manager : MonoBehaviour
{
    public FadeScreen fadeScreen;
    // Start is called before the first frame update
    public void GoToScene(int sceneIndex)
    {
        StartCoroutine(GoToSceneRoutine(sceneIndex));
    }

    IEnumerator GoToSceneRoutine(int sceneIndex)
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneIndex);
        operation.allowSceneActivation = false;

        fadeScreen.FadeOut();
        yield return new WaitForSeconds(fadeScreen.duration);
 
 

        operation.allowSceneActivation = true;
    }
}
