#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>
struct List_1_t673;
// System.Object
struct Object_t;
// Vuforia.ISmartTerrainEventHandler
struct ISmartTerrainEventHandler_t745;
// System.Collections.Generic.IEnumerable`1<Vuforia.ISmartTerrainEventHandler>
struct IEnumerable_1_t3938;
// System.Collections.Generic.IEnumerator`1<Vuforia.ISmartTerrainEventHandler>
struct IEnumerator_1_t3939;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<Vuforia.ISmartTerrainEventHandler>
struct ICollection_1_t3940;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ISmartTerrainEventHandler>
struct ReadOnlyCollection_1_t3288;
// Vuforia.ISmartTerrainEventHandler[]
struct ISmartTerrainEventHandlerU5BU5D_t3286;
// System.Predicate`1<Vuforia.ISmartTerrainEventHandler>
struct Predicate_1_t3289;
// System.Comparison`1<Vuforia.ISmartTerrainEventHandler>
struct Comparison_1_t3290;
// System.Collections.Generic.List`1/Enumerator<Vuforia.ISmartTerrainEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m4335(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20364(__this, ___collection, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::.ctor(System.Int32)
#define List_1__ctor_m20365(__this, ___capacity, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::.cctor()
#define List_1__cctor_m20366(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20367(__this, method) (( Object_t* (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20368(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t673 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20369(__this, method) (( Object_t * (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20370(__this, ___item, method) (( int32_t (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20371(__this, ___item, method) (( bool (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20372(__this, ___item, method) (( int32_t (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20373(__this, ___index, ___item, method) (( void (*) (List_1_t673 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20374(__this, ___item, method) (( void (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20375(__this, method) (( bool (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20376(__this, method) (( bool (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20377(__this, method) (( Object_t * (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20378(__this, method) (( bool (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20379(__this, method) (( bool (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20380(__this, ___index, method) (( Object_t * (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20381(__this, ___index, ___value, method) (( void (*) (List_1_t673 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Add(T)
#define List_1_Add_m20382(__this, ___item, method) (( void (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20383(__this, ___newCount, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20384(__this, ___collection, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20385(__this, ___enumerable, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20386(__this, ___collection, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::AsReadOnly()
#define List_1_AsReadOnly_m20387(__this, method) (( ReadOnlyCollection_1_t3288 * (*) (List_1_t673 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Clear()
#define List_1_Clear_m20388(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Contains(T)
#define List_1_Contains_m20389(__this, ___item, method) (( bool (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20390(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t673 *, ISmartTerrainEventHandlerU5BU5D_t3286*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m20391(__this, ___match, method) (( Object_t * (*) (List_1_t673 *, Predicate_1_t3289 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20392(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3289 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20393(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t673 *, int32_t, int32_t, Predicate_1_t3289 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::GetEnumerator()
#define List_1_GetEnumerator_m4303(__this, method) (( Enumerator_t819  (*) (List_1_t673 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::IndexOf(T)
#define List_1_IndexOf_m20394(__this, ___item, method) (( int32_t (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20395(__this, ___start, ___delta, method) (( void (*) (List_1_t673 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20396(__this, ___index, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Insert(System.Int32,T)
#define List_1_Insert_m20397(__this, ___index, ___item, method) (( void (*) (List_1_t673 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20398(__this, ___collection, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Remove(T)
#define List_1_Remove_m20399(__this, ___item, method) (( bool (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20400(__this, ___match, method) (( int32_t (*) (List_1_t673 *, Predicate_1_t3289 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20401(__this, ___index, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Reverse()
#define List_1_Reverse_m20402(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Sort()
#define List_1_Sort_m20403(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20404(__this, ___comparison, method) (( void (*) (List_1_t673 *, Comparison_1_t3290 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::ToArray()
#define List_1_ToArray_m20405(__this, method) (( ISmartTerrainEventHandlerU5BU5D_t3286* (*) (List_1_t673 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::TrimExcess()
#define List_1_TrimExcess_m20406(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::get_Capacity()
#define List_1_get_Capacity_m20407(__this, method) (( int32_t (*) (List_1_t673 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20408(__this, ___value, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::get_Count()
#define List_1_get_Count_m20409(__this, method) (( int32_t (*) (List_1_t673 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::get_Item(System.Int32)
#define List_1_get_Item_m20410(__this, ___index, method) (( Object_t * (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m20411(__this, ___index, ___value, method) (( void (*) (List_1_t673 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
