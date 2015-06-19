#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
struct Transform_1_t3386;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21958_gshared (Transform_1_t3386 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21958(__this, ___object, ___method, method) (( void (*) (Transform_1_t3386 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21958_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3376  Transform_1_Invoke_m21959_gshared (Transform_1_t3386 * __this, Object_t * ___key, ProfileData_t702  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21959(__this, ___key, ___value, method) (( KeyValuePair_2_t3376  (*) (Transform_1_t3386 *, Object_t *, ProfileData_t702 , const MethodInfo*))Transform_1_Invoke_m21959_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21960_gshared (Transform_1_t3386 * __this, Object_t * ___key, ProfileData_t702  ___value, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21960(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3386 *, Object_t *, ProfileData_t702 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21960_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3376  Transform_1_EndInvoke_m21961_gshared (Transform_1_t3386 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21961(__this, ___result, method) (( KeyValuePair_2_t3376  (*) (Transform_1_t3386 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21961_gshared)(__this, ___result, method)
