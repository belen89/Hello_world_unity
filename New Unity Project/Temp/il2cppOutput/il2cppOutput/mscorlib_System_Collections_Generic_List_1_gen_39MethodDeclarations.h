#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t691;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t752;
// System.Collections.Generic.IEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerator_1_t764;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>
struct ICollection_1_t3978;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>
struct ReadOnlyCollection_1_t3359;
// Vuforia.TargetFinder/TargetSearchResult[]
struct TargetSearchResultU5BU5D_t3355;
// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
struct Predicate_1_t3363;
// System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>
struct Comparison_1_t3366;
// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_49.h"

// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void List_1__ctor_m4364_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1__ctor_m4364(__this, method) (( void (*) (List_1_t691 *, const MethodInfo*))List_1__ctor_m4364_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m21527_gshared (List_1_t691 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m21527(__this, ___collection, method) (( void (*) (List_1_t691 *, Object_t*, const MethodInfo*))List_1__ctor_m21527_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21528_gshared (List_1_t691 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21528(__this, ___capacity, method) (( void (*) (List_1_t691 *, int32_t, const MethodInfo*))List_1__ctor_m21528_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.cctor()
extern "C" void List_1__cctor_m21529_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21529(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21529_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21530_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21530(__this, method) (( Object_t* (*) (List_1_t691 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21531_gshared (List_1_t691 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m21531(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t691 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21531_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21532_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21532(__this, method) (( Object_t * (*) (List_1_t691 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21533_gshared (List_1_t691 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21533(__this, ___item, method) (( int32_t (*) (List_1_t691 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21533_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21534_gshared (List_1_t691 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21534(__this, ___item, method) (( bool (*) (List_1_t691 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21534_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21535_gshared (List_1_t691 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21535(__this, ___item, method) (( int32_t (*) (List_1_t691 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21535_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21536_gshared (List_1_t691 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21536(__this, ___index, ___item, method) (( void (*) (List_1_t691 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21536_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21537_gshared (List_1_t691 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21537(__this, ___item, method) (( void (*) (List_1_t691 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21537_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21538_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21538(__this, method) (( bool (*) (List_1_t691 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21538_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m21539_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21539(__this, method) (( bool (*) (List_1_t691 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21539_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21540_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m21540(__this, method) (( Object_t * (*) (List_1_t691 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21540_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m21541_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m21541(__this, method) (( bool (*) (List_1_t691 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21541_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m21542_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m21542(__this, method) (( bool (*) (List_1_t691 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21542_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21543_gshared (List_1_t691 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21543(__this, ___index, method) (( Object_t * (*) (List_1_t691 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21543_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21544_gshared (List_1_t691 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21544(__this, ___index, ___value, method) (( void (*) (List_1_t691 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21544_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Add(T)
extern "C" void List_1_Add_m21545_gshared (List_1_t691 * __this, TargetSearchResult_t688  ___item, const MethodInfo* method);
#define List_1_Add_m21545(__this, ___item, method) (( void (*) (List_1_t691 *, TargetSearchResult_t688 , const MethodInfo*))List_1_Add_m21545_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21546_gshared (List_1_t691 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21546(__this, ___newCount, method) (( void (*) (List_1_t691 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21546_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21547_gshared (List_1_t691 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21547(__this, ___collection, method) (( void (*) (List_1_t691 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21547_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21548_gshared (List_1_t691 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21548(__this, ___enumerable, method) (( void (*) (List_1_t691 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21548_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21549_gshared (List_1_t691 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21549(__this, ___collection, method) (( void (*) (List_1_t691 *, Object_t*, const MethodInfo*))List_1_AddRange_m21549_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3359 * List_1_AsReadOnly_m21550_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21550(__this, method) (( ReadOnlyCollection_1_t3359 * (*) (List_1_t691 *, const MethodInfo*))List_1_AsReadOnly_m21550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Clear()
extern "C" void List_1_Clear_m21551_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_Clear_m21551(__this, method) (( void (*) (List_1_t691 *, const MethodInfo*))List_1_Clear_m21551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Contains(T)
extern "C" bool List_1_Contains_m21552_gshared (List_1_t691 * __this, TargetSearchResult_t688  ___item, const MethodInfo* method);
#define List_1_Contains_m21552(__this, ___item, method) (( bool (*) (List_1_t691 *, TargetSearchResult_t688 , const MethodInfo*))List_1_Contains_m21552_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21553_gshared (List_1_t691 * __this, TargetSearchResultU5BU5D_t3355* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m21553(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t691 *, TargetSearchResultU5BU5D_t3355*, int32_t, const MethodInfo*))List_1_CopyTo_m21553_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Find(System.Predicate`1<T>)
extern "C" TargetSearchResult_t688  List_1_Find_m21554_gshared (List_1_t691 * __this, Predicate_1_t3363 * ___match, const MethodInfo* method);
#define List_1_Find_m21554(__this, ___match, method) (( TargetSearchResult_t688  (*) (List_1_t691 *, Predicate_1_t3363 *, const MethodInfo*))List_1_Find_m21554_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21555_gshared (Object_t * __this /* static, unused */, Predicate_1_t3363 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21555(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3363 *, const MethodInfo*))List_1_CheckMatch_m21555_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21556_gshared (List_1_t691 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3363 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21556(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t691 *, int32_t, int32_t, Predicate_1_t3363 *, const MethodInfo*))List_1_GetIndex_m21556_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GetEnumerator()
extern "C" Enumerator_t3357  List_1_GetEnumerator_m21557_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21557(__this, method) (( Enumerator_t3357  (*) (List_1_t691 *, const MethodInfo*))List_1_GetEnumerator_m21557_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21558_gshared (List_1_t691 * __this, TargetSearchResult_t688  ___item, const MethodInfo* method);
#define List_1_IndexOf_m21558(__this, ___item, method) (( int32_t (*) (List_1_t691 *, TargetSearchResult_t688 , const MethodInfo*))List_1_IndexOf_m21558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21559_gshared (List_1_t691 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21559(__this, ___start, ___delta, method) (( void (*) (List_1_t691 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21559_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21560_gshared (List_1_t691 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21560(__this, ___index, method) (( void (*) (List_1_t691 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21560_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21561_gshared (List_1_t691 * __this, int32_t ___index, TargetSearchResult_t688  ___item, const MethodInfo* method);
#define List_1_Insert_m21561(__this, ___index, ___item, method) (( void (*) (List_1_t691 *, int32_t, TargetSearchResult_t688 , const MethodInfo*))List_1_Insert_m21561_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21562_gshared (List_1_t691 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21562(__this, ___collection, method) (( void (*) (List_1_t691 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21562_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Remove(T)
extern "C" bool List_1_Remove_m21563_gshared (List_1_t691 * __this, TargetSearchResult_t688  ___item, const MethodInfo* method);
#define List_1_Remove_m21563(__this, ___item, method) (( bool (*) (List_1_t691 *, TargetSearchResult_t688 , const MethodInfo*))List_1_Remove_m21563_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21564_gshared (List_1_t691 * __this, Predicate_1_t3363 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21564(__this, ___match, method) (( int32_t (*) (List_1_t691 *, Predicate_1_t3363 *, const MethodInfo*))List_1_RemoveAll_m21564_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m21565_gshared (List_1_t691 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21565(__this, ___index, method) (( void (*) (List_1_t691 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21565_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Reverse()
extern "C" void List_1_Reverse_m21566_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_Reverse_m21566(__this, method) (( void (*) (List_1_t691 *, const MethodInfo*))List_1_Reverse_m21566_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Sort()
extern "C" void List_1_Sort_m21567_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_Sort_m21567(__this, method) (( void (*) (List_1_t691 *, const MethodInfo*))List_1_Sort_m21567_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21568_gshared (List_1_t691 * __this, Comparison_1_t3366 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21568(__this, ___comparison, method) (( void (*) (List_1_t691 *, Comparison_1_t3366 *, const MethodInfo*))List_1_Sort_m21568_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::ToArray()
extern "C" TargetSearchResultU5BU5D_t3355* List_1_ToArray_m21569_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_ToArray_m21569(__this, method) (( TargetSearchResultU5BU5D_t3355* (*) (List_1_t691 *, const MethodInfo*))List_1_ToArray_m21569_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m21570_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21570(__this, method) (( void (*) (List_1_t691 *, const MethodInfo*))List_1_TrimExcess_m21570_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21571_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21571(__this, method) (( int32_t (*) (List_1_t691 *, const MethodInfo*))List_1_get_Capacity_m21571_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21572_gshared (List_1_t691 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21572(__this, ___value, method) (( void (*) (List_1_t691 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21572_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Count()
extern "C" int32_t List_1_get_Count_m21573_gshared (List_1_t691 * __this, const MethodInfo* method);
#define List_1_get_Count_m21573(__this, method) (( int32_t (*) (List_1_t691 *, const MethodInfo*))List_1_get_Count_m21573_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Item(System.Int32)
extern "C" TargetSearchResult_t688  List_1_get_Item_m21574_gshared (List_1_t691 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21574(__this, ___index, method) (( TargetSearchResult_t688  (*) (List_1_t691 *, int32_t, const MethodInfo*))List_1_get_Item_m21574_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21575_gshared (List_1_t691 * __this, int32_t ___index, TargetSearchResult_t688  ___value, const MethodInfo* method);
#define List_1_set_Item_m21575(__this, ___index, ___value, method) (( void (*) (List_1_t691 *, int32_t, TargetSearchResult_t688 , const MethodInfo*))List_1_set_Item_m21575_gshared)(__this, ___index, ___value, method)
