#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1007;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t4050;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t4051;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t4052;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t3490;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t1126;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3494;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3497;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m23497_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1__ctor_m23497(__this, method) (( void (*) (List_1_t1007 *, const MethodInfo*))List_1__ctor_m23497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23498_gshared (List_1_t1007 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23498(__this, ___collection, method) (( void (*) (List_1_t1007 *, Object_t*, const MethodInfo*))List_1__ctor_m23498_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6346_gshared (List_1_t1007 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6346(__this, ___capacity, method) (( void (*) (List_1_t1007 *, int32_t, const MethodInfo*))List_1__ctor_m6346_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m23499_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23499(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23499_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23500_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23500(__this, method) (( Object_t* (*) (List_1_t1007 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23501_gshared (List_1_t1007 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23501(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1007 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23501_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23502_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23502(__this, method) (( Object_t * (*) (List_1_t1007 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23502_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23503_gshared (List_1_t1007 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23503(__this, ___item, method) (( int32_t (*) (List_1_t1007 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23503_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23504_gshared (List_1_t1007 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23504(__this, ___item, method) (( bool (*) (List_1_t1007 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23504_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23505_gshared (List_1_t1007 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23505(__this, ___item, method) (( int32_t (*) (List_1_t1007 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23505_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23506_gshared (List_1_t1007 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23506(__this, ___index, ___item, method) (( void (*) (List_1_t1007 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23506_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23507_gshared (List_1_t1007 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23507(__this, ___item, method) (( void (*) (List_1_t1007 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23507_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23508_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23508(__this, method) (( bool (*) (List_1_t1007 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23509_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23509(__this, method) (( bool (*) (List_1_t1007 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23509_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23510_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23510(__this, method) (( Object_t * (*) (List_1_t1007 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23511_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23511(__this, method) (( bool (*) (List_1_t1007 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23512_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23512(__this, method) (( bool (*) (List_1_t1007 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23512_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23513_gshared (List_1_t1007 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23513(__this, ___index, method) (( Object_t * (*) (List_1_t1007 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23514_gshared (List_1_t1007 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23514(__this, ___index, ___value, method) (( void (*) (List_1_t1007 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23514_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m23515_gshared (List_1_t1007 * __this, UICharInfo_t421  ___item, const MethodInfo* method);
#define List_1_Add_m23515(__this, ___item, method) (( void (*) (List_1_t1007 *, UICharInfo_t421 , const MethodInfo*))List_1_Add_m23515_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23516_gshared (List_1_t1007 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23516(__this, ___newCount, method) (( void (*) (List_1_t1007 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23516_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23517_gshared (List_1_t1007 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23517(__this, ___collection, method) (( void (*) (List_1_t1007 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23517_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23518_gshared (List_1_t1007 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23518(__this, ___enumerable, method) (( void (*) (List_1_t1007 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23518_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23519_gshared (List_1_t1007 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23519(__this, ___collection, method) (( void (*) (List_1_t1007 *, Object_t*, const MethodInfo*))List_1_AddRange_m23519_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3490 * List_1_AsReadOnly_m23520_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23520(__this, method) (( ReadOnlyCollection_1_t3490 * (*) (List_1_t1007 *, const MethodInfo*))List_1_AsReadOnly_m23520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m23521_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_Clear_m23521(__this, method) (( void (*) (List_1_t1007 *, const MethodInfo*))List_1_Clear_m23521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m23522_gshared (List_1_t1007 * __this, UICharInfo_t421  ___item, const MethodInfo* method);
#define List_1_Contains_m23522(__this, ___item, method) (( bool (*) (List_1_t1007 *, UICharInfo_t421 , const MethodInfo*))List_1_Contains_m23522_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23523_gshared (List_1_t1007 * __this, UICharInfoU5BU5D_t1126* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23523(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1007 *, UICharInfoU5BU5D_t1126*, int32_t, const MethodInfo*))List_1_CopyTo_m23523_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t421  List_1_Find_m23524_gshared (List_1_t1007 * __this, Predicate_1_t3494 * ___match, const MethodInfo* method);
#define List_1_Find_m23524(__this, ___match, method) (( UICharInfo_t421  (*) (List_1_t1007 *, Predicate_1_t3494 *, const MethodInfo*))List_1_Find_m23524_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23525_gshared (Object_t * __this /* static, unused */, Predicate_1_t3494 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23525(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3494 *, const MethodInfo*))List_1_CheckMatch_m23525_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23526_gshared (List_1_t1007 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3494 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23526(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1007 *, int32_t, int32_t, Predicate_1_t3494 *, const MethodInfo*))List_1_GetIndex_m23526_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t3489  List_1_GetEnumerator_m23527_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23527(__this, method) (( Enumerator_t3489  (*) (List_1_t1007 *, const MethodInfo*))List_1_GetEnumerator_m23527_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23528_gshared (List_1_t1007 * __this, UICharInfo_t421  ___item, const MethodInfo* method);
#define List_1_IndexOf_m23528(__this, ___item, method) (( int32_t (*) (List_1_t1007 *, UICharInfo_t421 , const MethodInfo*))List_1_IndexOf_m23528_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23529_gshared (List_1_t1007 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23529(__this, ___start, ___delta, method) (( void (*) (List_1_t1007 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23529_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23530_gshared (List_1_t1007 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23530(__this, ___index, method) (( void (*) (List_1_t1007 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23530_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23531_gshared (List_1_t1007 * __this, int32_t ___index, UICharInfo_t421  ___item, const MethodInfo* method);
#define List_1_Insert_m23531(__this, ___index, ___item, method) (( void (*) (List_1_t1007 *, int32_t, UICharInfo_t421 , const MethodInfo*))List_1_Insert_m23531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23532_gshared (List_1_t1007 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23532(__this, ___collection, method) (( void (*) (List_1_t1007 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23532_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m23533_gshared (List_1_t1007 * __this, UICharInfo_t421  ___item, const MethodInfo* method);
#define List_1_Remove_m23533(__this, ___item, method) (( bool (*) (List_1_t1007 *, UICharInfo_t421 , const MethodInfo*))List_1_Remove_m23533_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23534_gshared (List_1_t1007 * __this, Predicate_1_t3494 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23534(__this, ___match, method) (( int32_t (*) (List_1_t1007 *, Predicate_1_t3494 *, const MethodInfo*))List_1_RemoveAll_m23534_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23535_gshared (List_1_t1007 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23535(__this, ___index, method) (( void (*) (List_1_t1007 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23535_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m23536_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_Reverse_m23536(__this, method) (( void (*) (List_1_t1007 *, const MethodInfo*))List_1_Reverse_m23536_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m23537_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_Sort_m23537(__this, method) (( void (*) (List_1_t1007 *, const MethodInfo*))List_1_Sort_m23537_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23538_gshared (List_1_t1007 * __this, Comparison_1_t3497 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23538(__this, ___comparison, method) (( void (*) (List_1_t1007 *, Comparison_1_t3497 *, const MethodInfo*))List_1_Sort_m23538_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t1126* List_1_ToArray_m23539_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_ToArray_m23539(__this, method) (( UICharInfoU5BU5D_t1126* (*) (List_1_t1007 *, const MethodInfo*))List_1_ToArray_m23539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m23540_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23540(__this, method) (( void (*) (List_1_t1007 *, const MethodInfo*))List_1_TrimExcess_m23540_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m23541_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m23541(__this, method) (( int32_t (*) (List_1_t1007 *, const MethodInfo*))List_1_get_Capacity_m23541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m23542_gshared (List_1_t1007 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m23542(__this, ___value, method) (( void (*) (List_1_t1007 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23542_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m23543_gshared (List_1_t1007 * __this, const MethodInfo* method);
#define List_1_get_Count_m23543(__this, method) (( int32_t (*) (List_1_t1007 *, const MethodInfo*))List_1_get_Count_m23543_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t421  List_1_get_Item_m23544_gshared (List_1_t1007 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23544(__this, ___index, method) (( UICharInfo_t421  (*) (List_1_t1007 *, int32_t, const MethodInfo*))List_1_get_Item_m23544_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23545_gshared (List_1_t1007 * __this, int32_t ___index, UICharInfo_t421  ___value, const MethodInfo* method);
#define List_1_set_Item_m23545(__this, ___index, ___value, method) (( void (*) (List_1_t1007 *, int32_t, UICharInfo_t421 , const MethodInfo*))List_1_set_Item_m23545_gshared)(__this, ___index, ___value, method)
