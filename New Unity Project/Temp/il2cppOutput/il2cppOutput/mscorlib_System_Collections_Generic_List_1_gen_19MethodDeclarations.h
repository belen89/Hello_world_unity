#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_t542;
// System.Object
struct Object_t;
// Vuforia.ICloudRecoEventHandler
struct ICloudRecoEventHandler_t729;
// System.Collections.Generic.IEnumerable`1<Vuforia.ICloudRecoEventHandler>
struct IEnumerable_1_t3866;
// System.Collections.Generic.IEnumerator`1<Vuforia.ICloudRecoEventHandler>
struct IEnumerator_1_t3867;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<Vuforia.ICloudRecoEventHandler>
struct ICollection_1_t3868;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ICloudRecoEventHandler>
struct ReadOnlyCollection_1_t3136;
// Vuforia.ICloudRecoEventHandler[]
struct ICloudRecoEventHandlerU5BU5D_t3134;
// System.Predicate`1<Vuforia.ICloudRecoEventHandler>
struct Predicate_1_t3137;
// System.Comparison`1<Vuforia.ICloudRecoEventHandler>
struct Comparison_1_t3138;
// System.Collections.Generic.List`1/Enumerator<Vuforia.ICloudRecoEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m4104(__this, method) (( void (*) (List_1_t542 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17746(__this, ___collection, method) (( void (*) (List_1_t542 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::.ctor(System.Int32)
#define List_1__ctor_m17747(__this, ___capacity, method) (( void (*) (List_1_t542 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::.cctor()
#define List_1__cctor_m17748(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17749(__this, method) (( Object_t* (*) (List_1_t542 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17750(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t542 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17751(__this, method) (( Object_t * (*) (List_1_t542 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17752(__this, ___item, method) (( int32_t (*) (List_1_t542 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17753(__this, ___item, method) (( bool (*) (List_1_t542 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17754(__this, ___item, method) (( int32_t (*) (List_1_t542 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17755(__this, ___index, ___item, method) (( void (*) (List_1_t542 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17756(__this, ___item, method) (( void (*) (List_1_t542 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17757(__this, method) (( bool (*) (List_1_t542 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17758(__this, method) (( bool (*) (List_1_t542 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17759(__this, method) (( Object_t * (*) (List_1_t542 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17760(__this, method) (( bool (*) (List_1_t542 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17761(__this, method) (( bool (*) (List_1_t542 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17762(__this, ___index, method) (( Object_t * (*) (List_1_t542 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17763(__this, ___index, ___value, method) (( void (*) (List_1_t542 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Add(T)
#define List_1_Add_m17764(__this, ___item, method) (( void (*) (List_1_t542 *, Object_t *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17765(__this, ___newCount, method) (( void (*) (List_1_t542 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17766(__this, ___collection, method) (( void (*) (List_1_t542 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17767(__this, ___enumerable, method) (( void (*) (List_1_t542 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17768(__this, ___collection, method) (( void (*) (List_1_t542 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::AsReadOnly()
#define List_1_AsReadOnly_m17769(__this, method) (( ReadOnlyCollection_1_t3136 * (*) (List_1_t542 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Clear()
#define List_1_Clear_m17770(__this, method) (( void (*) (List_1_t542 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Contains(T)
#define List_1_Contains_m17771(__this, ___item, method) (( bool (*) (List_1_t542 *, Object_t *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17772(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t542 *, ICloudRecoEventHandlerU5BU5D_t3134*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m17773(__this, ___match, method) (( Object_t * (*) (List_1_t542 *, Predicate_1_t3137 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17774(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3137 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17775(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t542 *, int32_t, int32_t, Predicate_1_t3137 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::GetEnumerator()
#define List_1_GetEnumerator_m4100(__this, method) (( Enumerator_t763  (*) (List_1_t542 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::IndexOf(T)
#define List_1_IndexOf_m17776(__this, ___item, method) (( int32_t (*) (List_1_t542 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17777(__this, ___start, ___delta, method) (( void (*) (List_1_t542 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17778(__this, ___index, method) (( void (*) (List_1_t542 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Insert(System.Int32,T)
#define List_1_Insert_m17779(__this, ___index, ___item, method) (( void (*) (List_1_t542 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17780(__this, ___collection, method) (( void (*) (List_1_t542 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Remove(T)
#define List_1_Remove_m17781(__this, ___item, method) (( bool (*) (List_1_t542 *, Object_t *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17782(__this, ___match, method) (( int32_t (*) (List_1_t542 *, Predicate_1_t3137 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17783(__this, ___index, method) (( void (*) (List_1_t542 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Reverse()
#define List_1_Reverse_m17784(__this, method) (( void (*) (List_1_t542 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Sort()
#define List_1_Sort_m17785(__this, method) (( void (*) (List_1_t542 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17786(__this, ___comparison, method) (( void (*) (List_1_t542 *, Comparison_1_t3138 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::ToArray()
#define List_1_ToArray_m17787(__this, method) (( ICloudRecoEventHandlerU5BU5D_t3134* (*) (List_1_t542 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::TrimExcess()
#define List_1_TrimExcess_m17788(__this, method) (( void (*) (List_1_t542 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::get_Capacity()
#define List_1_get_Capacity_m17789(__this, method) (( int32_t (*) (List_1_t542 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17790(__this, ___value, method) (( void (*) (List_1_t542 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::get_Count()
#define List_1_get_Count_m17791(__this, method) (( int32_t (*) (List_1_t542 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::get_Item(System.Int32)
#define List_1_get_Item_m17792(__this, ___index, method) (( Object_t * (*) (List_1_t542 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m17793(__this, ___index, ___value, method) (( void (*) (List_1_t542 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
