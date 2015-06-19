#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1008;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t4053;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t4054;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t423;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t3499;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1127;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3503;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3506;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m23640_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1__ctor_m23640(__this, method) (( void (*) (List_1_t1008 *, const MethodInfo*))List_1__ctor_m23640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23641_gshared (List_1_t1008 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23641(__this, ___collection, method) (( void (*) (List_1_t1008 *, Object_t*, const MethodInfo*))List_1__ctor_m23641_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6347_gshared (List_1_t1008 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6347(__this, ___capacity, method) (( void (*) (List_1_t1008 *, int32_t, const MethodInfo*))List_1__ctor_m6347_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m23642_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23642(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23642_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23643_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23643(__this, method) (( Object_t* (*) (List_1_t1008 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23644_gshared (List_1_t1008 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23644(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1008 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23644_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23645_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23645(__this, method) (( Object_t * (*) (List_1_t1008 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23646_gshared (List_1_t1008 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23646(__this, ___item, method) (( int32_t (*) (List_1_t1008 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23646_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23647_gshared (List_1_t1008 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23647(__this, ___item, method) (( bool (*) (List_1_t1008 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23647_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23648_gshared (List_1_t1008 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23648(__this, ___item, method) (( int32_t (*) (List_1_t1008 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23648_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23649_gshared (List_1_t1008 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23649(__this, ___index, ___item, method) (( void (*) (List_1_t1008 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23649_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23650_gshared (List_1_t1008 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23650(__this, ___item, method) (( void (*) (List_1_t1008 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23650_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23651_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23651(__this, method) (( bool (*) (List_1_t1008 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23651_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23652_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23652(__this, method) (( bool (*) (List_1_t1008 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23652_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23653_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23653(__this, method) (( Object_t * (*) (List_1_t1008 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23654_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23654(__this, method) (( bool (*) (List_1_t1008 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23654_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23655_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23655(__this, method) (( bool (*) (List_1_t1008 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23655_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23656_gshared (List_1_t1008 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23656(__this, ___index, method) (( Object_t * (*) (List_1_t1008 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23656_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23657_gshared (List_1_t1008 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23657(__this, ___index, ___value, method) (( void (*) (List_1_t1008 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23657_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m23658_gshared (List_1_t1008 * __this, UILineInfo_t419  ___item, const MethodInfo* method);
#define List_1_Add_m23658(__this, ___item, method) (( void (*) (List_1_t1008 *, UILineInfo_t419 , const MethodInfo*))List_1_Add_m23658_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23659_gshared (List_1_t1008 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23659(__this, ___newCount, method) (( void (*) (List_1_t1008 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23659_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23660_gshared (List_1_t1008 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23660(__this, ___collection, method) (( void (*) (List_1_t1008 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23660_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23661_gshared (List_1_t1008 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23661(__this, ___enumerable, method) (( void (*) (List_1_t1008 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23661_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23662_gshared (List_1_t1008 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23662(__this, ___collection, method) (( void (*) (List_1_t1008 *, Object_t*, const MethodInfo*))List_1_AddRange_m23662_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3499 * List_1_AsReadOnly_m23663_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23663(__this, method) (( ReadOnlyCollection_1_t3499 * (*) (List_1_t1008 *, const MethodInfo*))List_1_AsReadOnly_m23663_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m23664_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_Clear_m23664(__this, method) (( void (*) (List_1_t1008 *, const MethodInfo*))List_1_Clear_m23664_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m23665_gshared (List_1_t1008 * __this, UILineInfo_t419  ___item, const MethodInfo* method);
#define List_1_Contains_m23665(__this, ___item, method) (( bool (*) (List_1_t1008 *, UILineInfo_t419 , const MethodInfo*))List_1_Contains_m23665_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23666_gshared (List_1_t1008 * __this, UILineInfoU5BU5D_t1127* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23666(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1008 *, UILineInfoU5BU5D_t1127*, int32_t, const MethodInfo*))List_1_CopyTo_m23666_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t419  List_1_Find_m23667_gshared (List_1_t1008 * __this, Predicate_1_t3503 * ___match, const MethodInfo* method);
#define List_1_Find_m23667(__this, ___match, method) (( UILineInfo_t419  (*) (List_1_t1008 *, Predicate_1_t3503 *, const MethodInfo*))List_1_Find_m23667_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23668_gshared (Object_t * __this /* static, unused */, Predicate_1_t3503 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23668(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3503 *, const MethodInfo*))List_1_CheckMatch_m23668_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23669_gshared (List_1_t1008 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3503 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23669(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1008 *, int32_t, int32_t, Predicate_1_t3503 *, const MethodInfo*))List_1_GetIndex_m23669_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t3498  List_1_GetEnumerator_m23670_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23670(__this, method) (( Enumerator_t3498  (*) (List_1_t1008 *, const MethodInfo*))List_1_GetEnumerator_m23670_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23671_gshared (List_1_t1008 * __this, UILineInfo_t419  ___item, const MethodInfo* method);
#define List_1_IndexOf_m23671(__this, ___item, method) (( int32_t (*) (List_1_t1008 *, UILineInfo_t419 , const MethodInfo*))List_1_IndexOf_m23671_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23672_gshared (List_1_t1008 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23672(__this, ___start, ___delta, method) (( void (*) (List_1_t1008 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23672_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23673_gshared (List_1_t1008 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23673(__this, ___index, method) (( void (*) (List_1_t1008 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23673_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23674_gshared (List_1_t1008 * __this, int32_t ___index, UILineInfo_t419  ___item, const MethodInfo* method);
#define List_1_Insert_m23674(__this, ___index, ___item, method) (( void (*) (List_1_t1008 *, int32_t, UILineInfo_t419 , const MethodInfo*))List_1_Insert_m23674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23675_gshared (List_1_t1008 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23675(__this, ___collection, method) (( void (*) (List_1_t1008 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23675_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m23676_gshared (List_1_t1008 * __this, UILineInfo_t419  ___item, const MethodInfo* method);
#define List_1_Remove_m23676(__this, ___item, method) (( bool (*) (List_1_t1008 *, UILineInfo_t419 , const MethodInfo*))List_1_Remove_m23676_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23677_gshared (List_1_t1008 * __this, Predicate_1_t3503 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23677(__this, ___match, method) (( int32_t (*) (List_1_t1008 *, Predicate_1_t3503 *, const MethodInfo*))List_1_RemoveAll_m23677_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23678_gshared (List_1_t1008 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23678(__this, ___index, method) (( void (*) (List_1_t1008 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23678_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m23679_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_Reverse_m23679(__this, method) (( void (*) (List_1_t1008 *, const MethodInfo*))List_1_Reverse_m23679_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m23680_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_Sort_m23680(__this, method) (( void (*) (List_1_t1008 *, const MethodInfo*))List_1_Sort_m23680_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23681_gshared (List_1_t1008 * __this, Comparison_1_t3506 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23681(__this, ___comparison, method) (( void (*) (List_1_t1008 *, Comparison_1_t3506 *, const MethodInfo*))List_1_Sort_m23681_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t1127* List_1_ToArray_m23682_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_ToArray_m23682(__this, method) (( UILineInfoU5BU5D_t1127* (*) (List_1_t1008 *, const MethodInfo*))List_1_ToArray_m23682_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m23683_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23683(__this, method) (( void (*) (List_1_t1008 *, const MethodInfo*))List_1_TrimExcess_m23683_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m23684_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m23684(__this, method) (( int32_t (*) (List_1_t1008 *, const MethodInfo*))List_1_get_Capacity_m23684_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m23685_gshared (List_1_t1008 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m23685(__this, ___value, method) (( void (*) (List_1_t1008 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23685_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m23686_gshared (List_1_t1008 * __this, const MethodInfo* method);
#define List_1_get_Count_m23686(__this, method) (( int32_t (*) (List_1_t1008 *, const MethodInfo*))List_1_get_Count_m23686_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t419  List_1_get_Item_m23687_gshared (List_1_t1008 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23687(__this, ___index, method) (( UILineInfo_t419  (*) (List_1_t1008 *, int32_t, const MethodInfo*))List_1_get_Item_m23687_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23688_gshared (List_1_t1008 * __this, int32_t ___index, UILineInfo_t419  ___value, const MethodInfo* method);
#define List_1_set_Item_m23688(__this, ___index, ___value, method) (( void (*) (List_1_t1008 *, int32_t, UILineInfo_t419 , const MethodInfo*))List_1_set_Item_m23688_gshared)(__this, ___index, ___value, method)
