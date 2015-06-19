#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t592;
// System.Object
struct Object_t;
// Vuforia.DataSet
struct DataSet_t561;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t733;
// System.Collections.Generic.IEnumerator`1<Vuforia.DataSet>
struct IEnumerator_1_t776;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<Vuforia.DataSet>
struct ICollection_1_t3896;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.DataSet>
struct ReadOnlyCollection_1_t3197;
// Vuforia.DataSet[]
struct DataSetU5BU5D_t3195;
// System.Predicate`1<Vuforia.DataSet>
struct Predicate_1_t3198;
// System.Comparison`1<Vuforia.DataSet>
struct Comparison_1_t3200;
// System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_46.h"

// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m4170(__this, method) (( void (*) (List_1_t592 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18828(__this, ___collection, method) (( void (*) (List_1_t592 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::.ctor(System.Int32)
#define List_1__ctor_m18829(__this, ___capacity, method) (( void (*) (List_1_t592 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::.cctor()
#define List_1__cctor_m18830(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18831(__this, method) (( Object_t* (*) (List_1_t592 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18832(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t592 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18833(__this, method) (( Object_t * (*) (List_1_t592 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18834(__this, ___item, method) (( int32_t (*) (List_1_t592 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18835(__this, ___item, method) (( bool (*) (List_1_t592 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18836(__this, ___item, method) (( int32_t (*) (List_1_t592 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18837(__this, ___index, ___item, method) (( void (*) (List_1_t592 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18838(__this, ___item, method) (( void (*) (List_1_t592 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18839(__this, method) (( bool (*) (List_1_t592 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18840(__this, method) (( bool (*) (List_1_t592 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18841(__this, method) (( Object_t * (*) (List_1_t592 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18842(__this, method) (( bool (*) (List_1_t592 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18843(__this, method) (( bool (*) (List_1_t592 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18844(__this, ___index, method) (( Object_t * (*) (List_1_t592 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18845(__this, ___index, ___value, method) (( void (*) (List_1_t592 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::Add(T)
#define List_1_Add_m18846(__this, ___item, method) (( void (*) (List_1_t592 *, DataSet_t561 *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18847(__this, ___newCount, method) (( void (*) (List_1_t592 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18848(__this, ___collection, method) (( void (*) (List_1_t592 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18849(__this, ___enumerable, method) (( void (*) (List_1_t592 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18850(__this, ___collection, method) (( void (*) (List_1_t592 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.DataSet>::AsReadOnly()
#define List_1_AsReadOnly_m18851(__this, method) (( ReadOnlyCollection_1_t3197 * (*) (List_1_t592 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::Clear()
#define List_1_Clear_m18852(__this, method) (( void (*) (List_1_t592 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSet>::Contains(T)
#define List_1_Contains_m18853(__this, ___item, method) (( bool (*) (List_1_t592 *, DataSet_t561 *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18854(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t592 *, DataSetU5BU5D_t3195*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.DataSet>::Find(System.Predicate`1<T>)
#define List_1_Find_m18855(__this, ___match, method) (( DataSet_t561 * (*) (List_1_t592 *, Predicate_1_t3198 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18856(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3198 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18857(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t592 *, int32_t, int32_t, Predicate_1_t3198 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.DataSet>::GetEnumerator()
#define List_1_GetEnumerator_m18858(__this, method) (( Enumerator_t3199  (*) (List_1_t592 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::IndexOf(T)
#define List_1_IndexOf_m18859(__this, ___item, method) (( int32_t (*) (List_1_t592 *, DataSet_t561 *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18860(__this, ___start, ___delta, method) (( void (*) (List_1_t592 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18861(__this, ___index, method) (( void (*) (List_1_t592 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::Insert(System.Int32,T)
#define List_1_Insert_m18862(__this, ___index, ___item, method) (( void (*) (List_1_t592 *, int32_t, DataSet_t561 *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18863(__this, ___collection, method) (( void (*) (List_1_t592 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSet>::Remove(T)
#define List_1_Remove_m18864(__this, ___item, method) (( bool (*) (List_1_t592 *, DataSet_t561 *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18865(__this, ___match, method) (( int32_t (*) (List_1_t592 *, Predicate_1_t3198 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18866(__this, ___index, method) (( void (*) (List_1_t592 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::Reverse()
#define List_1_Reverse_m18867(__this, method) (( void (*) (List_1_t592 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::Sort()
#define List_1_Sort_m18868(__this, method) (( void (*) (List_1_t592 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18869(__this, ___comparison, method) (( void (*) (List_1_t592 *, Comparison_1_t3200 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.DataSet>::ToArray()
#define List_1_ToArray_m18870(__this, method) (( DataSetU5BU5D_t3195* (*) (List_1_t592 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::TrimExcess()
#define List_1_TrimExcess_m18871(__this, method) (( void (*) (List_1_t592 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::get_Capacity()
#define List_1_get_Capacity_m18872(__this, method) (( int32_t (*) (List_1_t592 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18873(__this, ___value, method) (( void (*) (List_1_t592 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::get_Count()
#define List_1_get_Count_m18874(__this, method) (( int32_t (*) (List_1_t592 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.DataSet>::get_Item(System.Int32)
#define List_1_get_Item_m18875(__this, ___index, method) (( DataSet_t561 * (*) (List_1_t592 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSet>::set_Item(System.Int32,T)
#define List_1_set_Item_m18876(__this, ___index, ___value, method) (( void (*) (List_1_t592 *, int32_t, DataSet_t561 *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
