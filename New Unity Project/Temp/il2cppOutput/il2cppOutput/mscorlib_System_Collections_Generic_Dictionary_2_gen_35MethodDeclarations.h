#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3233;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1134;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t3906;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t3236;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t3240;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2998;
// System.Collections.Generic.IDictionary`2<System.Object,System.UInt16>
struct IDictionary_2_t3910;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t3911;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t3912;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m19374_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19374(__this, method) (( void (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2__ctor_m19374_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19376_gshared (Dictionary_2_t3233 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19376(__this, ___comparer, method) (( void (*) (Dictionary_2_t3233 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19376_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m19378_gshared (Dictionary_2_t3233 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m19378(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3233 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19378_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19380_gshared (Dictionary_2_t3233 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19380(__this, ___capacity, method) (( void (*) (Dictionary_2_t3233 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19380_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19382_gshared (Dictionary_2_t3233 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19382(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3233 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19382_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19384_gshared (Dictionary_2_t3233 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19384(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3233 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m19384_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19386_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19386(__this, method) (( Object_t* (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19386_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19388_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19388(__this, method) (( Object_t* (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19388_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19390_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19390(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3233 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19390_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19392_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19392(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3233 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19392_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19394_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19394(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3233 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19394_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19396_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19396(__this, ___key, method) (( bool (*) (Dictionary_2_t3233 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19396_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19398_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19398(__this, ___key, method) (( void (*) (Dictionary_2_t3233 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19398_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19400_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19400(__this, method) (( bool (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19400_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19402_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19402(__this, method) (( Object_t * (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19404_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19404(__this, method) (( bool (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19404_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19406_gshared (Dictionary_2_t3233 * __this, KeyValuePair_2_t3234  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19406(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3233 *, KeyValuePair_2_t3234 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19406_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19408_gshared (Dictionary_2_t3233 * __this, KeyValuePair_2_t3234  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19408(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3233 *, KeyValuePair_2_t3234 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19408_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19410_gshared (Dictionary_2_t3233 * __this, KeyValuePair_2U5BU5D_t3911* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19410(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3233 *, KeyValuePair_2U5BU5D_t3911*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19410_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19412_gshared (Dictionary_2_t3233 * __this, KeyValuePair_2_t3234  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19412(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3233 *, KeyValuePair_2_t3234 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19412_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19414_gshared (Dictionary_2_t3233 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19414(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3233 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19414_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19416_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19416(__this, method) (( Object_t * (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19416_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19418_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19418(__this, method) (( Object_t* (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19418_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19420_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19420(__this, method) (( Object_t * (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19420_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19422_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19422(__this, method) (( int32_t (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_get_Count_m19422_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m19424_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19424(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t3233 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19424_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19426_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19426(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3233 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m19426_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19428_gshared (Dictionary_2_t3233 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19428(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3233 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19428_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19430_gshared (Dictionary_2_t3233 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19430(__this, ___size, method) (( void (*) (Dictionary_2_t3233 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19430_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19432_gshared (Dictionary_2_t3233 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19432(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3233 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19432_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3234  Dictionary_2_make_pair_m19434_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19434(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3234  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m19434_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m19436_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19436(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m19436_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m19438_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19438(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m19438_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19440_gshared (Dictionary_2_t3233 * __this, KeyValuePair_2U5BU5D_t3911* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19440(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3233 *, KeyValuePair_2U5BU5D_t3911*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19440_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m19442_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19442(__this, method) (( void (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_Resize_m19442_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19444_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19444(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3233 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m19444_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m19446_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19446(__this, method) (( void (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_Clear_m19446_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19448_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19448(__this, ___key, method) (( bool (*) (Dictionary_2_t3233 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19448_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19450_gshared (Dictionary_2_t3233 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19450(__this, ___value, method) (( bool (*) (Dictionary_2_t3233 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m19450_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19452_gshared (Dictionary_2_t3233 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19452(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3233 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m19452_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19454_gshared (Dictionary_2_t3233 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19454(__this, ___sender, method) (( void (*) (Dictionary_2_t3233 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19454_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19456_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19456(__this, ___key, method) (( bool (*) (Dictionary_2_t3233 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19456_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19458_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19458(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3233 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m19458_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t3236 * Dictionary_2_get_Keys_m19460_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19460(__this, method) (( KeyCollection_t3236 * (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_get_Keys_m19460_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t3240 * Dictionary_2_get_Values_m19462_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19462(__this, method) (( ValueCollection_t3240 * (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_get_Values_m19462_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19464_gshared (Dictionary_2_t3233 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19464(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3233 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19464_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m19466_gshared (Dictionary_2_t3233 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19466(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t3233 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19466_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19468_gshared (Dictionary_2_t3233 * __this, KeyValuePair_2_t3234  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19468(__this, ___pair, method) (( bool (*) (Dictionary_2_t3233 *, KeyValuePair_2_t3234 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19468_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t3238  Dictionary_2_GetEnumerator_m19470_gshared (Dictionary_2_t3233 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19470(__this, method) (( Enumerator_t3238  (*) (Dictionary_2_t3233 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19470_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1596  Dictionary_2_U3CCopyToU3Em__0_m19472_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19472(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19472_gshared)(__this /* static, unused */, ___key, ___value, method)
