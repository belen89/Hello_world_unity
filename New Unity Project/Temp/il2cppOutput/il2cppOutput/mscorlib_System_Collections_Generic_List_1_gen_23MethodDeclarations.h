#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.Trackable>
struct List_1_t770;
// System.Object
struct Object_t;
// Vuforia.Trackable
struct Trackable_t532;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t731;
// System.Collections.Generic.IEnumerator`1<Vuforia.Trackable>
struct IEnumerator_1_t778;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<Vuforia.Trackable>
struct ICollection_1_t3883;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.Trackable>
struct ReadOnlyCollection_1_t3180;
// Vuforia.Trackable[]
struct TrackableU5BU5D_t3174;
// System.Predicate`1<Vuforia.Trackable>
struct Predicate_1_t3181;
// System.Comparison`1<Vuforia.Trackable>
struct Comparison_1_t3182;
// System.Collections.Generic.List`1/Enumerator<Vuforia.Trackable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m18534(__this, method) (( void (*) (List_1_t770 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m4146(__this, ___collection, method) (( void (*) (List_1_t770 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.ctor(System.Int32)
#define List_1__ctor_m18535(__this, ___capacity, method) (( void (*) (List_1_t770 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.cctor()
#define List_1__cctor_m18536(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18537(__this, method) (( Object_t* (*) (List_1_t770 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18538(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t770 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18539(__this, method) (( Object_t * (*) (List_1_t770 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18540(__this, ___item, method) (( int32_t (*) (List_1_t770 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18541(__this, ___item, method) (( bool (*) (List_1_t770 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18542(__this, ___item, method) (( int32_t (*) (List_1_t770 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18543(__this, ___index, ___item, method) (( void (*) (List_1_t770 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18544(__this, ___item, method) (( void (*) (List_1_t770 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18545(__this, method) (( bool (*) (List_1_t770 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18546(__this, method) (( bool (*) (List_1_t770 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18547(__this, method) (( Object_t * (*) (List_1_t770 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18548(__this, method) (( bool (*) (List_1_t770 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18549(__this, method) (( bool (*) (List_1_t770 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18550(__this, ___index, method) (( Object_t * (*) (List_1_t770 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18551(__this, ___index, ___value, method) (( void (*) (List_1_t770 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Add(T)
#define List_1_Add_m18552(__this, ___item, method) (( void (*) (List_1_t770 *, Object_t *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18553(__this, ___newCount, method) (( void (*) (List_1_t770 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18554(__this, ___collection, method) (( void (*) (List_1_t770 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18555(__this, ___enumerable, method) (( void (*) (List_1_t770 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18556(__this, ___collection, method) (( void (*) (List_1_t770 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.Trackable>::AsReadOnly()
#define List_1_AsReadOnly_m18557(__this, method) (( ReadOnlyCollection_1_t3180 * (*) (List_1_t770 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Clear()
#define List_1_Clear_m18558(__this, method) (( void (*) (List_1_t770 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::Contains(T)
#define List_1_Contains_m18559(__this, ___item, method) (( bool (*) (List_1_t770 *, Object_t *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18560(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t770 *, TrackableU5BU5D_t3174*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.Trackable>::Find(System.Predicate`1<T>)
#define List_1_Find_m18561(__this, ___match, method) (( Object_t * (*) (List_1_t770 *, Predicate_1_t3181 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18562(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3181 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18563(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t770 *, int32_t, int32_t, Predicate_1_t3181 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.Trackable>::GetEnumerator()
#define List_1_GetEnumerator_m4147(__this, method) (( Enumerator_t771  (*) (List_1_t770 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::IndexOf(T)
#define List_1_IndexOf_m18564(__this, ___item, method) (( int32_t (*) (List_1_t770 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18565(__this, ___start, ___delta, method) (( void (*) (List_1_t770 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18566(__this, ___index, method) (( void (*) (List_1_t770 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Insert(System.Int32,T)
#define List_1_Insert_m18567(__this, ___index, ___item, method) (( void (*) (List_1_t770 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18568(__this, ___collection, method) (( void (*) (List_1_t770 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::Remove(T)
#define List_1_Remove_m18569(__this, ___item, method) (( bool (*) (List_1_t770 *, Object_t *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18570(__this, ___match, method) (( int32_t (*) (List_1_t770 *, Predicate_1_t3181 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18571(__this, ___index, method) (( void (*) (List_1_t770 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Reverse()
#define List_1_Reverse_m18572(__this, method) (( void (*) (List_1_t770 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Sort()
#define List_1_Sort_m18573(__this, method) (( void (*) (List_1_t770 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18574(__this, ___comparison, method) (( void (*) (List_1_t770 *, Comparison_1_t3182 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.Trackable>::ToArray()
#define List_1_ToArray_m18575(__this, method) (( TrackableU5BU5D_t3174* (*) (List_1_t770 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::TrimExcess()
#define List_1_TrimExcess_m18576(__this, method) (( void (*) (List_1_t770 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::get_Capacity()
#define List_1_get_Capacity_m18577(__this, method) (( int32_t (*) (List_1_t770 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18578(__this, ___value, method) (( void (*) (List_1_t770 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::get_Count()
#define List_1_get_Count_m18579(__this, method) (( int32_t (*) (List_1_t770 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.Trackable>::get_Item(System.Int32)
#define List_1_get_Item_m18580(__this, ___index, method) (( Object_t * (*) (List_1_t770 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::set_Item(System.Int32,T)
#define List_1_set_Item_m18581(__this, ___index, ___value, method) (( void (*) (List_1_t770 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
