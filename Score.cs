using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    public Transform player;
    public Text scoreText;

    public Rigidbody rb;

    void Update()
    {
        if (rb.position.y < -1f)
        {
            return;
        }
        scoreText.text = player.position.z.ToString("0");
    }
}
