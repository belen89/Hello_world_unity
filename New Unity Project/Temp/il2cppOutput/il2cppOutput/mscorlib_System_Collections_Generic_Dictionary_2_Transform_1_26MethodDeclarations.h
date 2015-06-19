﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.DictionaryEntry>
struct Transform_1_t3273;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t660;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
#define Transform_1__ctor_m20126(__this, ___object, ___method, method) (( void (*) (Transform_1_t3273 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16321_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20127(__this, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Transform_1_t3273 *, String_t*, List_1_t660 *, const MethodInfo*))Transform_1_Invoke_m16322_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20128(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3273 *, String_t*, List_1_t660 *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16323_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20129(__this, ___result, method) (( DictionaryEntry_t1596  (*) (Transform_1_t3273 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16324_gshared)(__this, ___result, method)