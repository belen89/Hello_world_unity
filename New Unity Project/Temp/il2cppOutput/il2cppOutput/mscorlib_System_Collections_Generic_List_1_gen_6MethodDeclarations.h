﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t187;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t68;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t3780;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t3781;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<UnityEngine.GameObject>
struct ICollection_1_t3782;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
struct ReadOnlyCollection_1_t2958;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2956;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t2959;
// System.Comparison`1<UnityEngine.GameObject>
struct Comparison_1_t2961;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m1707(__this, method) (( void (*) (List_1_t187 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15382(__this, ___collection, method) (( void (*) (List_1_t187 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define List_1__ctor_m15383(__this, ___capacity, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
#define List_1__cctor_m15384(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15385(__this, method) (( Object_t* (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15386(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t187 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15387(__this, method) (( Object_t * (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15388(__this, ___item, method) (( int32_t (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15389(__this, ___item, method) (( bool (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15390(__this, ___item, method) (( int32_t (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15391(__this, ___index, ___item, method) (( void (*) (List_1_t187 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15392(__this, ___item, method) (( void (*) (List_1_t187 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15393(__this, method) (( bool (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15394(__this, method) (( bool (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15395(__this, method) (( Object_t * (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15396(__this, method) (( bool (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15397(__this, method) (( bool (*) (List_1_t187 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15398(__this, ___index, method) (( Object_t * (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15399(__this, ___index, ___value, method) (( void (*) (List_1_t187 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
#define List_1_Add_m15400(__this, ___item, method) (( void (*) (List_1_t187 *, GameObject_t68 *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15401(__this, ___newCount, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15402(__this, ___collection, method) (( void (*) (List_1_t187 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15403(__this, ___enumerable, method) (( void (*) (List_1_t187 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15404(__this, ___collection, method) (( void (*) (List_1_t187 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::AsReadOnly()
#define List_1_AsReadOnly_m15405(__this, method) (( ReadOnlyCollection_1_t2958 * (*) (List_1_t187 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m15406(__this, method) (( void (*) (List_1_t187 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
#define List_1_Contains_m15407(__this, ___item, method) (( bool (*) (List_1_t187 *, GameObject_t68 *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15408(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t187 *, GameObjectU5BU5D_t2956*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::Find(System.Predicate`1<T>)
#define List_1_Find_m15409(__this, ___match, method) (( GameObject_t68 * (*) (List_1_t187 *, Predicate_1_t2959 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15410(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2959 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15411(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t187 *, int32_t, int32_t, Predicate_1_t2959 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m15412(__this, method) (( Enumerator_t2960  (*) (List_1_t187 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
#define List_1_IndexOf_m15413(__this, ___item, method) (( int32_t (*) (List_1_t187 *, GameObject_t68 *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15414(__this, ___start, ___delta, method) (( void (*) (List_1_t187 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15415(__this, ___index, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
#define List_1_Insert_m15416(__this, ___index, ___item, method) (( void (*) (List_1_t187 *, int32_t, GameObject_t68 *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15417(__this, ___collection, method) (( void (*) (List_1_t187 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
#define List_1_Remove_m15418(__this, ___item, method) (( bool (*) (List_1_t187 *, GameObject_t68 *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15419(__this, ___match, method) (( int32_t (*) (List_1_t187 *, Predicate_1_t2959 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15420(__this, ___index, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Reverse()
#define List_1_Reverse_m15421(__this, method) (( void (*) (List_1_t187 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort()
#define List_1_Sort_m15422(__this, method) (( void (*) (List_1_t187 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15423(__this, ___comparison, method) (( void (*) (List_1_t187 *, Comparison_1_t2961 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m15424(__this, method) (( GameObjectU5BU5D_t2956* (*) (List_1_t187 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::TrimExcess()
#define List_1_TrimExcess_m15425(__this, method) (( void (*) (List_1_t187 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m15426(__this, method) (( int32_t (*) (List_1_t187 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15427(__this, ___value, method) (( void (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m15428(__this, method) (( int32_t (*) (List_1_t187 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m15429(__this, ___index, method) (( GameObject_t68 * (*) (List_1_t187 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#define List_1_set_Item_m15430(__this, ___index, ___value, method) (( void (*) (List_1_t187 *, int32_t, GameObject_t68 *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
