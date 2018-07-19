using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {


    // public
    public float m_Speed = 12f;
    public float m_turnSpeed = 180f;

    // private
    private float m_movementInputValue;
    private float m_turnInputValue;
    private Rigidbody m_rigidbody;
    private Quaternion targetRotation;


    private void Awake()
    {
        
    }

    // Use this for initialization
    void Start ()
    {
        targetRotation = transform.rotation;
        m_rigidbody = GetComponent<Rigidbody>();
    }
	
	// Update is called once per frame
	void Update ()
    {
        m_movementInputValue = Input.GetAxis("Vertical");
        m_turnInputValue = Input.GetAxis("Horizontal");

        //Debug.Log(m_movementInputValue + " " + m_turnInputValue);
    }

    private void FixedUpdate()
    {
        // Adjust the rigidbodies position and orientation in FixedUpdate.
        Move();
        Turn();
    }

    private void Move()
    {
        // Create a vector in the direction the tank is facing with a magnitude based on the input, speed and the time between frames.
        //Vector3 movement = transform.forward * m_movementInputValue * m_Speed * Time.deltaTime;

        // Apply this movement to the rigidbody's position.
        //m_rigidbody.MovePosition(m_rigidbody.position + movement);

        //transform.Rotate(0, x, 0);
        //transform.Translate(Vector3.forward * input * moveSpeed);
        //transform.Translate(movement);

        m_rigidbody.velocity = transform.forward * m_movementInputValue * m_Speed;

        // Debug.Log(transform.forward * m_movementInputValue * m_Speed);
    }


    private void Turn()
    {
        // Determine the number of degrees to be turned based on the input, speed and time between frames.
        //float turn = m_turnInputValue * m_turnSpeed * Time.deltaTime;

        // Make this into a rotation in the y axis.
        //Quaternion turnRotation = Quaternion.Euler(0f, turn, 0f);

        // Apply this rotation to the rigidbody's rotation.
        // m_rigidbody.MoveRotation(m_rigidbody.rotation * turnRotation);
        // transform.Rotate(0, turn, 0);
        //transform.Translate(0, 0, turn);

        targetRotation *= Quaternion.AngleAxis(m_turnInputValue * m_turnSpeed * Time.deltaTime, Vector3.up) ;

        transform.rotation = targetRotation;
    }
}
