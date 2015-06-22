using UnityEngine;
using System.Collections;

public class TweetBehaviourScript : MonoBehaviour {

	int count=0;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void FixedUpdate ()
	{
		Debug.Log("FixedUpdate time :" + Time.deltaTime);
	}
	
	
	void Update ()
	{
		Debug.Log("Update time :" + Time.deltaTime);
	}
}
