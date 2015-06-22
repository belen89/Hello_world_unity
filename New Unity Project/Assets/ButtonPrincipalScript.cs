using UnityEngine;
using System.Collections;

namespace Vuforia
{
	public class ButtonPrincipalScript : MonoBehaviour {

		// Use this for initialization

		void Start () {


	}
		
		// Update is called once per frame
		void Update () {
		
		}

		void OnMouseDown(){

			Renderer[] rendererComponents = GetComponentsInChildren<Renderer>(true);
			Collider[] colliderComponents = GetComponentsInChildren<Collider>(true);

			foreach (Renderer component in rendererComponents)
			{

				Debug.Log(component.tag);
				if(component.CompareTag("pantallaFiesta")|| component.CompareTag("close"))
					component.enabled=true;
				else
					component.enabled=false;
				
				
			}
			
			// Enable colliders:
			foreach (Collider component in colliderComponents)
			{
				if(component.CompareTag("pantallaFiesta")|| component.CompareTag("close"))
					component.enabled=true;
				else
					component.enabled=false;
			}

		}
	}
}
