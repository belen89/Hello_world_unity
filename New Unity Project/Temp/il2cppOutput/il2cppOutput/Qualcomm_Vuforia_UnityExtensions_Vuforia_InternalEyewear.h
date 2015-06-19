#pragma once
#include <stdint.h>
// Vuforia.InternalEyewear
struct InternalEyewear_t554;
// Vuforia.InternalEyewearCalibrationProfileManager
struct InternalEyewearCalibrationProfileManager_t527;
// Vuforia.InternalEyewearUserCalibrator
struct InternalEyewearUserCalibrator_t529;
// System.Object
#include "mscorlib_System_Object.h"
// Vuforia.InternalEyewear
struct  InternalEyewear_t554  : public Object_t
{
	// Vuforia.InternalEyewearCalibrationProfileManager Vuforia.InternalEyewear::mProfileManager
	InternalEyewearCalibrationProfileManager_t527 * ___mProfileManager_1;
	// Vuforia.InternalEyewearUserCalibrator Vuforia.InternalEyewear::mCalibrator
	InternalEyewearUserCalibrator_t529 * ___mCalibrator_2;
};
struct InternalEyewear_t554_StaticFields{
	// Vuforia.InternalEyewear Vuforia.InternalEyewear::mInstance
	InternalEyewear_t554 * ___mInstance_0;
};
