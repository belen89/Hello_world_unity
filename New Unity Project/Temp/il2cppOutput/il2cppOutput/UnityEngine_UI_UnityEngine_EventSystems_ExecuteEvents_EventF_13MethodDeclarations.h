﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t171;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IMoveHandler
struct IMoveHandler_t360;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t147;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m1693(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t171 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m14654_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m15280(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t171 *, Object_t *, BaseEventData_t147 *, const MethodInfo*))EventFunction_1_Invoke_m14656_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m15281(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t171 *, Object_t *, BaseEventData_t147 *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m14658_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m15282(__this, ___result, method) (( void (*) (EventFunction_1_t171 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m14660_gshared)(__this, ___result, method)