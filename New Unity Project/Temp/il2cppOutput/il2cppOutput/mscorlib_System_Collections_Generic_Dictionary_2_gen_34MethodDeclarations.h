#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3025;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1134;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t3028;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t3032;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2998;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t3814;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3592;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3815;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m16113_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16113(__this, method) (( void (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2__ctor_m16113_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16115_gshared (Dictionary_2_t3025 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16115(__this, ___comparer, method) (( void (*) (Dictionary_2_t3025 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16115_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m16117_gshared (Dictionary_2_t3025 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m16117(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3025 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16117_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16119_gshared (Dictionary_2_t3025 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16119(__this, ___capacity, method) (( void (*) (Dictionary_2_t3025 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16119_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16121_gshared (Dictionary_2_t3025 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16121(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3025 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16121_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16123_gshared (Dictionary_2_t3025 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16123(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3025 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m16123_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16125_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16125(__this, method) (( Object_t* (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16125_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16127_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16127(__this, method) (( Object_t* (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16127_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16129_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16129(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16129_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16131_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16131(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3025 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16131_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16133_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16133(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3025 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16133_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16135_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16135(__this, ___key, method) (( bool (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16135_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16137_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16137(__this, ___key, method) (( void (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16137_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16139_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16139(__this, method) (( bool (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16139_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16141_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16141(__this, method) (( Object_t * (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16141_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16143_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16143(__this, method) (( bool (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16143_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16145_gshared (Dictionary_2_t3025 * __this, KeyValuePair_2_t3026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16145(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3025 *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16145_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16147_gshared (Dictionary_2_t3025 * __this, KeyValuePair_2_t3026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16147(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3025 *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16147_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16149_gshared (Dictionary_2_t3025 * __this, KeyValuePair_2U5BU5D_t3592* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16149(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3025 *, KeyValuePair_2U5BU5D_t3592*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16149_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16151_gshared (Dictionary_2_t3025 * __this, KeyValuePair_2_t3026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16151(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3025 *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16151_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16153_gshared (Dictionary_2_t3025 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16153(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3025 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16153_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16155_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16155(__this, method) (( Object_t * (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16155_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16157_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16157(__this, method) (( Object_t* (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16157_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16159_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16159(__this, method) (( Object_t * (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16159_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16161_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16161(__this, method) (( int32_t (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_get_Count_m16161_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m16163_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16163(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16163_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16165_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16165(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3025 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m16165_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16167_gshared (Dictionary_2_t3025 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16167(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3025 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16167_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16169_gshared (Dictionary_2_t3025 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16169(__this, ___size, method) (( void (*) (Dictionary_2_t3025 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16169_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16171_gshared (Dictionary_2_t3025 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16171(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3025 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16171_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3026  Dictionary_2_make_pair_m16173_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16173(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3026  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m16173_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m16175_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16175(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m16175_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m16177_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16177(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m16177_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16179_gshared (Dictionary_2_t3025 * __this, KeyValuePair_2U5BU5D_t3592* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16179(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3025 *, KeyValuePair_2U5BU5D_t3592*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16179_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m16181_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16181(__this, method) (( void (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_Resize_m16181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16183_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16183(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3025 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m16183_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m16185_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16185(__this, method) (( void (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_Clear_m16185_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16187_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16187(__this, ___key, method) (( bool (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16187_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16189_gshared (Dictionary_2_t3025 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16189(__this, ___value, method) (( bool (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m16189_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16191_gshared (Dictionary_2_t3025 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16191(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3025 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m16191_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16193_gshared (Dictionary_2_t3025 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16193(__this, ___sender, method) (( void (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16193_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16195_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16195(__this, ___key, method) (( bool (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16195_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16197_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16197(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3025 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m16197_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t3028 * Dictionary_2_get_Keys_m16199_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16199(__this, method) (( KeyCollection_t3028 * (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_get_Keys_m16199_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t3032 * Dictionary_2_get_Values_m16201_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16201(__this, method) (( ValueCollection_t3032 * (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_get_Values_m16201_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16203_gshared (Dictionary_2_t3025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16203(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16203_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m16205_gshared (Dictionary_2_t3025 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16205(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3025 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16205_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16207_gshared (Dictionary_2_t3025 * __this, KeyValuePair_2_t3026  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16207(__this, ___pair, method) (( bool (*) (Dictionary_2_t3025 *, KeyValuePair_2_t3026 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16207_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3030  Dictionary_2_GetEnumerator_m16209_gshared (Dictionary_2_t3025 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16209(__this, method) (( Enumerator_t3030  (*) (Dictionary_2_t3025 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16209_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1596  Dictionary_2_U3CCopyToU3Em__0_m16211_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16211(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16211_gshared)(__this /* static, unused */, ___key, ___value, method)
