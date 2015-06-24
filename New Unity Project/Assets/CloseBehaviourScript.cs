using UnityEngine;
using System.Collections;

namespace Vuforia{

public class CloseBehaviourScript : MonoBehaviour {

		// Use this for initialization
		void Start () {
		
		}
		
		// Update is called once per frame
		void Update () {

		}

		void OnMouseDown(){
			Debug.Log ("cerrar");
			Debug.Log ("cerrar");
			GameObject[] todos = GetComponentsInParent<GameObject> ();
			GameObject[] objetos = GameObject.FindGameObjectsWithTag ("inical"); 
			
			//Desahabilitar todos
			foreach (GameObject objeto in todos) 
				objeto.GetComponent<Renderer>().enabled=false;
			// habilitar principales
			
			foreach (GameObject objeto in objetos) 
				objeto.GetComponent<Renderer>().enabled=true;

		}
	}
}
