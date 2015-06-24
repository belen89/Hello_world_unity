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
			GameObject[] objetosAEsconder = GameObject.FindGameObjectsWithTag ("inicial");
			GameObject.FindGameObjectWithTag ("close").GetComponent<Renderer> ().enabled = true;

			foreach (Renderer component in rendererComponents)
			{
				Debug.Log(component.tag);
				if(component.CompareTag("pantallaFiesta"))
					component.enabled=true;
				else
					component.enabled=false;
							
			}
			
			// Enable colliders:
			foreach (Collider component in colliderComponents)
			{
				if(component.CompareTag("pantallaFiesta"))
					component.enabled=true;
				else
					component.enabled=false;
			}

			//Desable elements from fisrt screen
			
			foreach (GameObject objeto in objetosAEsconder)
				objeto.GetComponent<Renderer> ().enabled = false;


			// play video

			VideoPlaybackBehaviour video = GetComponentInChildren<VideoPlaybackBehaviour>();
			if (video != null && video.AutoPlay)
			{
				if (video.VideoPlayer.IsPlayableOnTexture())
				{
					VideoPlayerHelper.MediaState state = video.VideoPlayer.GetStatus();
					if (state == VideoPlayerHelper.MediaState.PAUSED ||
					    state == VideoPlayerHelper.MediaState.READY ||
					    state == VideoPlayerHelper.MediaState.STOPPED)
					{
						// Pause other videos before playing this one
						PauseOtherVideos(video);
						
						// Play this video on texture where it left off
						video.VideoPlayer.Play(false, video.VideoPlayer.GetCurrentPosition());
					}
					else if (state == VideoPlayerHelper.MediaState.REACHED_END)
					{
						// Pause other videos before playing this one
						PauseOtherVideos(video);
						
						// Play this video from the beginning
						video.VideoPlayer.Play(false, 0);
					}
				}
			}


		}

		// Pause all videos except this one
		private void PauseOtherVideos(VideoPlaybackBehaviour currentVideo)
		{
			VideoPlaybackBehaviour[] videos = (VideoPlaybackBehaviour[])
				FindObjectsOfType(typeof(VideoPlaybackBehaviour));
			
			foreach (VideoPlaybackBehaviour video in videos)
			{
				if (video != currentVideo)
				{
					if (video.CurrentState == VideoPlayerHelper.MediaState.PLAYING)
					{
						video.VideoPlayer.Pause();
					}
				}
			}
		}
	}
}
