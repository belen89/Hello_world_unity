#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>
struct Dictionary_2_t678;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3783;
// System.Collections.Generic.ICollection`1<Vuforia.Prop>
struct ICollection_1_t3952;
// System.Object
struct Object_t;
// Vuforia.Prop
struct Prop_t66;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.Prop>
struct KeyCollection_t834;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.Prop>
struct ValueCollection_t817;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2964;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.Prop>
struct IDictionary_2_t3953;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>[]
struct KeyValuePair_2U5BU5D_t3954;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>>
struct IEnumerator_1_t3955;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.Prop>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_32MethodDeclarations.h"
#define Dictionary_2__ctor_m4338(__this, method) (( void (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2__ctor_m15475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20648(__this, ___comparer, method) (( void (*) (Dictionary_2_t678 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15477_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m20649(__this, ___dictionary, method) (( void (*) (Dictionary_2_t678 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15479_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Int32)
#define Dictionary_2__ctor_m20650(__this, ___capacity, method) (( void (*) (Dictionary_2_t678 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15481_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20651(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t678 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15483_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m20652(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t678 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m15485_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20653(__this, method) (( Object_t* (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15487_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20654(__this, method) (( Object_t* (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15489_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20655(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t678 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15491_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20656(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t678 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15493_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m20657(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t678 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15495_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m20658(__this, ___key, method) (( bool (*) (Dictionary_2_t678 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15497_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m20659(__this, ___key, method) (( void (*) (Dictionary_2_t678 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15499_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20660(__this, method) (( bool (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15501_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20661(__this, method) (( Object_t * (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15503_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20662(__this, method) (( bool (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20663(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t678 *, KeyValuePair_2_t824 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15507_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20664(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t678 *, KeyValuePair_2_t824 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15509_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t678 *, KeyValuePair_2U5BU5D_t3954*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15511_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20666(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t678 *, KeyValuePair_2_t824 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15513_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20667(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t678 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15515_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20668(__this, method) (( Object_t * (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15517_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20669(__this, method) (( Object_t* (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15519_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20670(__this, method) (( Object_t * (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15521_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::get_Count()
#define Dictionary_2_get_Count_m20671(__this, method) (( int32_t (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_get_Count_m15523_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::get_Item(TKey)
#define Dictionary_2_get_Item_m20672(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t678 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m15525_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m20673(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t678 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15527_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m20674(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t678 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15529_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m20675(__this, ___size, method) (( void (*) (Dictionary_2_t678 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15531_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m20676(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t678 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15533_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m20677(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t824  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15535_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m20678(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15537_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m20679(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15539_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m20680(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t678 *, KeyValuePair_2U5BU5D_t3954*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15541_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Resize()
#define Dictionary_2_Resize_m20681(__this, method) (( void (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_Resize_m15543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Add(TKey,TValue)
#define Dictionary_2_Add_m20682(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t678 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m15545_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Clear()
#define Dictionary_2_Clear_m20683(__this, method) (( void (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_Clear_m15547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m20684(__this, ___key, method) (( bool (*) (Dictionary_2_t678 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m15549_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m20685(__this, ___value, method) (( bool (*) (Dictionary_2_t678 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15551_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m20686(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t678 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m15553_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m20687(__this, ___sender, method) (( void (*) (Dictionary_2_t678 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15555_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Remove(TKey)
#define Dictionary_2_Remove_m20688(__this, ___key, method) (( bool (*) (Dictionary_2_t678 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m15557_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m20689(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t678 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15559_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::get_Keys()
#define Dictionary_2_get_Keys_m4333(__this, method) (( KeyCollection_t834 * (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_get_Keys_m15561_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::get_Values()
#define Dictionary_2_get_Values_m4301(__this, method) (( ValueCollection_t817 * (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_get_Values_m15562_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m20690(__this, ___key, method) (( int32_t (*) (Dictionary_2_t678 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15564_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m20691(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t678 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15566_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m20692(__this, ___pair, method) (( bool (*) (Dictionary_2_t678 *, KeyValuePair_2_t824 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15568_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m4314(__this, method) (( Enumerator_t826  (*) (Dictionary_2_t678 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15569_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m20693(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15571_gshared)(__this /* static, unused */, ___key, ___value, method)
