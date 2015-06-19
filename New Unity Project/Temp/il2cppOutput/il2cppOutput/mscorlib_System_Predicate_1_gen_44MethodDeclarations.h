#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
struct Predicate_1_t3363;
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

// System.Void System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m21661_gshared (Predicate_1_t3363 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m21661(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3363 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21661_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21662_gshared (Predicate_1_t3363 * __this, TargetSearchResult_t688  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21662(__this, ___obj, method) (( bool (*) (Predicate_1_t3363 *, TargetSearchResult_t688 , const MethodInfo*))Predicate_1_Invoke_m21662_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21663_gshared (Predicate_1_t3363 * __this, TargetSearchResult_t688  ___obj, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21663(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3363 *, TargetSearchResult_t688 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21663_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21664_gshared (Predicate_1_t3363 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21664(__this, ___result, method) (( bool (*) (Predicate_1_t3363 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21664_gshared)(__this, ___result, method)
