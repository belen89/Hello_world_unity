using UnityEngine;
using System.Collections;

namespace Vuforia
{
	public class ButtonPrincipalScript : MonoBehaviour {

		// Use this for initialization
		private GameObject baseObject;
		private GameObject pack;
		private string nameObject;
		private Renderer[] rendererComponents;

		void Start () {
			nameObject = this.gameObject.name;


	}
		
		// Update is called once per frame
		void Update () {
		
		}

		void OnMouseDown(){

			Renderer[] rendererComponents = GetComponentsInChildren<Renderer>(true);
			Collider[] colliderComponents = GetComponentsInChildren<Collider>(true);

			foreach (Renderer component in rendererComponents)
			{
				component.enabled = false;
				if(component.CompareTag("pantallaDos")){
					component.enabled=true;
					
				}

			}
			
			// Enable colliders:
			foreach (Collider component in colliderComponents)
			{
				component.enabled = false;
				if(component.CompareTag("pantallaDos")){

					component.enabled=true;
				}
			}
			Debug.Log ("Se agrego el video"); 
		}
	}
}
