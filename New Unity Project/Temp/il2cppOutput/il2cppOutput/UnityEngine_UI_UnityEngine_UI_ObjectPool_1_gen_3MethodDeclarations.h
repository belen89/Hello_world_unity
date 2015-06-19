#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2917;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2916;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m14755_gshared (ObjectPool_1_t2917 * __this, UnityAction_1_t2916 * ___actionOnGet, UnityAction_1_t2916 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m14755(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2917 *, UnityAction_1_t2916 *, UnityAction_1_t2916 *, const MethodInfo*))ObjectPool_1__ctor_m14755_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m14757_gshared (ObjectPool_1_t2917 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m14757(__this, method) (( int32_t (*) (ObjectPool_1_t2917 *, const MethodInfo*))ObjectPool_1_get_countAll_m14757_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m14759_gshared (ObjectPool_1_t2917 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m14759(__this, ___value, method) (( void (*) (ObjectPool_1_t2917 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m14759_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m14761_gshared (ObjectPool_1_t2917 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m14761(__this, method) (( int32_t (*) (ObjectPool_1_t2917 *, const MethodInfo*))ObjectPool_1_get_countActive_m14761_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m14763_gshared (ObjectPool_1_t2917 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m14763(__this, method) (( int32_t (*) (ObjectPool_1_t2917 *, const MethodInfo*))ObjectPool_1_get_countInactive_m14763_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m14765_gshared (ObjectPool_1_t2917 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m14765(__this, method) (( Object_t * (*) (ObjectPool_1_t2917 *, const MethodInfo*))ObjectPool_1_Get_m14765_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m14767_gshared (ObjectPool_1_t2917 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m14767(__this, ___element, method) (( void (*) (ObjectPool_1_t2917 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m14767_gshared)(__this, ___element, method)
