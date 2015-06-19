#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t308;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t307;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t375;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>
struct IEnumerator_1_t3854;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>
struct ICollection_1_t3855;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
struct ReadOnlyCollection_1_t3111;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t3109;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t309;
// System.Comparison`1<UnityEngine.UI.Toggle>
struct Comparison_1_t3113;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_46MethodDeclarations.h"
#define List_1__ctor_m2128(__this, method) (( void (*) (List_1_t308 *, const MethodInfo*))List_1__ctor_m6371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17398(__this, ___collection, method) (( void (*) (List_1_t308 *, Object_t*, const MethodInfo*))List_1__ctor_m14308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Int32)
#define List_1__ctor_m17399(__this, ___capacity, method) (( void (*) (List_1_t308 *, int32_t, const MethodInfo*))List_1__ctor_m14310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.cctor()
#define List_1__cctor_m17400(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17401(__this, method) (( Object_t* (*) (List_1_t308 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17402(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t308 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6592_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17403(__this, method) (( Object_t * (*) (List_1_t308 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17404(__this, ___item, method) (( int32_t (*) (List_1_t308 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17405(__this, ___item, method) (( bool (*) (List_1_t308 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6599_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17406(__this, ___item, method) (( int32_t (*) (List_1_t308 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17407(__this, ___index, ___item, method) (( void (*) (List_1_t308 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6601_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17408(__this, ___item, method) (( void (*) (List_1_t308 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17409(__this, method) (( bool (*) (List_1_t308 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17410(__this, method) (( bool (*) (List_1_t308 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17411(__this, method) (( Object_t * (*) (List_1_t308 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17412(__this, method) (( bool (*) (List_1_t308 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17413(__this, method) (( bool (*) (List_1_t308 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17414(__this, ___index, method) (( Object_t * (*) (List_1_t308 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6595_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17415(__this, ___index, ___value, method) (( void (*) (List_1_t308 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6596_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
#define List_1_Add_m17416(__this, ___item, method) (( void (*) (List_1_t308 *, Toggle_t307 *, const MethodInfo*))List_1_Add_m6605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17417(__this, ___newCount, method) (( void (*) (List_1_t308 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17418(__this, ___collection, method) (( void (*) (List_1_t308 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17419(__this, ___enumerable, method) (( void (*) (List_1_t308 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14334_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17420(__this, ___collection, method) (( void (*) (List_1_t308 *, Object_t*, const MethodInfo*))List_1_AddRange_m14335_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AsReadOnly()
#define List_1_AsReadOnly_m17421(__this, method) (( ReadOnlyCollection_1_t3111 * (*) (List_1_t308 *, const MethodInfo*))List_1_AsReadOnly_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Clear()
#define List_1_Clear_m17422(__this, method) (( void (*) (List_1_t308 *, const MethodInfo*))List_1_Clear_m6598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(T)
#define List_1_Contains_m17423(__this, ___item, method) (( bool (*) (List_1_t308 *, Toggle_t307 *, const MethodInfo*))List_1_Contains_m6606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17424(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t308 *, ToggleU5BU5D_t3109*, int32_t, const MethodInfo*))List_1_CopyTo_m6607_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<T>)
#define List_1_Find_m2132(__this, ___match, method) (( Toggle_t307 * (*) (List_1_t308 *, Predicate_1_t309 *, const MethodInfo*))List_1_Find_m14342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17425(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t309 *, const MethodInfo*))List_1_CheckMatch_m14344_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17426(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t308 *, int32_t, int32_t, Predicate_1_t309 *, const MethodInfo*))List_1_GetIndex_m14346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
#define List_1_GetEnumerator_m17427(__this, method) (( Enumerator_t3112  (*) (List_1_t308 *, const MethodInfo*))List_1_GetEnumerator_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::IndexOf(T)
#define List_1_IndexOf_m17428(__this, ___item, method) (( int32_t (*) (List_1_t308 *, Toggle_t307 *, const MethodInfo*))List_1_IndexOf_m6610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17429(__this, ___start, ___delta, method) (( void (*) (List_1_t308 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14350_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17430(__this, ___index, method) (( void (*) (List_1_t308 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
#define List_1_Insert_m17431(__this, ___index, ___item, method) (( void (*) (List_1_t308 *, int32_t, Toggle_t307 *, const MethodInfo*))List_1_Insert_m6611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17432(__this, ___collection, method) (( void (*) (List_1_t308 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14355_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
#define List_1_Remove_m17433(__this, ___item, method) (( bool (*) (List_1_t308 *, Toggle_t307 *, const MethodInfo*))List_1_Remove_m6608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17434(__this, ___match, method) (( int32_t (*) (List_1_t308 *, Predicate_1_t309 *, const MethodInfo*))List_1_RemoveAll_m14358_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17435(__this, ___index, method) (( void (*) (List_1_t308 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Reverse()
#define List_1_Reverse_m17436(__this, method) (( void (*) (List_1_t308 *, const MethodInfo*))List_1_Reverse_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort()
#define List_1_Sort_m17437(__this, method) (( void (*) (List_1_t308 *, const MethodInfo*))List_1_Sort_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17438(__this, ___comparison, method) (( void (*) (List_1_t308 *, Comparison_1_t3113 *, const MethodInfo*))List_1_Sort_m14365_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::ToArray()
#define List_1_ToArray_m17439(__this, method) (( ToggleU5BU5D_t3109* (*) (List_1_t308 *, const MethodInfo*))List_1_ToArray_m14367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::TrimExcess()
#define List_1_TrimExcess_m17440(__this, method) (( void (*) (List_1_t308 *, const MethodInfo*))List_1_TrimExcess_m14369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Capacity()
#define List_1_get_Capacity_m17441(__this, method) (( int32_t (*) (List_1_t308 *, const MethodInfo*))List_1_get_Capacity_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17442(__this, ___value, method) (( void (*) (List_1_t308 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
#define List_1_get_Count_m17443(__this, method) (( int32_t (*) (List_1_t308 *, const MethodInfo*))List_1_get_Count_m6589_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
#define List_1_get_Item_m17444(__this, ___index, method) (( Toggle_t307 * (*) (List_1_t308 *, int32_t, const MethodInfo*))List_1_get_Item_m6612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#define List_1_set_Item_m17445(__this, ___index, ___value, method) (( void (*) (List_1_t308 *, int32_t, Toggle_t307 *, const MethodInfo*))List_1_set_Item_m6613_gshared)(__this, ___index, ___value, method)
