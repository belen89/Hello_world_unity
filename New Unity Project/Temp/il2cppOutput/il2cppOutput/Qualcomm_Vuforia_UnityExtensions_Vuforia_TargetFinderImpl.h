﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t691;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
struct Dictionary_2_t692;
// Vuforia.TargetFinder
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.TargetFinderImpl/TargetFinderState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinderImpl_Ta.h"
// Vuforia.TargetFinderImpl
struct  TargetFinderImpl_t693  : public TargetFinder_t593
{
	// System.IntPtr Vuforia.TargetFinderImpl::mTargetFinderStatePtr
	IntPtr_t ___mTargetFinderStatePtr_0;
	// Vuforia.TargetFinderImpl/TargetFinderState Vuforia.TargetFinderImpl::mTargetFinderState
	TargetFinderState_t689  ___mTargetFinderState_1;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::mNewResults
	List_1_t691 * ___mNewResults_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget> Vuforia.TargetFinderImpl::mImageTargets
	Dictionary_2_t692 * ___mImageTargets_3;
};
