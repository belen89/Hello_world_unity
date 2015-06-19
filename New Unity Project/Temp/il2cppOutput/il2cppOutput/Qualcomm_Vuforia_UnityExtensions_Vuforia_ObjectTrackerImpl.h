#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t591;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t592;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t574;
// Vuforia.TargetFinder
struct TargetFinder_t593;
// Vuforia.ObjectTracker
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTracker.h"
// Vuforia.ObjectTrackerImpl
struct  ObjectTrackerImpl_t594  : public ObjectTracker_t541
{
	// System.Collections.Generic.List`1<Vuforia.DataSetImpl> Vuforia.ObjectTrackerImpl::mActiveDataSets
	List_1_t591 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::mDataSets
	List_1_t592 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::mImageTargetBuilder
	ImageTargetBuilder_t574 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::mTargetFinder
	TargetFinder_t593 * ___mTargetFinder_4;
};
