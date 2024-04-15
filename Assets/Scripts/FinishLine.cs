using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishLine : MonoBehaviour
{
    [SerializeField] float delayTime = 1f;
    [SerializeField] ParticleSystem particleSystem;
   void OnTriggerEnter2D(Collider2D other)
   {
       if(other.tag == "Player") {
            particleSystem.Play();
            GetComponent<AudioSource>().Play();
            Invoke("ReloadScene",delayTime);
       }
   }
    void ReloadScene(){
        SceneManager.LoadScene(0);
    }
}
