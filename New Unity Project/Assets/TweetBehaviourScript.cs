using UnityEngine;
using System.Collections;

public class TweetBehaviourScript : MonoBehaviour {

	int count=0;
	bool showit=true;
	GameObject Pack_fiesta;
	bool pack=false;
	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per 10 frames
	void FixedUpdate ()
	{
		Pack_fiesta = GameObject.Find ("Pack_fiesta");
		pack = Pack_fiesta.GetComponent<Renderer> ().enabled;
		if (pack) {
			Time.fixedDeltaTime = 5F;
			if (showit) {
				//gameObject.GetComponent<Renderer>().material.color=Color.black;
				gameObject.GetComponent<Renderer> ().enabled = false;
				showit = false;
			} else {
				//gameObject.GetComponent<Renderer>().material.color=Color.white;
				gameObject.GetComponent<Renderer> ().enabled = true;
				showit = true;
			}
			Debug.Log (gameObject.name);
		}
		
	}
	
	
	void Update ()
	{
		//Debug.Log("Update time :" + Time.deltaTime);
	}
}
