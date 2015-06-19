﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>
struct Transform_1_t3336;
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
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21413_gshared (Transform_1_t3336 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21413(__this, ___object, ___method, method) (( void (*) (Transform_1_t3336 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21413_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1596  Transform_1_Invoke_m21414_gshared (Transform_1_t3336 * __this, int32_t ___key, VirtualButtonData_t611  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21414(__this, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Transform_1_t3336 *, int32_t, VirtualButtonData_t611 , const MethodInfo*))Transform_1_Invoke_m21414_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21415_gshared (Transform_1_t3336 * __this, int32_t ___key, VirtualButtonData_t611  ___value, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21415(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3336 *, int32_t, VirtualButtonData_t611 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21415_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1596  Transform_1_EndInvoke_m21416_gshared (Transform_1_t3336 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21416(__this, ___result, method) (( DictionaryEntry_t1596  (*) (Transform_1_t3336 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21416_gshared)(__this, ___result, method)
