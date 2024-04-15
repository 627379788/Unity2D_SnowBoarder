using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.ComTypes;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CrashDetector : MonoBehaviour
{
    [SerializeField] float delayTime = 0.2f;
    [SerializeField] ParticleSystem particleSystem;
    [SerializeField] AudioClip crashSFX;
    bool flag = true;
    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.tag == "ground" && flag) {
            FindObjectOfType<PlayerController>().DisableControls();
            flag = false;
            particleSystem.Play();
            GetComponent<AudioSource>().PlayOneShot(crashSFX);
            Invoke("ReloadScene",delayTime);
        }
    }
    void ReloadScene(){
        SceneManager.LoadScene(0);
    }
}
