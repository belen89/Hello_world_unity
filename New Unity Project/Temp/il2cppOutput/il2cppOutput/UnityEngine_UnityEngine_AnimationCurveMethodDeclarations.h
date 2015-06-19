﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t999;
struct AnimationCurve_t999_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1125;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m5798 (AnimationCurve_t999 * __this, KeyframeU5BU5D_t1125* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m5799 (AnimationCurve_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m5800 (AnimationCurve_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m5801 (AnimationCurve_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m5802 (AnimationCurve_t999 * __this, KeyframeU5BU5D_t1125* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t999_marshal(const AnimationCurve_t999& unmarshaled, AnimationCurve_t999_marshaled& marshaled);
void AnimationCurve_t999_marshal_back(const AnimationCurve_t999_marshaled& marshaled, AnimationCurve_t999& unmarshaled);
void AnimationCurve_t999_marshal_cleanup(AnimationCurve_t999_marshaled& marshaled);
