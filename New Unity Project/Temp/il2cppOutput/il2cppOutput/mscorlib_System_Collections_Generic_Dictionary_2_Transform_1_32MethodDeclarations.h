#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>
struct Transform_1_t3327;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21241_gshared (Transform_1_t3327 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21241(__this, ___object, ___method, method) (( void (*) (Transform_1_t3327 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21241_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m21242_gshared (Transform_1_t3327 * __this, int32_t ___key, TrackableResultData_t610  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21242(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t3327 *, int32_t, TrackableResultData_t610 , const MethodInfo*))Transform_1_Invoke_m21242_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21243_gshared (Transform_1_t3327 * __this, int32_t ___key, TrackableResultData_t610  ___value, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21243(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3327 *, int32_t, TrackableResultData_t610 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21243_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m21244_gshared (Transform_1_t3327 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21244(__this, ___result, method) (( int32_t (*) (Transform_1_t3327 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21244_gshared)(__this, ___result, method)
