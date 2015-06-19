#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2932;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m15027_gshared (DefaultComparer_t2932 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15027(__this, method) (( void (*) (DefaultComparer_t2932 *, const MethodInfo*))DefaultComparer__ctor_m15027_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15028_gshared (DefaultComparer_t2932 * __this, RaycastResult_t182  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15028(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2932 *, RaycastResult_t182 , const MethodInfo*))DefaultComparer_GetHashCode_m15028_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15029_gshared (DefaultComparer_t2932 * __this, RaycastResult_t182  ___x, RaycastResult_t182  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15029(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2932 *, RaycastResult_t182 , RaycastResult_t182 , const MethodInfo*))DefaultComparer_Equals_m15029_gshared)(__this, ___x, ___y, method)
