#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordResult
struct WordResult_t663;
// Vuforia.Word
struct Word_t664;
// Vuforia.OrientedBoundingBox
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// Vuforia.Word Vuforia.WordResult::get_Word()
// Vuforia.OrientedBoundingBox Vuforia.WordResult::get_Obb()
// UnityEngine.Vector3 Vuforia.WordResult::get_Position()
// UnityEngine.Quaternion Vuforia.WordResult::get_Orientation()
// Vuforia.TrackableBehaviour/Status Vuforia.WordResult::get_CurrentStatus()
// System.Void Vuforia.WordResult::.ctor()
extern "C" void WordResult__ctor_m2924 (WordResult_t663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
