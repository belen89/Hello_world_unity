#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>
struct Transform_1_t3331;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21272_gshared (Transform_1_t3331 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21272(__this, ___object, ___method, method) (( void (*) (Transform_1_t3331 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21272_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3322  Transform_1_Invoke_m21273_gshared (Transform_1_t3331 * __this, int32_t ___key, TrackableResultData_t610  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21273(__this, ___key, ___value, method) (( KeyValuePair_2_t3322  (*) (Transform_1_t3331 *, int32_t, TrackableResultData_t610 , const MethodInfo*))Transform_1_Invoke_m21273_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21274_gshared (Transform_1_t3331 * __this, int32_t ___key, TrackableResultData_t610  ___value, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21274(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3331 *, int32_t, TrackableResultData_t610 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21274_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3322  Transform_1_EndInvoke_m21275_gshared (Transform_1_t3331 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21275(__this, ___result, method) (( KeyValuePair_2_t3322  (*) (Transform_1_t3331 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21275_gshared)(__this, ___result, method)
