#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>
struct Predicate_1_t784;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m4207_gshared (Predicate_1_t784 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m4207(__this, ___object, ___method, method) (( void (*) (Predicate_1_t784 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m4207_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19161_gshared (Predicate_1_t784 * __this, TrackableResultData_t610  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m19161(__this, ___obj, method) (( bool (*) (Predicate_1_t784 *, TrackableResultData_t610 , const MethodInfo*))Predicate_1_Invoke_m19161_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19162_gshared (Predicate_1_t784 * __this, TrackableResultData_t610  ___obj, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m19162(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t784 *, TrackableResultData_t610 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m19162_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19163_gshared (Predicate_1_t784 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m19163(__this, ___result, method) (( bool (*) (Predicate_1_t784 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m19163_gshared)(__this, ___result, method)
