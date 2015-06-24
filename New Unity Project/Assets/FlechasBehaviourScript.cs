using UnityEngine;
using System.Collections;

public class FlechasBehaviourScript : MonoBehaviour {

	float a=float.Parse("0.6");
	float b=float.Parse("0");
	float c=float.Parse("0.2");
	float d=float.Parse("0.65");
	float e=float.Parse("0.25");
	bool scale=true;
	GameObject Pack_fiesta;
	bool pack=false;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {


	}

	void FixedUpdate(){

		Pack_fiesta = GameObject.Find ("Pack_fiesta");
		pack = Pack_fiesta.GetComponent<Renderer> ().enabled;
		if (!pack) {
			Time.fixedDeltaTime = 0.4F;
			if (scale) {
				transform.localScale = new Vector3 (a, b, c);
				scale = false;
			} else {
				transform.localScale = new Vector3 (d, b, e);
				scale = true;
			}
		}
	}
}
