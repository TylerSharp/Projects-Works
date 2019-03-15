using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroySky : MonoBehaviour
{
    void OnTriggerEnter()
    {
        GetComponent<Collider>().enabled = false;
    }
}
