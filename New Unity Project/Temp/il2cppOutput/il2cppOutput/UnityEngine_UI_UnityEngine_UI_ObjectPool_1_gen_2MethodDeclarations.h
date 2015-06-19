#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t339;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t340;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t376;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2181(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t339 *, UnityAction_1_t340 *, UnityAction_1_t340 *, const MethodInfo*))ObjectPool_1__ctor_m14755_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m17628(__this, method) (( int32_t (*) (ObjectPool_1_t339 *, const MethodInfo*))ObjectPool_1_get_countAll_m14757_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m17629(__this, ___value, method) (( void (*) (ObjectPool_1_t339 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m14759_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m17630(__this, method) (( int32_t (*) (ObjectPool_1_t339 *, const MethodInfo*))ObjectPool_1_get_countActive_m14761_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m17631(__this, method) (( int32_t (*) (ObjectPool_1_t339 *, const MethodInfo*))ObjectPool_1_get_countInactive_m14763_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2182(__this, method) (( List_1_t376 * (*) (ObjectPool_1_t339 *, const MethodInfo*))ObjectPool_1_Get_m14765_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2183(__this, ___element, method) (( void (*) (ObjectPool_1_t339 *, List_1_t376 *, const MethodInfo*))ObjectPool_1_Release_m14767_gshared)(__this, ___element, method)
