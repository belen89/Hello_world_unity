﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t174;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t176;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t364;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1697(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t174 *, UnityAction_1_t176 *, UnityAction_1_t176 *, const MethodInfo*))ObjectPool_1__ctor_m14755_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m14756(__this, method) (( int32_t (*) (ObjectPool_1_t174 *, const MethodInfo*))ObjectPool_1_get_countAll_m14757_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m14758(__this, ___value, method) (( void (*) (ObjectPool_1_t174 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m14759_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m14760(__this, method) (( int32_t (*) (ObjectPool_1_t174 *, const MethodInfo*))ObjectPool_1_get_countActive_m14761_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m14762(__this, method) (( int32_t (*) (ObjectPool_1_t174 *, const MethodInfo*))ObjectPool_1_get_countInactive_m14763_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m14764(__this, method) (( List_1_t364 * (*) (ObjectPool_1_t174 *, const MethodInfo*))ObjectPool_1_Get_m14765_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m14766(__this, ___element, method) (( void (*) (ObjectPool_1_t174 *, List_1_t364 *, const MethodInfo*))ObjectPool_1_Release_m14767_gshared)(__this, ___element, method)
