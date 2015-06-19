﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t86;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t87;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t495;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1134;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2882;
// System.Object[]
struct ObjectU5BU5D_t79;
// System.Predicate`1<System.Object>
struct Predicate_1_t2887;
// System.Comparison`1<System.Object>
struct Comparison_1_t2894;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m6371_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1__ctor_m6371(__this, method) (( void (*) (List_1_t86 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14308_gshared (List_1_t86 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14308(__this, ___collection, method) (( void (*) (List_1_t86 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14310_gshared (List_1_t86 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14310(__this, ___capacity, method) (( void (*) (List_1_t86 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m14312_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14312(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609(__this, method) (( Object_t* (*) (List_1_t86 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m6592_gshared (List_1_t86 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m6592(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t86 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m6588(__this, method) (( Object_t * (*) (List_1_t86 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m6597_gshared (List_1_t86 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m6597(__this, ___item, method) (( int32_t (*) (List_1_t86 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m6599_gshared (List_1_t86 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m6599(__this, ___item, method) (( bool (*) (List_1_t86 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m6600_gshared (List_1_t86 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m6600(__this, ___item, method) (( int32_t (*) (List_1_t86 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m6601_gshared (List_1_t86 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m6601(__this, ___index, ___item, method) (( void (*) (List_1_t86 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m6602_gshared (List_1_t86 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m6602(__this, ___item, method) (( void (*) (List_1_t86 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604(__this, method) (( bool (*) (List_1_t86 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m6590(__this, method) (( bool (*) (List_1_t86 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m6591(__this, method) (( Object_t * (*) (List_1_t86 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m6593(__this, method) (( bool (*) (List_1_t86 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m6594(__this, method) (( bool (*) (List_1_t86 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m6595_gshared (List_1_t86 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m6595(__this, ___index, method) (( Object_t * (*) (List_1_t86 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m6596_gshared (List_1_t86 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m6596(__this, ___index, ___value, method) (( void (*) (List_1_t86 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m6605_gshared (List_1_t86 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m6605(__this, ___item, method) (( void (*) (List_1_t86 *, Object_t *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14330_gshared (List_1_t86 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14330(__this, ___newCount, method) (( void (*) (List_1_t86 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14332_gshared (List_1_t86 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14332(__this, ___collection, method) (( void (*) (List_1_t86 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14334_gshared (List_1_t86 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14334(__this, ___enumerable, method) (( void (*) (List_1_t86 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14335_gshared (List_1_t86 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14335(__this, ___collection, method) (( void (*) (List_1_t86 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2882 * List_1_AsReadOnly_m14337_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14337(__this, method) (( ReadOnlyCollection_1_t2882 * (*) (List_1_t86 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m6598_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_Clear_m6598(__this, method) (( void (*) (List_1_t86 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m6606_gshared (List_1_t86 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m6606(__this, ___item, method) (( bool (*) (List_1_t86 *, Object_t *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m6607_gshared (List_1_t86 * __this, ObjectU5BU5D_t79* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m6607(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t86 *, ObjectU5BU5D_t79*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m14342_gshared (List_1_t86 * __this, Predicate_1_t2887 * ___match, const MethodInfo* method);
#define List_1_Find_m14342(__this, ___match, method) (( Object_t * (*) (List_1_t86 *, Predicate_1_t2887 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14344_gshared (Object_t * __this /* static, unused */, Predicate_1_t2887 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14344(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2887 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14346_gshared (List_1_t86 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2887 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14346(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t86 *, int32_t, int32_t, Predicate_1_t2887 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2881  List_1_GetEnumerator_m14347_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14347(__this, method) (( Enumerator_t2881  (*) (List_1_t86 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m6610_gshared (List_1_t86 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m6610(__this, ___item, method) (( int32_t (*) (List_1_t86 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14350_gshared (List_1_t86 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14350(__this, ___start, ___delta, method) (( void (*) (List_1_t86 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14352_gshared (List_1_t86 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14352(__this, ___index, method) (( void (*) (List_1_t86 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m6611_gshared (List_1_t86 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m6611(__this, ___index, ___item, method) (( void (*) (List_1_t86 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14355_gshared (List_1_t86 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14355(__this, ___collection, method) (( void (*) (List_1_t86 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m6608_gshared (List_1_t86 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m6608(__this, ___item, method) (( bool (*) (List_1_t86 *, Object_t *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14358_gshared (List_1_t86 * __this, Predicate_1_t2887 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14358(__this, ___match, method) (( int32_t (*) (List_1_t86 *, Predicate_1_t2887 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m6603_gshared (List_1_t86 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m6603(__this, ___index, method) (( void (*) (List_1_t86 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m14361_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_Reverse_m14361(__this, method) (( void (*) (List_1_t86 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m14363_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_Sort_m14363(__this, method) (( void (*) (List_1_t86 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14365_gshared (List_1_t86 * __this, Comparison_1_t2894 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14365(__this, ___comparison, method) (( void (*) (List_1_t86 *, Comparison_1_t2894 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t79* List_1_ToArray_m14367_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_ToArray_m14367(__this, method) (( ObjectU5BU5D_t79* (*) (List_1_t86 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m14369_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14369(__this, method) (( void (*) (List_1_t86 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14371_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14371(__this, method) (( int32_t (*) (List_1_t86 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14373_gshared (List_1_t86 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14373(__this, ___value, method) (( void (*) (List_1_t86 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m6589_gshared (List_1_t86 * __this, const MethodInfo* method);
#define List_1_get_Count_m6589(__this, method) (( int32_t (*) (List_1_t86 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m6612_gshared (List_1_t86 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m6612(__this, ___index, method) (( Object_t * (*) (List_1_t86 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m6613_gshared (List_1_t86 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m6613(__this, ___index, ___value, method) (( void (*) (List_1_t86 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)