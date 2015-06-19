#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>
struct List_1_t722;
// System.Object
struct Object_t;
// Vuforia.IUserDefinedTargetEventHandler
struct IUserDefinedTargetEventHandler_t758;
// System.Collections.Generic.IEnumerable`1<Vuforia.IUserDefinedTargetEventHandler>
struct IEnumerable_1_t4009;
// System.Collections.Generic.IEnumerator`1<Vuforia.IUserDefinedTargetEventHandler>
struct IEnumerator_1_t4010;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<Vuforia.IUserDefinedTargetEventHandler>
struct ICollection_1_t4011;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.IUserDefinedTargetEventHandler>
struct ReadOnlyCollection_1_t3417;
// Vuforia.IUserDefinedTargetEventHandler[]
struct IUserDefinedTargetEventHandlerU5BU5D_t3415;
// System.Predicate`1<Vuforia.IUserDefinedTargetEventHandler>
struct Predicate_1_t3418;
// System.Comparison`1<Vuforia.IUserDefinedTargetEventHandler>
struct Comparison_1_t3419;
// System.Collections.Generic.List`1/Enumerator<Vuforia.IUserDefinedTargetEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m4447(__this, method) (( void (*) (List_1_t722 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m22404(__this, ___collection, method) (( void (*) (List_1_t722 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::.ctor(System.Int32)
#define List_1__ctor_m22405(__this, ___capacity, method) (( void (*) (List_1_t722 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::.cctor()
#define List_1__cctor_m22406(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22407(__this, method) (( Object_t* (*) (List_1_t722 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m22408(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t722 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22409(__this, method) (( Object_t * (*) (List_1_t722 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m22410(__this, ___item, method) (( int32_t (*) (List_1_t722 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m22411(__this, ___item, method) (( bool (*) (List_1_t722 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m22412(__this, ___item, method) (( int32_t (*) (List_1_t722 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m22413(__this, ___index, ___item, method) (( void (*) (List_1_t722 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m22414(__this, ___item, method) (( void (*) (List_1_t722 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22415(__this, method) (( bool (*) (List_1_t722 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22416(__this, method) (( bool (*) (List_1_t722 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m22417(__this, method) (( Object_t * (*) (List_1_t722 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m22418(__this, method) (( bool (*) (List_1_t722 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m22419(__this, method) (( bool (*) (List_1_t722 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m22420(__this, ___index, method) (( Object_t * (*) (List_1_t722 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m22421(__this, ___index, ___value, method) (( void (*) (List_1_t722 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Add(T)
#define List_1_Add_m22422(__this, ___item, method) (( void (*) (List_1_t722 *, Object_t *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m22423(__this, ___newCount, method) (( void (*) (List_1_t722 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m22424(__this, ___collection, method) (( void (*) (List_1_t722 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m22425(__this, ___enumerable, method) (( void (*) (List_1_t722 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m22426(__this, ___collection, method) (( void (*) (List_1_t722 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::AsReadOnly()
#define List_1_AsReadOnly_m22427(__this, method) (( ReadOnlyCollection_1_t3417 * (*) (List_1_t722 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Clear()
#define List_1_Clear_m22428(__this, method) (( void (*) (List_1_t722 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Contains(T)
#define List_1_Contains_m22429(__this, ___item, method) (( bool (*) (List_1_t722 *, Object_t *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m22430(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t722 *, IUserDefinedTargetEventHandlerU5BU5D_t3415*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m22431(__this, ___match, method) (( Object_t * (*) (List_1_t722 *, Predicate_1_t3418 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m22432(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3418 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m22433(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t722 *, int32_t, int32_t, Predicate_1_t3418 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::GetEnumerator()
#define List_1_GetEnumerator_m4444(__this, method) (( Enumerator_t863  (*) (List_1_t722 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::IndexOf(T)
#define List_1_IndexOf_m22434(__this, ___item, method) (( int32_t (*) (List_1_t722 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m22435(__this, ___start, ___delta, method) (( void (*) (List_1_t722 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m22436(__this, ___index, method) (( void (*) (List_1_t722 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Insert(System.Int32,T)
#define List_1_Insert_m22437(__this, ___index, ___item, method) (( void (*) (List_1_t722 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m22438(__this, ___collection, method) (( void (*) (List_1_t722 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Remove(T)
#define List_1_Remove_m22439(__this, ___item, method) (( bool (*) (List_1_t722 *, Object_t *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m22440(__this, ___match, method) (( int32_t (*) (List_1_t722 *, Predicate_1_t3418 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m22441(__this, ___index, method) (( void (*) (List_1_t722 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Reverse()
#define List_1_Reverse_m22442(__this, method) (( void (*) (List_1_t722 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Sort()
#define List_1_Sort_m22443(__this, method) (( void (*) (List_1_t722 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m22444(__this, ___comparison, method) (( void (*) (List_1_t722 *, Comparison_1_t3419 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::ToArray()
#define List_1_ToArray_m22445(__this, method) (( IUserDefinedTargetEventHandlerU5BU5D_t3415* (*) (List_1_t722 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::TrimExcess()
#define List_1_TrimExcess_m22446(__this, method) (( void (*) (List_1_t722 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::get_Capacity()
#define List_1_get_Capacity_m22447(__this, method) (( int32_t (*) (List_1_t722 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m22448(__this, ___value, method) (( void (*) (List_1_t722 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::get_Count()
#define List_1_get_Count_m22449(__this, method) (( int32_t (*) (List_1_t722 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::get_Item(System.Int32)
#define List_1_get_Item_m22450(__this, ___index, method) (( Object_t * (*) (List_1_t722 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m22451(__this, ___index, ___value, method) (( void (*) (List_1_t722 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
