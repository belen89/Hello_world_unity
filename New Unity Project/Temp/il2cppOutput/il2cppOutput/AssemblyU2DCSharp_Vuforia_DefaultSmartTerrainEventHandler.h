#pragma once
#include <stdint.h>
// Vuforia.ReconstructionBehaviour
struct ReconstructionBehaviour_t11;
// Vuforia.PropBehaviour
struct PropBehaviour_t12;
// Vuforia.SurfaceBehaviour
struct SurfaceBehaviour_t13;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Vuforia.DefaultSmartTerrainEventHandler
struct  DefaultSmartTerrainEventHandler_t14  : public MonoBehaviour_t10
{
	// Vuforia.ReconstructionBehaviour Vuforia.DefaultSmartTerrainEventHandler::mReconstructionBehaviour
	ReconstructionBehaviour_t11 * ___mReconstructionBehaviour_2;
	// Vuforia.PropBehaviour Vuforia.DefaultSmartTerrainEventHandler::PropTemplate
	PropBehaviour_t12 * ___PropTemplate_3;
	// Vuforia.SurfaceBehaviour Vuforia.DefaultSmartTerrainEventHandler::SurfaceTemplate
	SurfaceBehaviour_t13 * ___SurfaceTemplate_4;
};
