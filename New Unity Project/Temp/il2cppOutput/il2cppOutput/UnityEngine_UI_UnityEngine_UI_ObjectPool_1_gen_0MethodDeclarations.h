#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t224;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t230;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t270;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1827(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t224 *, UnityAction_1_t230 *, UnityAction_1_t230 *, const MethodInfo*))ObjectPool_1__ctor_m14755_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m16437(__this, method) (( int32_t (*) (ObjectPool_1_t224 *, const MethodInfo*))ObjectPool_1_get_countAll_m14757_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16438(__this, ___value, method) (( void (*) (ObjectPool_1_t224 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m14759_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m16439(__this, method) (( int32_t (*) (ObjectPool_1_t224 *, const MethodInfo*))ObjectPool_1_get_countActive_m14761_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16440(__this, method) (( int32_t (*) (ObjectPool_1_t224 *, const MethodInfo*))ObjectPool_1_get_countInactive_m14763_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m1833(__this, method) (( List_1_t270 * (*) (ObjectPool_1_t224 *, const MethodInfo*))ObjectPool_1_Get_m14765_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m1838(__this, ___element, method) (( void (*) (ObjectPool_1_t224 *, List_1_t270 *, const MethodInfo*))ObjectPool_1_Release_m14767_gshared)(__this, ___element, method)
