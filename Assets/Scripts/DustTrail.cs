using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DustTrail : MonoBehaviour
{
    [SerializeField] ParticleSystem dustParticle;
    void OnCollisionEnter2D(Collision2D other) {
        if (other.gameObject.tag == "ground") {
            dustParticle.Play();
        }
    }

    void OnCollisionExit2D(Collision2D other) {
        if(other.gameObject.tag == "ground") {
            dustParticle.Stop();
        }
    }
}
