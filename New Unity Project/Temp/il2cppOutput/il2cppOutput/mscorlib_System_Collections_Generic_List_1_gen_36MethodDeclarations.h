#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.Prop>
struct List_1_t748;
// System.Object
struct Object_t;
// Vuforia.Prop
struct Prop_t66;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop>
struct IEnumerable_1_t746;
// System.Collections.Generic.IEnumerator`1<Vuforia.Prop>
struct IEnumerator_1_t829;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<Vuforia.Prop>
struct ICollection_1_t3952;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.Prop>
struct ReadOnlyCollection_1_t3305;
// Vuforia.Prop[]
struct PropU5BU5D_t3298;
// System.Predicate`1<Vuforia.Prop>
struct Predicate_1_t3306;
// System.Comparison`1<Vuforia.Prop>
struct Comparison_1_t3307;
// System.Collections.Generic.List`1/Enumerator<Vuforia.Prop>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m4332(__this, method) (( void (*) (List_1_t748 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20844(__this, ___collection, method) (( void (*) (List_1_t748 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::.ctor(System.Int32)
#define List_1__ctor_m20845(__this, ___capacity, method) (( void (*) (List_1_t748 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::.cctor()
#define List_1__cctor_m20846(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20847(__this, method) (( Object_t* (*) (List_1_t748 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20848(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t748 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20849(__this, method) (( Object_t * (*) (List_1_t748 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20850(__this, ___item, method) (( int32_t (*) (List_1_t748 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20851(__this, ___item, method) (( bool (*) (List_1_t748 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20852(__this, ___item, method) (( int32_t (*) (List_1_t748 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20853(__this, ___index, ___item, method) (( void (*) (List_1_t748 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20854(__this, ___item, method) (( void (*) (List_1_t748 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20855(__this, method) (( bool (*) (List_1_t748 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20856(__this, method) (( bool (*) (List_1_t748 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20857(__this, method) (( Object_t * (*) (List_1_t748 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20858(__this, method) (( bool (*) (List_1_t748 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20859(__this, method) (( bool (*) (List_1_t748 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20860(__this, ___index, method) (( Object_t * (*) (List_1_t748 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20861(__this, ___index, ___value, method) (( void (*) (List_1_t748 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::Add(T)
#define List_1_Add_m20862(__this, ___item, method) (( void (*) (List_1_t748 *, Object_t *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20863(__this, ___newCount, method) (( void (*) (List_1_t748 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20864(__this, ___collection, method) (( void (*) (List_1_t748 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20865(__this, ___enumerable, method) (( void (*) (List_1_t748 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20866(__this, ___collection, method) (( void (*) (List_1_t748 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.Prop>::AsReadOnly()
#define List_1_AsReadOnly_m20867(__this, method) (( ReadOnlyCollection_1_t3305 * (*) (List_1_t748 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::Clear()
#define List_1_Clear_m20868(__this, method) (( void (*) (List_1_t748 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Prop>::Contains(T)
#define List_1_Contains_m20869(__this, ___item, method) (( bool (*) (List_1_t748 *, Object_t *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20870(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t748 *, PropU5BU5D_t3298*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.Prop>::Find(System.Predicate`1<T>)
#define List_1_Find_m20871(__this, ___match, method) (( Object_t * (*) (List_1_t748 *, Predicate_1_t3306 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20872(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3306 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Prop>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20873(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t748 *, int32_t, int32_t, Predicate_1_t3306 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.Prop>::GetEnumerator()
#define List_1_GetEnumerator_m4324(__this, method) (( Enumerator_t831  (*) (List_1_t748 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Prop>::IndexOf(T)
#define List_1_IndexOf_m20874(__this, ___item, method) (( int32_t (*) (List_1_t748 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20875(__this, ___start, ___delta, method) (( void (*) (List_1_t748 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20876(__this, ___index, method) (( void (*) (List_1_t748 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::Insert(System.Int32,T)
#define List_1_Insert_m20877(__this, ___index, ___item, method) (( void (*) (List_1_t748 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20878(__this, ___collection, method) (( void (*) (List_1_t748 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Prop>::Remove(T)
#define List_1_Remove_m20879(__this, ___item, method) (( bool (*) (List_1_t748 *, Object_t *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Prop>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20880(__this, ___match, method) (( int32_t (*) (List_1_t748 *, Predicate_1_t3306 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20881(__this, ___index, method) (( void (*) (List_1_t748 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::Reverse()
#define List_1_Reverse_m20882(__this, method) (( void (*) (List_1_t748 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::Sort()
#define List_1_Sort_m20883(__this, method) (( void (*) (List_1_t748 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20884(__this, ___comparison, method) (( void (*) (List_1_t748 *, Comparison_1_t3307 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.Prop>::ToArray()
#define List_1_ToArray_m20885(__this, method) (( PropU5BU5D_t3298* (*) (List_1_t748 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::TrimExcess()
#define List_1_TrimExcess_m20886(__this, method) (( void (*) (List_1_t748 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Prop>::get_Capacity()
#define List_1_get_Capacity_m20887(__this, method) (( int32_t (*) (List_1_t748 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20888(__this, ___value, method) (( void (*) (List_1_t748 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Prop>::get_Count()
#define List_1_get_Count_m20889(__this, method) (( int32_t (*) (List_1_t748 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.Prop>::get_Item(System.Int32)
#define List_1_get_Item_m20890(__this, ___index, method) (( Object_t * (*) (List_1_t748 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Prop>::set_Item(System.Int32,T)
#define List_1_set_Item_m20891(__this, ___index, ___value, method) (( void (*) (List_1_t748 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
