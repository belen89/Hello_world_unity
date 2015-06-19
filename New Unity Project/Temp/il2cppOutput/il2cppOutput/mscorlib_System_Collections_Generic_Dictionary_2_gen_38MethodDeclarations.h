﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3547;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t4076;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1134;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3551;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3555;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3545;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t4077;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t4078;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t4079;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m24220_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m24220(__this, method) (( void (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2__ctor_m24220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24222_gshared (Dictionary_2_t3547 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24222(__this, ___comparer, method) (( void (*) (Dictionary_2_t3547 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24222_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m24224_gshared (Dictionary_2_t3547 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m24224(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3547 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24224_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m24226_gshared (Dictionary_2_t3547 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m24226(__this, ___capacity, method) (( void (*) (Dictionary_2_t3547 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m24226_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24228_gshared (Dictionary_2_t3547 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24228(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3547 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24228_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24230_gshared (Dictionary_2_t3547 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24230(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3547 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m24230_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24232_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24232(__this, method) (( Object_t* (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24232_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24234_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24234(__this, method) (( Object_t* (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24234_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m24236_gshared (Dictionary_2_t3547 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24236(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3547 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m24236_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m24238_gshared (Dictionary_2_t3547 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24238(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3547 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m24238_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m24240_gshared (Dictionary_2_t3547 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m24240(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3547 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m24240_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m24242_gshared (Dictionary_2_t3547 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m24242(__this, ___key, method) (( bool (*) (Dictionary_2_t3547 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m24242_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m24244_gshared (Dictionary_2_t3547 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m24244(__this, ___key, method) (( void (*) (Dictionary_2_t3547 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m24244_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24246_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24246(__this, method) (( bool (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24246_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24248_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24248(__this, method) (( Object_t * (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24248_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24250_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24250(__this, method) (( bool (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24250_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24252_gshared (Dictionary_2_t3547 * __this, KeyValuePair_2_t3548  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24252(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3547 *, KeyValuePair_2_t3548 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24252_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24254_gshared (Dictionary_2_t3547 * __this, KeyValuePair_2_t3548  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24254(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3547 *, KeyValuePair_2_t3548 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24254_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24256_gshared (Dictionary_2_t3547 * __this, KeyValuePair_2U5BU5D_t4078* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24256(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3547 *, KeyValuePair_2U5BU5D_t4078*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24256_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24258_gshared (Dictionary_2_t3547 * __this, KeyValuePair_2_t3548  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24258(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3547 *, KeyValuePair_2_t3548 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24258_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m24260_gshared (Dictionary_2_t3547 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24260(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3547 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m24260_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24262_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24262(__this, method) (( Object_t * (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24262_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24264_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24264(__this, method) (( Object_t* (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24264_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24266_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24266(__this, method) (( Object_t * (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24266_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m24268_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m24268(__this, method) (( int32_t (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_get_Count_m24268_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m24270_gshared (Dictionary_2_t3547 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m24270(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3547 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m24270_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m24272_gshared (Dictionary_2_t3547 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m24272(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3547 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m24272_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m24274_gshared (Dictionary_2_t3547 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m24274(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3547 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24274_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m24276_gshared (Dictionary_2_t3547 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m24276(__this, ___size, method) (( void (*) (Dictionary_2_t3547 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24276_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m24278_gshared (Dictionary_2_t3547 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m24278(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3547 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24278_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3548  Dictionary_2_make_pair_m24280_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m24280(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3548  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m24280_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m24282_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m24282(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m24282_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m24284_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m24284(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m24284_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m24286_gshared (Dictionary_2_t3547 * __this, KeyValuePair_2U5BU5D_t4078* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m24286(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3547 *, KeyValuePair_2U5BU5D_t4078*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24286_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m24288_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m24288(__this, method) (( void (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_Resize_m24288_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m24290_gshared (Dictionary_2_t3547 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m24290(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3547 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m24290_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m24292_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m24292(__this, method) (( void (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_Clear_m24292_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m24294_gshared (Dictionary_2_t3547 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m24294(__this, ___key, method) (( bool (*) (Dictionary_2_t3547 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m24294_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m24296_gshared (Dictionary_2_t3547 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m24296(__this, ___value, method) (( bool (*) (Dictionary_2_t3547 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m24296_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m24298_gshared (Dictionary_2_t3547 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m24298(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3547 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m24298_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m24300_gshared (Dictionary_2_t3547 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m24300(__this, ___sender, method) (( void (*) (Dictionary_2_t3547 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m24300_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m24302_gshared (Dictionary_2_t3547 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m24302(__this, ___key, method) (( bool (*) (Dictionary_2_t3547 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m24302_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m24304_gshared (Dictionary_2_t3547 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m24304(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3547 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m24304_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3551 * Dictionary_2_get_Keys_m24306_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m24306(__this, method) (( KeyCollection_t3551 * (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_get_Keys_m24306_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3555 * Dictionary_2_get_Values_m24308_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m24308(__this, method) (( ValueCollection_t3555 * (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_get_Values_m24308_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m24310_gshared (Dictionary_2_t3547 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m24310(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3547 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24310_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m24312_gshared (Dictionary_2_t3547 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m24312(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3547 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24312_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m24314_gshared (Dictionary_2_t3547 * __this, KeyValuePair_2_t3548  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m24314(__this, ___pair, method) (( bool (*) (Dictionary_2_t3547 *, KeyValuePair_2_t3548 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24314_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3553  Dictionary_2_GetEnumerator_m24316_gshared (Dictionary_2_t3547 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m24316(__this, method) (( Enumerator_t3553  (*) (Dictionary_2_t3547 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24316_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1596  Dictionary_2_U3CCopyToU3Em__0_m24318_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24318(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24318_gshared)(__this /* static, unused */, ___key, ___value, method)