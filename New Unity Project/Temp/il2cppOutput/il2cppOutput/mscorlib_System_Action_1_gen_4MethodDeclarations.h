#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t674;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.SmartTerrainInitializationInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainInitial.h"

// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m20454_gshared (Action_1_t674 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m20454(__this, ___object, ___method, method) (( void (*) (Action_1_t674 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m20454_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::Invoke(T)
extern "C" void Action_1_Invoke_m20455_gshared (Action_1_t674 * __this, SmartTerrainInitializationInfo_t555  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m20455(__this, ___obj, method) (( void (*) (Action_1_t674 *, SmartTerrainInitializationInfo_t555 , const MethodInfo*))Action_1_Invoke_m20455_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.SmartTerrainInitializationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m20456_gshared (Action_1_t674 * __this, SmartTerrainInitializationInfo_t555  ___obj, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m20456(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t674 *, SmartTerrainInitializationInfo_t555 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m20456_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m20457_gshared (Action_1_t674 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m20457(__this, ___result, method) (( void (*) (Action_1_t674 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m20457_gshared)(__this, ___result, method)
