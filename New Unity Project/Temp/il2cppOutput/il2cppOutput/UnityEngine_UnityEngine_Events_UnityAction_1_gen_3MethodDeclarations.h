#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t329;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t74;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m2169(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t329 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m14784_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m17600(__this, ___arg0, method) (( void (*) (UnityAction_1_t329 *, Component_t74 *, const MethodInfo*))UnityAction_1_Invoke_m14785_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m17601(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t329 *, Component_t74 *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m14786_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m17602(__this, ___result, method) (( void (*) (UnityAction_1_t329 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m14787_gshared)(__this, ___result, method)
