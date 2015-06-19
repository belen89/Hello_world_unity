#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.InternalEyewearCalibrationProfileManager
struct InternalEyewearCalibrationProfileManager_t527;
// System.String
struct String_t;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// Vuforia.InternalEyewear/EyeID
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_InternalEyewear_Eye.h"

// System.Int32 Vuforia.InternalEyewearCalibrationProfileManager::getMaxCount()
extern "C" int32_t InternalEyewearCalibrationProfileManager_getMaxCount_m2401 (InternalEyewearCalibrationProfileManager_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.InternalEyewearCalibrationProfileManager::getUsedCount()
extern "C" int32_t InternalEyewearCalibrationProfileManager_getUsedCount_m2402 (InternalEyewearCalibrationProfileManager_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearCalibrationProfileManager::isProfileUsed(System.Int32)
extern "C" bool InternalEyewearCalibrationProfileManager_isProfileUsed_m2403 (InternalEyewearCalibrationProfileManager_t527 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.InternalEyewearCalibrationProfileManager::getActiveProfile()
extern "C" int32_t InternalEyewearCalibrationProfileManager_getActiveProfile_m2404 (InternalEyewearCalibrationProfileManager_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearCalibrationProfileManager::setActiveProfile(System.Int32)
extern "C" bool InternalEyewearCalibrationProfileManager_setActiveProfile_m2405 (InternalEyewearCalibrationProfileManager_t527 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.InternalEyewearCalibrationProfileManager::getProjectionMatrix(System.Int32,Vuforia.InternalEyewear/EyeID)
extern "C" Matrix4x4_t112  InternalEyewearCalibrationProfileManager_getProjectionMatrix_m2406 (InternalEyewearCalibrationProfileManager_t527 * __this, int32_t ___profileID, int32_t ___eyeID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearCalibrationProfileManager::setProjectionMatrix(System.Int32,Vuforia.InternalEyewear/EyeID,UnityEngine.Matrix4x4)
extern "C" bool InternalEyewearCalibrationProfileManager_setProjectionMatrix_m2407 (InternalEyewearCalibrationProfileManager_t527 * __this, int32_t ___profileID, int32_t ___eyeID, Matrix4x4_t112  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.InternalEyewearCalibrationProfileManager::getProfileName(System.Int32)
extern "C" String_t* InternalEyewearCalibrationProfileManager_getProfileName_m2408 (InternalEyewearCalibrationProfileManager_t527 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearCalibrationProfileManager::setProfileName(System.Int32,System.String)
extern "C" bool InternalEyewearCalibrationProfileManager_setProfileName_m2409 (InternalEyewearCalibrationProfileManager_t527 * __this, int32_t ___profileID, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearCalibrationProfileManager::clearProfile(System.Int32)
extern "C" bool InternalEyewearCalibrationProfileManager_clearProfile_m2410 (InternalEyewearCalibrationProfileManager_t527 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InternalEyewearCalibrationProfileManager::.ctor()
extern "C" void InternalEyewearCalibrationProfileManager__ctor_m2411 (InternalEyewearCalibrationProfileManager_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
