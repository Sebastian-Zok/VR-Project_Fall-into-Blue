using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeScreen : MonoBehaviour
{

    public bool FadeOnStart = true;
    public float duration;
    public Color c;
    private Renderer rend;
    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponent<Renderer>();
        if (FadeOnStart)
            FadeIn();
    }

    public void FadeIn()
    {
        Fade(1, 0);
    }

    public void FadeOut()
    {
        Fade(0, 1);
    }

    // Update is called once per frame
    public void Fade(float alphaIn, float alphaOut)
    {
        StartCoroutine(FadeRoutine(alphaIn, alphaOut));
    }

    public IEnumerator FadeRoutine(float alphaIn, float alphaOut)
    {
        rend.enabled = true;
        float timer = 0;
        while (timer <= duration)
        {
            Color newColor = c;
            newColor.a = Mathf.Lerp(alphaIn, alphaOut, timer / duration);
            rend.material.SetColor("_Color", newColor);
            timer += Time.deltaTime;
            yield return null;
        }

        Color newColor2 = c;
        newColor2.a = alphaOut;
        rend.material.SetColor("_Color", newColor2);
        rend.enabled = false;
    }
}
