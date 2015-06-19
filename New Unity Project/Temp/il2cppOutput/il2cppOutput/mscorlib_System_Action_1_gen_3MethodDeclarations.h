#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t715;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_11MethodDeclarations.h"
#define Action_1__ctor_m4128(__this, ___object, ___method, method) (( void (*) (Action_1_t715 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m17836_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m17837(__this, ___obj, method) (( void (*) (Action_1_t715 *, bool, const MethodInfo*))Action_1_Invoke_m17838_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m17839(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t715 *, bool, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m17840_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m17841(__this, ___result, method) (( void (*) (Action_1_t715 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m17842_gshared)(__this, ___result, method)
