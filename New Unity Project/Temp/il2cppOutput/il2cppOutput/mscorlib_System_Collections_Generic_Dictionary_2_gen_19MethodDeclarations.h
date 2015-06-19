#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
struct Dictionary_2_t692;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3783;
// System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>
struct ICollection_1_t3979;
// System.Object
struct Object_t;
// Vuforia.ImageTarget
struct ImageTarget_t700;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>
struct KeyCollection_t3369;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>
struct ValueCollection_t846;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2964;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.ImageTarget>
struct IDictionary_2_t3980;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>[]
struct KeyValuePair_2U5BU5D_t3981;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
struct IEnumerator_1_t3982;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_32MethodDeclarations.h"
#define Dictionary_2__ctor_m4363(__this, method) (( void (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2__ctor_m15475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21675(__this, ___comparer, method) (( void (*) (Dictionary_2_t692 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15477_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m21676(__this, ___dictionary, method) (( void (*) (Dictionary_2_t692 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15479_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Int32)
#define Dictionary_2__ctor_m21677(__this, ___capacity, method) (( void (*) (Dictionary_2_t692 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15481_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21678(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t692 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15483_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m21679(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t692 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m15485_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21680(__this, method) (( Object_t* (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15487_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21681(__this, method) (( Object_t* (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15489_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21682(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t692 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15491_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21683(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t692 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15493_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m21684(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t692 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15495_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m21685(__this, ___key, method) (( bool (*) (Dictionary_2_t692 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15497_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m21686(__this, ___key, method) (( void (*) (Dictionary_2_t692 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15499_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21687(__this, method) (( bool (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15501_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21688(__this, method) (( Object_t * (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15503_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21689(__this, method) (( bool (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21690(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t692 *, KeyValuePair_2_t3368 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15507_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21691(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t692 *, KeyValuePair_2_t3368 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15509_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21692(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t692 *, KeyValuePair_2U5BU5D_t3981*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15511_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21693(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t692 *, KeyValuePair_2_t3368 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15513_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t692 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15515_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21695(__this, method) (( Object_t * (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15517_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21696(__this, method) (( Object_t* (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15519_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21697(__this, method) (( Object_t * (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15521_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Count()
#define Dictionary_2_get_Count_m21698(__this, method) (( int32_t (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_get_Count_m15523_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Item(TKey)
#define Dictionary_2_get_Item_m21699(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t692 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m15525_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m21700(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t692 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15527_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m21701(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t692 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15529_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m21702(__this, ___size, method) (( void (*) (Dictionary_2_t692 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15531_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m21703(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t692 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15533_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m21704(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3368  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15535_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m21705(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15537_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m21706(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15539_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m21707(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t692 *, KeyValuePair_2U5BU5D_t3981*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15541_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Resize()
#define Dictionary_2_Resize_m21708(__this, method) (( void (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_Resize_m15543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Add(TKey,TValue)
#define Dictionary_2_Add_m21709(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t692 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m15545_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Clear()
#define Dictionary_2_Clear_m21710(__this, method) (( void (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_Clear_m15547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m21711(__this, ___key, method) (( bool (*) (Dictionary_2_t692 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m15549_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m21712(__this, ___value, method) (( bool (*) (Dictionary_2_t692 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15551_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m21713(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t692 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m15553_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m21714(__this, ___sender, method) (( void (*) (Dictionary_2_t692 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15555_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Remove(TKey)
#define Dictionary_2_Remove_m21715(__this, ___key, method) (( bool (*) (Dictionary_2_t692 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m15557_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m21716(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t692 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15559_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Keys()
#define Dictionary_2_get_Keys_m21717(__this, method) (( KeyCollection_t3369 * (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_get_Keys_m15561_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Values()
#define Dictionary_2_get_Values_m4367(__this, method) (( ValueCollection_t846 * (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_get_Values_m15562_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m21718(__this, ___key, method) (( int32_t (*) (Dictionary_2_t692 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15564_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m21719(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t692 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15566_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m21720(__this, ___pair, method) (( bool (*) (Dictionary_2_t692 *, KeyValuePair_2_t3368 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15568_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m21721(__this, method) (( Enumerator_t3370  (*) (Dictionary_2_t692 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15569_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m21722(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15571_gshared)(__this /* static, unused */, ___key, ___value, method)
