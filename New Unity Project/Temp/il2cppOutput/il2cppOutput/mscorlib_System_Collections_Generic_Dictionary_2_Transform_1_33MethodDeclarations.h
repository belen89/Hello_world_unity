#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,Vuforia.QCARManagerImpl/TrackableResultData>
struct Transform_1_t3330;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21264_gshared (Transform_1_t3330 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21264(__this, ___object, ___method, method) (( void (*) (Transform_1_t3330 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21264_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,Vuforia.QCARManagerImpl/TrackableResultData>::Invoke(TKey,TValue)
extern "C" TrackableResultData_t610  Transform_1_Invoke_m21265_gshared (Transform_1_t3330 * __this, int32_t ___key, TrackableResultData_t610  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21265(__this, ___key, ___value, method) (( TrackableResultData_t610  (*) (Transform_1_t3330 *, int32_t, TrackableResultData_t610 , const MethodInfo*))Transform_1_Invoke_m21265_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,Vuforia.QCARManagerImpl/TrackableResultData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21266_gshared (Transform_1_t3330 * __this, int32_t ___key, TrackableResultData_t610  ___value, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21266(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3330 *, int32_t, TrackableResultData_t610 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21266_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,Vuforia.QCARManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" TrackableResultData_t610  Transform_1_EndInvoke_m21267_gshared (Transform_1_t3330 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21267(__this, ___result, method) (( TrackableResultData_t610  (*) (Transform_1_t3330 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21267_gshared)(__this, ___result, method)
