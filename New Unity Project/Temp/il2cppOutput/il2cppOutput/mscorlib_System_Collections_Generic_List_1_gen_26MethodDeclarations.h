#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.Marker>
struct List_1_t781;
// System.Object
struct Object_t;
// Vuforia.Marker
struct Marker_t707;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker>
struct IEnumerable_1_t734;
// System.Collections.Generic.IEnumerator`1<Vuforia.Marker>
struct IEnumerator_1_t3902;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<Vuforia.Marker>
struct ICollection_1_t3897;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.Marker>
struct ReadOnlyCollection_1_t3208;
// Vuforia.Marker[]
struct MarkerU5BU5D_t3202;
// System.Predicate`1<Vuforia.Marker>
struct Predicate_1_t3209;
// System.Comparison`1<Vuforia.Marker>
struct Comparison_1_t3210;
// System.Collections.Generic.List`1/Enumerator<Vuforia.Marker>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m19028(__this, method) (( void (*) (List_1_t781 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m4180(__this, ___collection, method) (( void (*) (List_1_t781 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::.ctor(System.Int32)
#define List_1__ctor_m19029(__this, ___capacity, method) (( void (*) (List_1_t781 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::.cctor()
#define List_1__cctor_m19030(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19031(__this, method) (( Object_t* (*) (List_1_t781 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19032(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t781 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19033(__this, method) (( Object_t * (*) (List_1_t781 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19034(__this, ___item, method) (( int32_t (*) (List_1_t781 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19035(__this, ___item, method) (( bool (*) (List_1_t781 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19036(__this, ___item, method) (( int32_t (*) (List_1_t781 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19037(__this, ___index, ___item, method) (( void (*) (List_1_t781 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19038(__this, ___item, method) (( void (*) (List_1_t781 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19039(__this, method) (( bool (*) (List_1_t781 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19040(__this, method) (( bool (*) (List_1_t781 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19041(__this, method) (( Object_t * (*) (List_1_t781 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19042(__this, method) (( bool (*) (List_1_t781 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19043(__this, method) (( bool (*) (List_1_t781 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19044(__this, ___index, method) (( Object_t * (*) (List_1_t781 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19045(__this, ___index, ___value, method) (( void (*) (List_1_t781 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::Add(T)
#define List_1_Add_m19046(__this, ___item, method) (( void (*) (List_1_t781 *, Object_t *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19047(__this, ___newCount, method) (( void (*) (List_1_t781 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19048(__this, ___collection, method) (( void (*) (List_1_t781 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19049(__this, ___enumerable, method) (( void (*) (List_1_t781 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19050(__this, ___collection, method) (( void (*) (List_1_t781 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.Marker>::AsReadOnly()
#define List_1_AsReadOnly_m19051(__this, method) (( ReadOnlyCollection_1_t3208 * (*) (List_1_t781 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::Clear()
#define List_1_Clear_m19052(__this, method) (( void (*) (List_1_t781 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Marker>::Contains(T)
#define List_1_Contains_m19053(__this, ___item, method) (( bool (*) (List_1_t781 *, Object_t *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19054(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t781 *, MarkerU5BU5D_t3202*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.Marker>::Find(System.Predicate`1<T>)
#define List_1_Find_m19055(__this, ___match, method) (( Object_t * (*) (List_1_t781 *, Predicate_1_t3209 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19056(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3209 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Marker>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19057(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t781 *, int32_t, int32_t, Predicate_1_t3209 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.Marker>::GetEnumerator()
#define List_1_GetEnumerator_m4181(__this, method) (( Enumerator_t782  (*) (List_1_t781 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Marker>::IndexOf(T)
#define List_1_IndexOf_m19058(__this, ___item, method) (( int32_t (*) (List_1_t781 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19059(__this, ___start, ___delta, method) (( void (*) (List_1_t781 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19060(__this, ___index, method) (( void (*) (List_1_t781 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::Insert(System.Int32,T)
#define List_1_Insert_m19061(__this, ___index, ___item, method) (( void (*) (List_1_t781 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19062(__this, ___collection, method) (( void (*) (List_1_t781 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Marker>::Remove(T)
#define List_1_Remove_m19063(__this, ___item, method) (( bool (*) (List_1_t781 *, Object_t *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Marker>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19064(__this, ___match, method) (( int32_t (*) (List_1_t781 *, Predicate_1_t3209 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19065(__this, ___index, method) (( void (*) (List_1_t781 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::Reverse()
#define List_1_Reverse_m19066(__this, method) (( void (*) (List_1_t781 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::Sort()
#define List_1_Sort_m19067(__this, method) (( void (*) (List_1_t781 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19068(__this, ___comparison, method) (( void (*) (List_1_t781 *, Comparison_1_t3210 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.Marker>::ToArray()
#define List_1_ToArray_m19069(__this, method) (( MarkerU5BU5D_t3202* (*) (List_1_t781 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::TrimExcess()
#define List_1_TrimExcess_m19070(__this, method) (( void (*) (List_1_t781 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Marker>::get_Capacity()
#define List_1_get_Capacity_m19071(__this, method) (( int32_t (*) (List_1_t781 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19072(__this, ___value, method) (( void (*) (List_1_t781 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Marker>::get_Count()
#define List_1_get_Count_m19073(__this, method) (( int32_t (*) (List_1_t781 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.Marker>::get_Item(System.Int32)
#define List_1_get_Item_m19074(__this, ___index, method) (( Object_t * (*) (List_1_t781 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Marker>::set_Item(System.Int32,T)
#define List_1_set_Item_m19075(__this, ___index, ___value, method) (( void (*) (List_1_t781 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
