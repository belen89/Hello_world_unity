﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
struct Transform_1_t3544;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t1031;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58MethodDeclarations.h"
#define Transform_1__ctor_m24418(__this, ___object, ___method, method) (( void (*) (Transform_1_t3544 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m24393_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24419(__this, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Transform_1_t3544 *, uint64_t, NetworkAccessToken_t1031 *, const MethodInfo*))Transform_1_Invoke_m24394_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24420(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3544 *, uint64_t, NetworkAccessToken_t1031 *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m24395_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24421(__this, ___result, method) (( DictionaryEntry_t1596  (*) (Transform_1_t3544 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m24396_gshared)(__this, ___result, method)
