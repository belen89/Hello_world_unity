#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>
struct Comparison_1_t3366;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21671_gshared (Comparison_1_t3366 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m21671(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3366 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21671_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21672_gshared (Comparison_1_t3366 * __this, TargetSearchResult_t688  ___x, TargetSearchResult_t688  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21672(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3366 *, TargetSearchResult_t688 , TargetSearchResult_t688 , const MethodInfo*))Comparison_1_Invoke_m21672_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21673_gshared (Comparison_1_t3366 * __this, TargetSearchResult_t688  ___x, TargetSearchResult_t688  ___y, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21673(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3366 *, TargetSearchResult_t688 , TargetSearchResult_t688 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21673_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21674_gshared (Comparison_1_t3366 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21674(__this, ___result, method) (( int32_t (*) (Comparison_1_t3366 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21674_gshared)(__this, ___result, method)
