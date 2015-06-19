#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3659;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1134;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4139;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t3662;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t3666;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2998;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t4140;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t4141;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t4142;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m25614_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25614(__this, method) (( void (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2__ctor_m25614_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25615_gshared (Dictionary_2_t3659 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25615(__this, ___comparer, method) (( void (*) (Dictionary_2_t3659 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25615_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25617_gshared (Dictionary_2_t3659 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25617(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3659 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25617_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25619_gshared (Dictionary_2_t3659 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25619(__this, ___capacity, method) (( void (*) (Dictionary_2_t3659 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25619_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25621_gshared (Dictionary_2_t3659 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25621(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3659 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25621_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25623_gshared (Dictionary_2_t3659 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25623(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3659 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m25623_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25625_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25625(__this, method) (( Object_t* (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25625_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25627_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25627(__this, method) (( Object_t* (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25627_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25629_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25629(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3659 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25629_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25631_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25631(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3659 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25631_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25633_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25633(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3659 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25633_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25635_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25635(__this, ___key, method) (( bool (*) (Dictionary_2_t3659 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25635_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25637_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25637(__this, ___key, method) (( void (*) (Dictionary_2_t3659 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25637_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25639_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25639(__this, method) (( bool (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25639_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25641_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25641(__this, method) (( Object_t * (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25641_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25643_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25643(__this, method) (( bool (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25645_gshared (Dictionary_2_t3659 * __this, KeyValuePair_2_t3660  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25645(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3659 *, KeyValuePair_2_t3660 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25645_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25647_gshared (Dictionary_2_t3659 * __this, KeyValuePair_2_t3660  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25647(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3659 *, KeyValuePair_2_t3660 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25647_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25649_gshared (Dictionary_2_t3659 * __this, KeyValuePair_2U5BU5D_t4141* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25649(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3659 *, KeyValuePair_2U5BU5D_t4141*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25649_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25651_gshared (Dictionary_2_t3659 * __this, KeyValuePair_2_t3660  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25651(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3659 *, KeyValuePair_2_t3660 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25651_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25653_gshared (Dictionary_2_t3659 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25653(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3659 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25653_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25655_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25655(__this, method) (( Object_t * (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25655_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25657_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25657(__this, method) (( Object_t* (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25657_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25659_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25659(__this, method) (( Object_t * (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25659_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25661_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25661(__this, method) (( int32_t (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_get_Count_m25661_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m25663_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25663(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t3659 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m25663_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25665_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25665(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3659 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m25665_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25667_gshared (Dictionary_2_t3659 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25667(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3659 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25667_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25669_gshared (Dictionary_2_t3659 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25669(__this, ___size, method) (( void (*) (Dictionary_2_t3659 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25669_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25671_gshared (Dictionary_2_t3659 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25671(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3659 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25671_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3660  Dictionary_2_make_pair_m25673_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25673(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3660  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m25673_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m25675_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25675(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m25675_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m25677_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25677(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m25677_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25679_gshared (Dictionary_2_t3659 * __this, KeyValuePair_2U5BU5D_t4141* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25679(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3659 *, KeyValuePair_2U5BU5D_t4141*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25679_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m25681_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25681(__this, method) (( void (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_Resize_m25681_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25683_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25683(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3659 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m25683_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m25685_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25685(__this, method) (( void (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_Clear_m25685_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25687_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25687(__this, ___key, method) (( bool (*) (Dictionary_2_t3659 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m25687_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25689_gshared (Dictionary_2_t3659 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25689(__this, ___value, method) (( bool (*) (Dictionary_2_t3659 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m25689_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25691_gshared (Dictionary_2_t3659 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25691(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3659 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m25691_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25693_gshared (Dictionary_2_t3659 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25693(__this, ___sender, method) (( void (*) (Dictionary_2_t3659 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25693_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25695_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25695(__this, ___key, method) (( bool (*) (Dictionary_2_t3659 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m25695_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25697_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25697(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3659 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m25697_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t3662 * Dictionary_2_get_Keys_m25699_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25699(__this, method) (( KeyCollection_t3662 * (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_get_Keys_m25699_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t3666 * Dictionary_2_get_Values_m25701_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25701(__this, method) (( ValueCollection_t3666 * (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_get_Values_m25701_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m25703_gshared (Dictionary_2_t3659 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25703(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3659 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25703_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m25705_gshared (Dictionary_2_t3659 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25705(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t3659 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25705_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25707_gshared (Dictionary_2_t3659 * __this, KeyValuePair_2_t3660  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25707(__this, ___pair, method) (( bool (*) (Dictionary_2_t3659 *, KeyValuePair_2_t3660 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25707_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3664  Dictionary_2_GetEnumerator_m25709_gshared (Dictionary_2_t3659 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25709(__this, method) (( Enumerator_t3664  (*) (Dictionary_2_t3659 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25709_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1596  Dictionary_2_U3CCopyToU3Em__0_m25711_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25711(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25711_gshared)(__this /* static, unused */, ___key, ___value, method)
