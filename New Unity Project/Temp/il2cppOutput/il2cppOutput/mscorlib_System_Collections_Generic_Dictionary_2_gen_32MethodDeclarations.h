#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2967;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3783;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1134;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2972;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2976;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2964;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t3788;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3789;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3790;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15475_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15475(__this, method) (( void (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2__ctor_m15475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15477_gshared (Dictionary_2_t2967 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15477(__this, ___comparer, method) (( void (*) (Dictionary_2_t2967 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15477_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m15479_gshared (Dictionary_2_t2967 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m15479(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2967 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15479_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15481_gshared (Dictionary_2_t2967 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15481(__this, ___capacity, method) (( void (*) (Dictionary_2_t2967 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15481_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15483_gshared (Dictionary_2_t2967 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15483(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2967 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15483_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15485_gshared (Dictionary_2_t2967 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15485(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2967 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m15485_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15487_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15487(__this, method) (( Object_t* (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15487_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15489_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15489(__this, method) (( Object_t* (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15489_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15491_gshared (Dictionary_2_t2967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15491(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2967 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15491_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15493_gshared (Dictionary_2_t2967 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15493(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2967 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15493_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15495_gshared (Dictionary_2_t2967 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15495(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2967 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15495_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15497_gshared (Dictionary_2_t2967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15497(__this, ___key, method) (( bool (*) (Dictionary_2_t2967 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15497_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15499_gshared (Dictionary_2_t2967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15499(__this, ___key, method) (( void (*) (Dictionary_2_t2967 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15499_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15501_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15501(__this, method) (( bool (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15501_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15503_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15503(__this, method) (( Object_t * (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15503_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15505_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15505(__this, method) (( bool (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15507_gshared (Dictionary_2_t2967 * __this, KeyValuePair_2_t2968  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15507(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2967 *, KeyValuePair_2_t2968 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15507_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15509_gshared (Dictionary_2_t2967 * __this, KeyValuePair_2_t2968  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15509(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2967 *, KeyValuePair_2_t2968 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15509_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15511_gshared (Dictionary_2_t2967 * __this, KeyValuePair_2U5BU5D_t3789* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15511(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2967 *, KeyValuePair_2U5BU5D_t3789*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15511_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15513_gshared (Dictionary_2_t2967 * __this, KeyValuePair_2_t2968  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15513(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2967 *, KeyValuePair_2_t2968 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15513_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15515_gshared (Dictionary_2_t2967 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15515(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2967 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15515_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15517_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15517(__this, method) (( Object_t * (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15517_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15519_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15519(__this, method) (( Object_t* (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15519_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15521_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15521(__this, method) (( Object_t * (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15521_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15523_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15523(__this, method) (( int32_t (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_get_Count_m15523_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15525_gshared (Dictionary_2_t2967 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15525(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2967 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m15525_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15527_gshared (Dictionary_2_t2967 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15527(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2967 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15527_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15529_gshared (Dictionary_2_t2967 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15529(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2967 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15529_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15531_gshared (Dictionary_2_t2967 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15531(__this, ___size, method) (( void (*) (Dictionary_2_t2967 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15531_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15533_gshared (Dictionary_2_t2967 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15533(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2967 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15533_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2968  Dictionary_2_make_pair_m15535_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15535(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2968  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15535_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m15537_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15537(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15537_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15539_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15539(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15539_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15541_gshared (Dictionary_2_t2967 * __this, KeyValuePair_2U5BU5D_t3789* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15541(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2967 *, KeyValuePair_2U5BU5D_t3789*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15541_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15543_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15543(__this, method) (( void (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_Resize_m15543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15545_gshared (Dictionary_2_t2967 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15545(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2967 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m15545_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15547_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15547(__this, method) (( void (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_Clear_m15547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15549_gshared (Dictionary_2_t2967 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15549(__this, ___key, method) (( bool (*) (Dictionary_2_t2967 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m15549_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15551_gshared (Dictionary_2_t2967 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15551(__this, ___value, method) (( bool (*) (Dictionary_2_t2967 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15551_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15553_gshared (Dictionary_2_t2967 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15553(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2967 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m15553_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15555_gshared (Dictionary_2_t2967 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15555(__this, ___sender, method) (( void (*) (Dictionary_2_t2967 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15555_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15557_gshared (Dictionary_2_t2967 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15557(__this, ___key, method) (( bool (*) (Dictionary_2_t2967 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m15557_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15559_gshared (Dictionary_2_t2967 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15559(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2967 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15559_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2972 * Dictionary_2_get_Keys_m15561_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15561(__this, method) (( KeyCollection_t2972 * (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_get_Keys_m15561_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2976 * Dictionary_2_get_Values_m15562_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15562(__this, method) (( ValueCollection_t2976 * (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_get_Values_m15562_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m15564_gshared (Dictionary_2_t2967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15564(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2967 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15564_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15566_gshared (Dictionary_2_t2967 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15566(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2967 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15566_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15568_gshared (Dictionary_2_t2967 * __this, KeyValuePair_2_t2968  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15568(__this, ___pair, method) (( bool (*) (Dictionary_2_t2967 *, KeyValuePair_2_t2968 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15568_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2974  Dictionary_2_GetEnumerator_m15569_gshared (Dictionary_2_t2967 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15569(__this, method) (( Enumerator_t2974  (*) (Dictionary_2_t2967 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15569_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1596  Dictionary_2_U3CCopyToU3Em__0_m15571_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15571(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15571_gshared)(__this /* static, unused */, ___key, ___value, method)
