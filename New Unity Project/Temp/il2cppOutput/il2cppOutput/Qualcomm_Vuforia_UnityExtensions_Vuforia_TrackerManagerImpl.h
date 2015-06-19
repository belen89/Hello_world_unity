#pragma once
#include <stdint.h>
// Vuforia.ObjectTracker
struct ObjectTracker_t541;
// Vuforia.MarkerTracker
struct MarkerTracker_t596;
// Vuforia.TextTracker
struct TextTracker_t644;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t642;
// Vuforia.StateManager
struct StateManager_t681;
// Vuforia.TrackerManager
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackerManager.h"
// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t697  : public TrackerManager_t696
{
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t541 * ___mObjectTracker_1;
	// Vuforia.MarkerTracker Vuforia.TrackerManagerImpl::mMarkerTracker
	MarkerTracker_t596 * ___mMarkerTracker_2;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t644 * ___mTextTracker_3;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t642 * ___mSmartTerrainTracker_4;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t681 * ___mStateManager_5;
};
