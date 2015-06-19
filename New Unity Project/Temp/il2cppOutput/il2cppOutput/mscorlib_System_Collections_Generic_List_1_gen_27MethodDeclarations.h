#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t683;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t797;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3791;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3783;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t3162;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Predicate`1<System.Int32>
struct Predicate_1_t3164;
// System.Comparison`1<System.Int32>
struct Comparison_1_t3168;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m4263_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1__ctor_m4263(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1__ctor_m4263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m4204_gshared (List_1_t683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m4204(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1__ctor_m4204_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18213_gshared (List_1_t683 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18213(__this, ___capacity, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1__ctor_m18213_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m18215_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18215(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18215_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18217_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18217(__this, method) (( Object_t* (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18217_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18219_gshared (List_1_t683 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18219(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t683 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18219_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18221_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18221(__this, method) (( Object_t * (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18221_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18223_gshared (List_1_t683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18223(__this, ___item, method) (( int32_t (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18223_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18225_gshared (List_1_t683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18225(__this, ___item, method) (( bool (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18225_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18227_gshared (List_1_t683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18227(__this, ___item, method) (( int32_t (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18227_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18229_gshared (List_1_t683 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18229(__this, ___index, ___item, method) (( void (*) (List_1_t683 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18229_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18231_gshared (List_1_t683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18231(__this, ___item, method) (( void (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18231_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18233_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18233(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18233_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18235_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18235(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18235_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18237_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18237(__this, method) (( Object_t * (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18237_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18239_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18239(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18239_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18241_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18241(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18241_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18243_gshared (List_1_t683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18243(__this, ___index, method) (( Object_t * (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18243_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18245_gshared (List_1_t683 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18245(__this, ___index, ___value, method) (( void (*) (List_1_t683 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18245_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m18247_gshared (List_1_t683 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m18247(__this, ___item, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_Add_m18247_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18249_gshared (List_1_t683 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18249(__this, ___newCount, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18249_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18251_gshared (List_1_t683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18251(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18253_gshared (List_1_t683 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18253(__this, ___enumerable, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18253_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18255_gshared (List_1_t683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m18255(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_AddRange_m18255_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3162 * List_1_AsReadOnly_m18257_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18257(__this, method) (( ReadOnlyCollection_1_t3162 * (*) (List_1_t683 *, const MethodInfo*))List_1_AsReadOnly_m18257_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m18259_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_Clear_m18259(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_Clear_m18259_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m18261_gshared (List_1_t683 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m18261(__this, ___item, method) (( bool (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_Contains_m18261_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18263_gshared (List_1_t683 * __this, Int32U5BU5D_t109* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18263(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t683 *, Int32U5BU5D_t109*, int32_t, const MethodInfo*))List_1_CopyTo_m18263_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m18265_gshared (List_1_t683 * __this, Predicate_1_t3164 * ___match, const MethodInfo* method);
#define List_1_Find_m18265(__this, ___match, method) (( int32_t (*) (List_1_t683 *, Predicate_1_t3164 *, const MethodInfo*))List_1_Find_m18265_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18267_gshared (Object_t * __this /* static, unused */, Predicate_1_t3164 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18267(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3164 *, const MethodInfo*))List_1_CheckMatch_m18267_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18269_gshared (List_1_t683 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3164 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18269(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t683 *, int32_t, int32_t, Predicate_1_t3164 *, const MethodInfo*))List_1_GetIndex_m18269_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t785  List_1_GetEnumerator_m4205_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m4205(__this, method) (( Enumerator_t785  (*) (List_1_t683 *, const MethodInfo*))List_1_GetEnumerator_m4205_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18272_gshared (List_1_t683 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m18272(__this, ___item, method) (( int32_t (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_IndexOf_m18272_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18274_gshared (List_1_t683 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18274(__this, ___start, ___delta, method) (( void (*) (List_1_t683 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18274_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18276_gshared (List_1_t683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18276(__this, ___index, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18278_gshared (List_1_t683 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m18278(__this, ___index, ___item, method) (( void (*) (List_1_t683 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m18278_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18280_gshared (List_1_t683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18280(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18280_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m18282_gshared (List_1_t683 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m18282(__this, ___item, method) (( bool (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_Remove_m18282_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18284_gshared (List_1_t683 * __this, Predicate_1_t3164 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18284(__this, ___match, method) (( int32_t (*) (List_1_t683 *, Predicate_1_t3164 *, const MethodInfo*))List_1_RemoveAll_m18284_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18286_gshared (List_1_t683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18286(__this, ___index, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18286_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m18288_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_Reverse_m18288(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_Reverse_m18288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m18290_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_Sort_m18290(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_Sort_m18290_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18292_gshared (List_1_t683 * __this, Comparison_1_t3168 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18292(__this, ___comparison, method) (( void (*) (List_1_t683 *, Comparison_1_t3168 *, const MethodInfo*))List_1_Sort_m18292_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t109* List_1_ToArray_m18294_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_ToArray_m18294(__this, method) (( Int32U5BU5D_t109* (*) (List_1_t683 *, const MethodInfo*))List_1_ToArray_m18294_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m18296_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18296(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_TrimExcess_m18296_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18298_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18298(__this, method) (( int32_t (*) (List_1_t683 *, const MethodInfo*))List_1_get_Capacity_m18298_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18300_gshared (List_1_t683 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18300(__this, ___value, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18300_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m18302_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_get_Count_m18302(__this, method) (( int32_t (*) (List_1_t683 *, const MethodInfo*))List_1_get_Count_m18302_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m18304_gshared (List_1_t683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18304(__this, ___index, method) (( int32_t (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_get_Item_m18304_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18306_gshared (List_1_t683 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m18306(__this, ___index, ___value, method) (( void (*) (List_1_t683 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m18306_gshared)(__this, ___index, ___value, method)
