#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2997;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t495;
// System.Object[]
struct ObjectU5BU5D_t79;
// System.Predicate`1<System.Object>
struct Predicate_1_t2887;
// System.Comparison`1<System.Object>
struct Comparison_1_t2894;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m15843_gshared (IndexedSet_1_t2997 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m15843(__this, method) (( void (*) (IndexedSet_1_t2997 *, const MethodInfo*))IndexedSet_1__ctor_m15843_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15845_gshared (IndexedSet_1_t2997 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15845(__this, method) (( Object_t * (*) (IndexedSet_1_t2997 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15845_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m15847_gshared (IndexedSet_1_t2997 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m15847(__this, ___item, method) (( void (*) (IndexedSet_1_t2997 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m15847_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m15849_gshared (IndexedSet_1_t2997 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m15849(__this, ___item, method) (( bool (*) (IndexedSet_1_t2997 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m15849_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m15851_gshared (IndexedSet_1_t2997 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m15851(__this, method) (( Object_t* (*) (IndexedSet_1_t2997 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m15851_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m15853_gshared (IndexedSet_1_t2997 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m15853(__this, method) (( void (*) (IndexedSet_1_t2997 *, const MethodInfo*))IndexedSet_1_Clear_m15853_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m15855_gshared (IndexedSet_1_t2997 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m15855(__this, ___item, method) (( bool (*) (IndexedSet_1_t2997 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m15855_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m15857_gshared (IndexedSet_1_t2997 * __this, ObjectU5BU5D_t79* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m15857(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2997 *, ObjectU5BU5D_t79*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m15857_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m15859_gshared (IndexedSet_1_t2997 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m15859(__this, method) (( int32_t (*) (IndexedSet_1_t2997 *, const MethodInfo*))IndexedSet_1_get_Count_m15859_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m15861_gshared (IndexedSet_1_t2997 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m15861(__this, method) (( bool (*) (IndexedSet_1_t2997 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m15861_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m15863_gshared (IndexedSet_1_t2997 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m15863(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2997 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m15863_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m15865_gshared (IndexedSet_1_t2997 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m15865(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2997 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m15865_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m15867_gshared (IndexedSet_1_t2997 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m15867(__this, ___index, method) (( void (*) (IndexedSet_1_t2997 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m15867_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m15869_gshared (IndexedSet_1_t2997 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m15869(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2997 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m15869_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m15871_gshared (IndexedSet_1_t2997 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m15871(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2997 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m15871_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m15872_gshared (IndexedSet_1_t2997 * __this, Predicate_1_t2887 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m15872(__this, ___match, method) (( void (*) (IndexedSet_1_t2997 *, Predicate_1_t2887 *, const MethodInfo*))IndexedSet_1_RemoveAll_m15872_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m15873_gshared (IndexedSet_1_t2997 * __this, Comparison_1_t2894 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m15873(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2997 *, Comparison_1_t2894 *, const MethodInfo*))IndexedSet_1_Sort_m15873_gshared)(__this, ___sortLayoutFunction, method)
