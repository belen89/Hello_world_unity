using UnityEngine;
using System.Collections;

namespace Vuforia{

	public class ButtonOnOffBehaviourScript : MonoBehaviour {

		// Use this for initialization
		void Start () {
		
		}
		
		// Update is called once per frame
		void Update () {
		
		}

		void OnMouseDown(){
			
			Renderer[] rendererComponents = GetComponentsInChildren<Renderer>(true);
			Collider[] colliderComponents = GetComponentsInChildren<Collider>(true);
			GameObject[] objetosAEsconder = GameObject.FindGameObjectsWithTag ("inicial");
			GameObject.FindGameObjectWithTag ("close").GetComponent<Renderer> ().enabled = true;
			
			foreach (Renderer component in rendererComponents)
			{
				if(component.CompareTag("pantallaDos")|| component.CompareTag("close"))
					component.enabled=true;
				else
					component.enabled=false;
							
			}
			
			// Enable colliders:
			foreach (Collider component in colliderComponents)
			{
				if(component.CompareTag("pantallaDos")|| component.CompareTag("close"))
					component.enabled=true;
				else
					component.enabled=false;
			}

			//Desable elements from fisrt screen

			foreach (GameObject objeto in objetosAEsconder)
				objeto.GetComponent<Renderer> ().enabled = false;

				


			
		}
}
}
