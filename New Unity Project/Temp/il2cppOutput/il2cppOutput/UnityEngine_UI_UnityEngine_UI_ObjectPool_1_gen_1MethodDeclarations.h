#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t336;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t337;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t378;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2177(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t336 *, UnityAction_1_t337 *, UnityAction_1_t337 *, const MethodInfo*))ObjectPool_1__ctor_m14755_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m17610(__this, method) (( int32_t (*) (ObjectPool_1_t336 *, const MethodInfo*))ObjectPool_1_get_countAll_m14757_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m17611(__this, ___value, method) (( void (*) (ObjectPool_1_t336 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m14759_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m17612(__this, method) (( int32_t (*) (ObjectPool_1_t336 *, const MethodInfo*))ObjectPool_1_get_countActive_m14761_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m17613(__this, method) (( int32_t (*) (ObjectPool_1_t336 *, const MethodInfo*))ObjectPool_1_get_countInactive_m14763_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m2178(__this, method) (( List_1_t378 * (*) (ObjectPool_1_t336 *, const MethodInfo*))ObjectPool_1_Get_m14765_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m2179(__this, ___element, method) (( void (*) (ObjectPool_1_t336 *, List_1_t378 *, const MethodInfo*))ObjectPool_1_Release_m14767_gshared)(__this, ___element, method)
