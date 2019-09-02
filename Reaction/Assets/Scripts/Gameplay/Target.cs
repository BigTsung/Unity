using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{
    private Renderer meshRenderer;

    private void Awake()
    {
        meshRenderer = GetComponent<MeshRenderer>();
    }

    public void SetColor(Color color)
    {
        if(meshRenderer != null)
            meshRenderer.material.color = color;
    }
}
