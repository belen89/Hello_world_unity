﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3573;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1134;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3571;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3592;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3815;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m24610_gshared (ThreadSafeDictionary_2_t3573 * __this, ThreadSafeDictionaryValueFactory_2_t3571 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m24610(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3573 *, ThreadSafeDictionaryValueFactory_2_t3571 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m24610_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m24612_gshared (ThreadSafeDictionary_2_t3573 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m24612(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3573 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m24612_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m24614_gshared (ThreadSafeDictionary_2_t3573 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m24614(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3573 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m24614_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m24616_gshared (ThreadSafeDictionary_2_t3573 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m24616(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3573 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m24616_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m24618_gshared (ThreadSafeDictionary_2_t3573 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m24618(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3573 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m24618_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m24620_gshared (ThreadSafeDictionary_2_t3573 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m24620(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3573 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m24620_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m24622_gshared (ThreadSafeDictionary_2_t3573 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m24622(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3573 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m24622_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m24624_gshared (ThreadSafeDictionary_2_t3573 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m24624(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3573 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m24624_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m24626_gshared (ThreadSafeDictionary_2_t3573 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m24626(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3573 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m24626_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m24628_gshared (ThreadSafeDictionary_2_t3573 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m24628(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3573 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m24628_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m24630_gshared (ThreadSafeDictionary_2_t3573 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m24630(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3573 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m24630_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m24632_gshared (ThreadSafeDictionary_2_t3573 * __this, KeyValuePair_2_t3026  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m24632(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3573 *, KeyValuePair_2_t3026 , const MethodInfo*))ThreadSafeDictionary_2_Add_m24632_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m24634_gshared (ThreadSafeDictionary_2_t3573 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m24634(__this, method) (( void (*) (ThreadSafeDictionary_2_t3573 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m24634_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m24636_gshared (ThreadSafeDictionary_2_t3573 * __this, KeyValuePair_2_t3026  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m24636(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3573 *, KeyValuePair_2_t3026 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m24636_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m24638_gshared (ThreadSafeDictionary_2_t3573 * __this, KeyValuePair_2U5BU5D_t3592* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m24638(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3573 *, KeyValuePair_2U5BU5D_t3592*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m24638_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m24640_gshared (ThreadSafeDictionary_2_t3573 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m24640(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3573 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m24640_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m24642_gshared (ThreadSafeDictionary_2_t3573 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m24642(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3573 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m24642_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m24644_gshared (ThreadSafeDictionary_2_t3573 * __this, KeyValuePair_2_t3026  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m24644(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3573 *, KeyValuePair_2_t3026 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m24644_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m24646_gshared (ThreadSafeDictionary_2_t3573 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m24646(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3573 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m24646_gshared)(__this, method)