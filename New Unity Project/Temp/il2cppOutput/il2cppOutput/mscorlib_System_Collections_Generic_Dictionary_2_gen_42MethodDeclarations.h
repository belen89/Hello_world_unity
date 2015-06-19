#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3594;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1134;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4113;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t3595;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t3599;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2998;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t4114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t4115;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t4116;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__37.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m24954_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m24954(__this, method) (( void (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2__ctor_m24954_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24956_gshared (Dictionary_2_t3594 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24956(__this, ___comparer, method) (( void (*) (Dictionary_2_t3594 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24956_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m24958_gshared (Dictionary_2_t3594 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m24958(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3594 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24958_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m24960_gshared (Dictionary_2_t3594 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m24960(__this, ___capacity, method) (( void (*) (Dictionary_2_t3594 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m24960_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24962_gshared (Dictionary_2_t3594 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24962(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3594 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24962_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24964_gshared (Dictionary_2_t3594 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24964(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3594 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m24964_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24966_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24966(__this, method) (( Object_t* (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24966_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24968_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24968(__this, method) (( Object_t* (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24968_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m24970_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24970(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3594 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m24970_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m24972_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24972(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3594 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m24972_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m24974_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m24974(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3594 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m24974_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m24976_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m24976(__this, ___key, method) (( bool (*) (Dictionary_2_t3594 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m24976_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m24978_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m24978(__this, ___key, method) (( void (*) (Dictionary_2_t3594 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m24978_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24980_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24980(__this, method) (( bool (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24980_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24982_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24982(__this, method) (( Object_t * (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24982_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24984_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24984(__this, method) (( bool (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24984_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24986_gshared (Dictionary_2_t3594 * __this, KeyValuePair_2_t3569  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24986(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3594 *, KeyValuePair_2_t3569 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24986_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24988_gshared (Dictionary_2_t3594 * __this, KeyValuePair_2_t3569  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24988(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3594 *, KeyValuePair_2_t3569 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24988_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24990_gshared (Dictionary_2_t3594 * __this, KeyValuePair_2U5BU5D_t4115* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24990(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3594 *, KeyValuePair_2U5BU5D_t4115*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24990_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24992_gshared (Dictionary_2_t3594 * __this, KeyValuePair_2_t3569  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24992(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3594 *, KeyValuePair_2_t3569 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24992_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m24994_gshared (Dictionary_2_t3594 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24994(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3594 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m24994_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24996_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24996(__this, method) (( Object_t * (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24996_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24998_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24998(__this, method) (( Object_t* (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24998_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25000_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25000(__this, method) (( Object_t * (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25000_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25002_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25002(__this, method) (( int32_t (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_get_Count_m25002_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t3026  Dictionary_2_get_Item_m25004_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25004(__this, ___key, method) (( KeyValuePair_2_t3026  (*) (Dictionary_2_t3594 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m25004_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25006_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, KeyValuePair_2_t3026  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25006(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3594 *, Object_t *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_set_Item_m25006_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25008_gshared (Dictionary_2_t3594 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25008(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3594 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25008_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25010_gshared (Dictionary_2_t3594 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25010(__this, ___size, method) (( void (*) (Dictionary_2_t3594 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25010_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25012_gshared (Dictionary_2_t3594 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25012(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3594 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25012_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3569  Dictionary_2_make_pair_m25014_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t3026  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25014(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3569  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_make_pair_m25014_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m25016_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t3026  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25016(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_pick_key_m25016_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t3026  Dictionary_2_pick_value_m25018_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t3026  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25018(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3026  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_pick_value_m25018_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25020_gshared (Dictionary_2_t3594 * __this, KeyValuePair_2U5BU5D_t4115* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25020(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3594 *, KeyValuePair_2U5BU5D_t4115*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25020_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m25022_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25022(__this, method) (( void (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_Resize_m25022_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25024_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, KeyValuePair_2_t3026  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25024(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3594 *, Object_t *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_Add_m25024_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m25026_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25026(__this, method) (( void (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_Clear_m25026_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25028_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25028(__this, ___key, method) (( bool (*) (Dictionary_2_t3594 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m25028_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25030_gshared (Dictionary_2_t3594 * __this, KeyValuePair_2_t3026  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25030(__this, ___value, method) (( bool (*) (Dictionary_2_t3594 *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_ContainsValue_m25030_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25032_gshared (Dictionary_2_t3594 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25032(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3594 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m25032_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25034_gshared (Dictionary_2_t3594 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25034(__this, ___sender, method) (( void (*) (Dictionary_2_t3594 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25034_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25036_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25036(__this, ___key, method) (( bool (*) (Dictionary_2_t3594 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m25036_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25038_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, KeyValuePair_2_t3026 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25038(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3594 *, Object_t *, KeyValuePair_2_t3026 *, const MethodInfo*))Dictionary_2_TryGetValue_m25038_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t3595 * Dictionary_2_get_Keys_m25040_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25040(__this, method) (( KeyCollection_t3595 * (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_get_Keys_m25040_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t3599 * Dictionary_2_get_Values_m25042_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25042(__this, method) (( ValueCollection_t3599 * (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_get_Values_m25042_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m25044_gshared (Dictionary_2_t3594 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25044(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3594 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25044_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t3026  Dictionary_2_ToTValue_m25046_gshared (Dictionary_2_t3594 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25046(__this, ___value, method) (( KeyValuePair_2_t3026  (*) (Dictionary_2_t3594 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25046_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25048_gshared (Dictionary_2_t3594 * __this, KeyValuePair_2_t3569  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25048(__this, ___pair, method) (( bool (*) (Dictionary_2_t3594 *, KeyValuePair_2_t3569 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25048_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t3597  Dictionary_2_GetEnumerator_m25050_gshared (Dictionary_2_t3594 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25050(__this, method) (( Enumerator_t3597  (*) (Dictionary_2_t3594 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25050_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1596  Dictionary_2_U3CCopyToU3Em__0_m25052_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t3026  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25052(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25052_gshared)(__this /* static, unused */, ___key, ___value, method)
