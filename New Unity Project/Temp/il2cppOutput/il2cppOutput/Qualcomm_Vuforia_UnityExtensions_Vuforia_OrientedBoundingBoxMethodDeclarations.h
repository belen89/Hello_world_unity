#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.OrientedBoundingBox
struct OrientedBoundingBox_t565;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Vuforia.OrientedBoundingBox::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" void OrientedBoundingBox__ctor_m2596 (OrientedBoundingBox_t565 * __this, Vector2_t184  ___center, Vector2_t184  ___halfExtents, float ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::get_Center()
extern "C" Vector2_t184  OrientedBoundingBox_get_Center_m2597 (OrientedBoundingBox_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::set_Center(UnityEngine.Vector2)
extern "C" void OrientedBoundingBox_set_Center_m2598 (OrientedBoundingBox_t565 * __this, Vector2_t184  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::get_HalfExtents()
extern "C" Vector2_t184  OrientedBoundingBox_get_HalfExtents_m2599 (OrientedBoundingBox_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::set_HalfExtents(UnityEngine.Vector2)
extern "C" void OrientedBoundingBox_set_HalfExtents_m2600 (OrientedBoundingBox_t565 * __this, Vector2_t184  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.OrientedBoundingBox::get_Rotation()
extern "C" float OrientedBoundingBox_get_Rotation_m2601 (OrientedBoundingBox_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::set_Rotation(System.Single)
extern "C" void OrientedBoundingBox_set_Rotation_m2602 (OrientedBoundingBox_t565 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
