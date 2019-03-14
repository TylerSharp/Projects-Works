using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StatusIndicator : MonoBehaviour
{
    [SerializeField]
    private RectTransform healthBarRect;
    [SerializeField]
    private Text healthText;
    
    void Start()
    {
        if(healthBarRect == null)
        {
            Debug.LogError("No health bar referenced");
        }
        if(healthText == null)
        {
            Debug.LogError("No halth text referenced");
        }
    }

    public void SetHealth(int _cur, int _max)
    {
        float _value = (float)_cur / _max;

        healthBarRect.localScale = new Vector3(_value, healthBarRect.localScale.y, healthBarRect.localScale.z);
        healthText.text = _cur + "/" + _max + " HP";

        Image image = healthBarRect.GetComponent<Image>();
        if (_cur <= 0.25 * _max)
        {
            image.color = new Color(255, 0, 0);
        }
        else if (_cur <= 0.5 * _max)
        {
            image.color = new Color(229, 207, 0); 
        }
    }
}
