#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>
struct Transform_1_t3321;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21268_gshared (Transform_1_t3321 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21268(__this, ___object, ___method, method) (( void (*) (Transform_1_t3321 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21268_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1596  Transform_1_Invoke_m21269_gshared (Transform_1_t3321 * __this, int32_t ___key, TrackableResultData_t610  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21269(__this, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Transform_1_t3321 *, int32_t, TrackableResultData_t610 , const MethodInfo*))Transform_1_Invoke_m21269_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21270_gshared (Transform_1_t3321 * __this, int32_t ___key, TrackableResultData_t610  ___value, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21270(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3321 *, int32_t, TrackableResultData_t610 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21270_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1596  Transform_1_EndInvoke_m21271_gshared (Transform_1_t3321 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21271(__this, ___result, method) (( DictionaryEntry_t1596  (*) (Transform_1_t3321 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21271_gshared)(__this, ___result, method)
