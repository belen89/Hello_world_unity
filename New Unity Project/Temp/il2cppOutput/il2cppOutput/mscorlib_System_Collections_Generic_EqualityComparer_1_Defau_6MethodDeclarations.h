#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
struct DefaultComparer_t3362;
// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void DefaultComparer__ctor_m21658_gshared (DefaultComparer_t3362 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21658(__this, method) (( void (*) (DefaultComparer_t3362 *, const MethodInfo*))DefaultComparer__ctor_m21658_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21659_gshared (DefaultComparer_t3362 * __this, TargetSearchResult_t688  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21659(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3362 *, TargetSearchResult_t688 , const MethodInfo*))DefaultComparer_GetHashCode_m21659_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21660_gshared (DefaultComparer_t3362 * __this, TargetSearchResult_t688  ___x, TargetSearchResult_t688  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21660(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3362 *, TargetSearchResult_t688 , TargetSearchResult_t688 , const MethodInfo*))DefaultComparer_Equals_m21660_gshared)(__this, ___x, ___y, method)
