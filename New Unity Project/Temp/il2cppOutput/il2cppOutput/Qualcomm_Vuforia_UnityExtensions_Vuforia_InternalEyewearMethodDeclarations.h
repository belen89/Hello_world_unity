#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.InternalEyewear
struct InternalEyewear_t554;
// Vuforia.InternalEyewearCalibrationProfileManager
struct InternalEyewearCalibrationProfileManager_t527;
// Vuforia.InternalEyewearUserCalibrator
struct InternalEyewearUserCalibrator_t529;
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// Vuforia.InternalEyewear/EyeID
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_InternalEyewear_Eye.h"

// Vuforia.InternalEyewear Vuforia.InternalEyewear::get_Instance()
extern "C" InternalEyewear_t554 * InternalEyewear_get_Instance_m2546 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsSupportedDeviceDetected()
extern "C" bool InternalEyewear_IsSupportedDeviceDetected_m2547 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsSeeThru()
extern "C" bool InternalEyewear_IsSeeThru_m2548 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.InternalEyewear::GetScreenOrientation()
extern "C" int32_t InternalEyewear_GetScreenOrientation_m2549 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsStereoCapable()
extern "C" bool InternalEyewear_IsStereoCapable_m2550 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsStereoEnabled()
extern "C" bool InternalEyewear_IsStereoEnabled_m2551 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsStereoGLOnly()
extern "C" bool InternalEyewear_IsStereoGLOnly_m2552 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::SetStereo(System.Boolean)
extern "C" bool InternalEyewear_SetStereo_m2553 (InternalEyewear_t554 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.InternalEyewear::GetDefaultSceneScale()
extern "C" float InternalEyewear_GetDefaultSceneScale_m2554 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.InternalEyewearCalibrationProfileManager Vuforia.InternalEyewear::getProfileManager()
extern "C" InternalEyewearCalibrationProfileManager_t527 * InternalEyewear_getProfileManager_m2555 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.InternalEyewearUserCalibrator Vuforia.InternalEyewear::getCalibrator()
extern "C" InternalEyewearUserCalibrator_t529 * InternalEyewear_getCalibrator_m2556 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.InternalEyewear::GetProjectionMatrix(Vuforia.InternalEyewear/EyeID,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t112  InternalEyewear_GetProjectionMatrix_m2557 (InternalEyewear_t554 * __this, int32_t ___eyeID, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.InternalEyewear::GetProjectionMatrix(Vuforia.InternalEyewear/EyeID,System.Int32,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t112  InternalEyewear_GetProjectionMatrix_m2558 (InternalEyewear_t554 * __this, int32_t ___eyeID, int32_t ___profileID, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InternalEyewear::.ctor()
extern "C" void InternalEyewear__ctor_m2559 (InternalEyewear_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InternalEyewear::.cctor()
extern "C" void InternalEyewear__cctor_m2560 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
