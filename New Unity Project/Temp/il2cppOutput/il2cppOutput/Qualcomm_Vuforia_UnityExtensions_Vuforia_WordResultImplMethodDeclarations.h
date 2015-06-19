#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordResultImpl
struct WordResultImpl_t665;
// Vuforia.Word
struct Word_t664;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Vuforia.OrientedBoundingBox
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C" void WordResultImpl__ctor_m2925 (WordResultImpl_t665 * __this, Object_t * ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Word Vuforia.WordResultImpl::get_Word()
extern "C" Object_t * WordResultImpl_get_Word_m2926 (WordResultImpl_t665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.WordResultImpl::get_Position()
extern "C" Vector3_t110  WordResultImpl_get_Position_m2927 (WordResultImpl_t665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.WordResultImpl::get_Orientation()
extern "C" Quaternion_t113  WordResultImpl_get_Orientation_m2928 (WordResultImpl_t665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::get_Obb()
extern "C" OrientedBoundingBox_t565  WordResultImpl_get_Obb_m2929 (WordResultImpl_t665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::get_CurrentStatus()
extern "C" int32_t WordResultImpl_get_CurrentStatus_m2930 (WordResultImpl_t665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void WordResultImpl_SetPose_m2931 (WordResultImpl_t665 * __this, Vector3_t110  ___position, Quaternion_t113  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C" void WordResultImpl_SetObb_m2932 (WordResultImpl_t665 * __this, OrientedBoundingBox_t565  ___obb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C" void WordResultImpl_SetStatus_m2933 (WordResultImpl_t665 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
