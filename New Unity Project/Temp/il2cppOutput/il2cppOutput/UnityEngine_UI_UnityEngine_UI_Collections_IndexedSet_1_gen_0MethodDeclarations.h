#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t409;
// UnityEngine.UI.Graphic
struct Graphic_t231;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t3830;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3058;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3060;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t234;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m1879(__this, method) (( void (*) (IndexedSet_1_t409 *, const MethodInfo*))IndexedSet_1__ctor_m15843_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16889(__this, method) (( Object_t * (*) (IndexedSet_1_t409 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15845_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m16890(__this, ___item, method) (( void (*) (IndexedSet_1_t409 *, Graphic_t231 *, const MethodInfo*))IndexedSet_1_Add_m15847_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m16891(__this, ___item, method) (( bool (*) (IndexedSet_1_t409 *, Graphic_t231 *, const MethodInfo*))IndexedSet_1_Remove_m15849_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m16892(__this, method) (( Object_t* (*) (IndexedSet_1_t409 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m15851_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m16893(__this, method) (( void (*) (IndexedSet_1_t409 *, const MethodInfo*))IndexedSet_1_Clear_m15853_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m16894(__this, ___item, method) (( bool (*) (IndexedSet_1_t409 *, Graphic_t231 *, const MethodInfo*))IndexedSet_1_Contains_m15855_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m16895(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t409 *, GraphicU5BU5D_t3058*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m15857_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m16896(__this, method) (( int32_t (*) (IndexedSet_1_t409 *, const MethodInfo*))IndexedSet_1_get_Count_m15859_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m16897(__this, method) (( bool (*) (IndexedSet_1_t409 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m15861_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m16898(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t409 *, Graphic_t231 *, const MethodInfo*))IndexedSet_1_IndexOf_m15863_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m16899(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t409 *, int32_t, Graphic_t231 *, const MethodInfo*))IndexedSet_1_Insert_m15865_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m16900(__this, ___index, method) (( void (*) (IndexedSet_1_t409 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m15867_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m16901(__this, ___index, method) (( Graphic_t231 * (*) (IndexedSet_1_t409 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m15869_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m16902(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t409 *, int32_t, Graphic_t231 *, const MethodInfo*))IndexedSet_1_set_Item_m15871_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m16903(__this, ___match, method) (( void (*) (IndexedSet_1_t409 *, Predicate_1_t3060 *, const MethodInfo*))IndexedSet_1_RemoveAll_m15872_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m16904(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t409 *, Comparison_1_t234 *, const MethodInfo*))IndexedSet_1_Sort_m15873_gshared)(__this, ___sortLayoutFunction, method)
