#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.WordResult>
struct List_1_t657;
// System.Object
struct Object_t;
// Vuforia.WordResult
struct WordResult_t663;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t739;
// System.Collections.Generic.IEnumerator`1<Vuforia.WordResult>
struct IEnumerator_1_t862;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<Vuforia.WordResult>
struct ICollection_1_t3916;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.WordResult>
struct ReadOnlyCollection_1_t3258;
// Vuforia.WordResult[]
struct WordResultU5BU5D_t3253;
// System.Predicate`1<Vuforia.WordResult>
struct Predicate_1_t3259;
// System.Comparison`1<Vuforia.WordResult>
struct Comparison_1_t3260;
// System.Collections.Generic.List`1/Enumerator<Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m4281(__this, method) (( void (*) (List_1_t657 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19719(__this, ___collection, method) (( void (*) (List_1_t657 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::.ctor(System.Int32)
#define List_1__ctor_m19720(__this, ___capacity, method) (( void (*) (List_1_t657 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::.cctor()
#define List_1__cctor_m19721(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19722(__this, method) (( Object_t* (*) (List_1_t657 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19723(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t657 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19724(__this, method) (( Object_t * (*) (List_1_t657 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19725(__this, ___item, method) (( int32_t (*) (List_1_t657 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19726(__this, ___item, method) (( bool (*) (List_1_t657 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19727(__this, ___item, method) (( int32_t (*) (List_1_t657 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19728(__this, ___index, ___item, method) (( void (*) (List_1_t657 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19729(__this, ___item, method) (( void (*) (List_1_t657 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19730(__this, method) (( bool (*) (List_1_t657 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19731(__this, method) (( bool (*) (List_1_t657 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19732(__this, method) (( Object_t * (*) (List_1_t657 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19733(__this, method) (( bool (*) (List_1_t657 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19734(__this, method) (( bool (*) (List_1_t657 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19735(__this, ___index, method) (( Object_t * (*) (List_1_t657 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19736(__this, ___index, ___value, method) (( void (*) (List_1_t657 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Add(T)
#define List_1_Add_m19737(__this, ___item, method) (( void (*) (List_1_t657 *, WordResult_t663 *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19738(__this, ___newCount, method) (( void (*) (List_1_t657 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19739(__this, ___collection, method) (( void (*) (List_1_t657 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19740(__this, ___enumerable, method) (( void (*) (List_1_t657 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19741(__this, ___collection, method) (( void (*) (List_1_t657 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.WordResult>::AsReadOnly()
#define List_1_AsReadOnly_m19742(__this, method) (( ReadOnlyCollection_1_t3258 * (*) (List_1_t657 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Clear()
#define List_1_Clear_m19743(__this, method) (( void (*) (List_1_t657 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordResult>::Contains(T)
#define List_1_Contains_m19744(__this, ___item, method) (( bool (*) (List_1_t657 *, WordResult_t663 *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19745(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t657 *, WordResultU5BU5D_t3253*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.WordResult>::Find(System.Predicate`1<T>)
#define List_1_Find_m19746(__this, ___match, method) (( WordResult_t663 * (*) (List_1_t657 *, Predicate_1_t3259 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19747(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3259 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19748(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t657 *, int32_t, int32_t, Predicate_1_t3259 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.WordResult>::GetEnumerator()
#define List_1_GetEnumerator_m4269(__this, method) (( Enumerator_t810  (*) (List_1_t657 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordResult>::IndexOf(T)
#define List_1_IndexOf_m19749(__this, ___item, method) (( int32_t (*) (List_1_t657 *, WordResult_t663 *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19750(__this, ___start, ___delta, method) (( void (*) (List_1_t657 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19751(__this, ___index, method) (( void (*) (List_1_t657 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Insert(System.Int32,T)
#define List_1_Insert_m19752(__this, ___index, ___item, method) (( void (*) (List_1_t657 *, int32_t, WordResult_t663 *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19753(__this, ___collection, method) (( void (*) (List_1_t657 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordResult>::Remove(T)
#define List_1_Remove_m19754(__this, ___item, method) (( bool (*) (List_1_t657 *, WordResult_t663 *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordResult>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19755(__this, ___match, method) (( int32_t (*) (List_1_t657 *, Predicate_1_t3259 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19756(__this, ___index, method) (( void (*) (List_1_t657 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Reverse()
#define List_1_Reverse_m19757(__this, method) (( void (*) (List_1_t657 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Sort()
#define List_1_Sort_m19758(__this, method) (( void (*) (List_1_t657 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19759(__this, ___comparison, method) (( void (*) (List_1_t657 *, Comparison_1_t3260 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.WordResult>::ToArray()
#define List_1_ToArray_m19760(__this, method) (( WordResultU5BU5D_t3253* (*) (List_1_t657 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::TrimExcess()
#define List_1_TrimExcess_m19761(__this, method) (( void (*) (List_1_t657 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordResult>::get_Capacity()
#define List_1_get_Capacity_m19762(__this, method) (( int32_t (*) (List_1_t657 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19763(__this, ___value, method) (( void (*) (List_1_t657 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordResult>::get_Count()
#define List_1_get_Count_m19764(__this, method) (( int32_t (*) (List_1_t657 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.WordResult>::get_Item(System.Int32)
#define List_1_get_Item_m19765(__this, ___index, method) (( WordResult_t663 * (*) (List_1_t657 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::set_Item(System.Int32,T)
#define List_1_set_Item_m19766(__this, ___index, ___value, method) (( void (*) (List_1_t657 *, int32_t, WordResult_t663 *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
