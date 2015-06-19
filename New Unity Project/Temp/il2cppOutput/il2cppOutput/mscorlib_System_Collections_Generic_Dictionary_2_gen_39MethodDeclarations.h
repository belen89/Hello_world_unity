#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct Dictionary_2_t3572;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3871;
// System.Collections.Generic.ICollection`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ICollection_1_t4087;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t1048;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct KeyCollection_t4090;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ValueCollection_t4091;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t3230;
// System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct IDictionary_2_t1043;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>[]
struct KeyValuePair_2U5BU5D_t4088;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>
struct IEnumerator_1_t4089;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_39.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__43.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_34MethodDeclarations.h"
#define Dictionary_2__ctor_m24647(__this, method) (( void (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2__ctor_m16113_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24648(__this, ___comparer, method) (( void (*) (Dictionary_2_t3572 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16115_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24649(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3572 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16117_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24650(__this, ___capacity, method) (( void (*) (Dictionary_2_t3572 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16119_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24651(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3572 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16121_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24652(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3572 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m16123_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24653(__this, method) (( Object_t* (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16125_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24654(__this, method) (( Object_t* (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16127_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24655(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3572 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16129_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24656(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3572 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16131_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24657(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3572 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16133_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24658(__this, ___key, method) (( bool (*) (Dictionary_2_t3572 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16135_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24659(__this, ___key, method) (( void (*) (Dictionary_2_t3572 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16137_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24660(__this, method) (( bool (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16139_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24661(__this, method) (( Object_t * (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16141_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24662(__this, method) (( bool (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16143_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24663(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3572 *, KeyValuePair_2_t3576 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16145_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24664(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3572 *, KeyValuePair_2_t3576 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16147_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3572 *, KeyValuePair_2U5BU5D_t4088*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16149_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24666(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3572 *, KeyValuePair_2_t3576 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16151_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24667(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3572 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16153_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24668(__this, method) (( Object_t * (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16155_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24669(__this, method) (( Object_t* (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16157_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24670(__this, method) (( Object_t * (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16159_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Count()
#define Dictionary_2_get_Count_m24671(__this, method) (( int32_t (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_get_Count_m16161_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Item(TKey)
#define Dictionary_2_get_Item_m24672(__this, ___key, method) (( ConstructorDelegate_t1048 * (*) (Dictionary_2_t3572 *, Type_t *, const MethodInfo*))Dictionary_2_get_Item_m16163_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24673(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3572 *, Type_t *, ConstructorDelegate_t1048 *, const MethodInfo*))Dictionary_2_set_Item_m16165_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24674(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3572 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16167_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24675(__this, ___size, method) (( void (*) (Dictionary_2_t3572 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16169_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24676(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3572 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16171_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24677(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3576  (*) (Object_t * /* static, unused */, Type_t *, ConstructorDelegate_t1048 *, const MethodInfo*))Dictionary_2_make_pair_m16173_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24678(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Type_t *, ConstructorDelegate_t1048 *, const MethodInfo*))Dictionary_2_pick_key_m16175_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24679(__this /* static, unused */, ___key, ___value, method) (( ConstructorDelegate_t1048 * (*) (Object_t * /* static, unused */, Type_t *, ConstructorDelegate_t1048 *, const MethodInfo*))Dictionary_2_pick_value_m16177_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24680(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3572 *, KeyValuePair_2U5BU5D_t4088*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16179_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Resize()
#define Dictionary_2_Resize_m24681(__this, method) (( void (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_Resize_m16181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Add(TKey,TValue)
#define Dictionary_2_Add_m24682(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3572 *, Type_t *, ConstructorDelegate_t1048 *, const MethodInfo*))Dictionary_2_Add_m16183_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Clear()
#define Dictionary_2_Clear_m24683(__this, method) (( void (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_Clear_m16185_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24684(__this, ___key, method) (( bool (*) (Dictionary_2_t3572 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16187_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24685(__this, ___value, method) (( bool (*) (Dictionary_2_t3572 *, ConstructorDelegate_t1048 *, const MethodInfo*))Dictionary_2_ContainsValue_m16189_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24686(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3572 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m16191_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24687(__this, ___sender, method) (( void (*) (Dictionary_2_t3572 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16193_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Remove(TKey)
#define Dictionary_2_Remove_m24688(__this, ___key, method) (( bool (*) (Dictionary_2_t3572 *, Type_t *, const MethodInfo*))Dictionary_2_Remove_m16195_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24689(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3572 *, Type_t *, ConstructorDelegate_t1048 **, const MethodInfo*))Dictionary_2_TryGetValue_m16197_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Keys()
#define Dictionary_2_get_Keys_m24690(__this, method) (( KeyCollection_t4090 * (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_get_Keys_m16199_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Values()
#define Dictionary_2_get_Values_m24691(__this, method) (( ValueCollection_t4091 * (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_get_Values_m16201_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24692(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t3572 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16203_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24693(__this, ___value, method) (( ConstructorDelegate_t1048 * (*) (Dictionary_2_t3572 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16205_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24694(__this, ___pair, method) (( bool (*) (Dictionary_2_t3572 *, KeyValuePair_2_t3576 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16207_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m24695(__this, method) (( Enumerator_t4092  (*) (Dictionary_2_t3572 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16209_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24696(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, Type_t *, ConstructorDelegate_t1048 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16211_gshared)(__this /* static, unused */, ___key, ___value, method)
