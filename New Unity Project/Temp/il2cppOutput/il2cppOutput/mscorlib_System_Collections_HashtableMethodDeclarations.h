﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable
struct Hashtable_t1426;
// System.Collections.IComparer
struct IComparer_t1431;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1437;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1279;
// System.Collections.IDictionary
struct IDictionary_t1531;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1438;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t1928;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"

// System.Void System.Collections.Hashtable::.ctor()
extern "C" void Hashtable__ctor_m7805 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m10383 (Hashtable_t1426 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
extern "C" void Hashtable__ctor_m10384 (Hashtable_t1426 * __this, int32_t ___capacity, float ___loadFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
extern "C" void Hashtable__ctor_m7806 (Hashtable_t1426 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
extern "C" void Hashtable__ctor_m10385 (Hashtable_t1426 * __this, Hashtable_t1426 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m7668 (Hashtable_t1426 * __this, int32_t ___capacity, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m10386 (Hashtable_t1426 * __this, Object_t * ___d, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m7669 (Hashtable_t1426 * __this, Object_t * ___d, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m7703 (Hashtable_t1426 * __this, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hashtable__ctor_m10387 (Hashtable_t1426 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void Hashtable__ctor_m7679 (Hashtable_t1426 * __this, int32_t ___capacity, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
extern "C" void Hashtable__ctor_m10388 (Hashtable_t1426 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
extern "C" void Hashtable__cctor_m10389 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Hashtable_System_Collections_IEnumerable_GetEnumerator_m10390 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
extern "C" void Hashtable_set_comparer_m10391 (Hashtable_t1426 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
extern "C" void Hashtable_set_hcp_m10392 (Hashtable_t1426 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
extern "C" int32_t Hashtable_get_Count_m10393 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
extern "C" bool Hashtable_get_IsSynchronized_m10394 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
extern "C" Object_t * Hashtable_get_SyncRoot_m10395 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
extern "C" Object_t * Hashtable_get_Keys_m10396 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
extern "C" Object_t * Hashtable_get_Values_m10397 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
extern "C" Object_t * Hashtable_get_Item_m10398 (Hashtable_t1426 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
extern "C" void Hashtable_set_Item_m10399 (Hashtable_t1426 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
extern "C" void Hashtable_CopyTo_m10400 (Hashtable_t1426 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
extern "C" void Hashtable_Add_m10401 (Hashtable_t1426 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
extern "C" void Hashtable_Clear_m10402 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
extern "C" bool Hashtable_Contains_m10403 (Hashtable_t1426 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
extern "C" Object_t * Hashtable_GetEnumerator_m10404 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
extern "C" void Hashtable_Remove_m10405 (Hashtable_t1426 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
extern "C" bool Hashtable_ContainsKey_m10406 (Hashtable_t1426 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
extern "C" Object_t * Hashtable_Clone_m10407 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hashtable_GetObjectData_m10408 (Hashtable_t1426 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
extern "C" void Hashtable_OnDeserialization_m10409 (Hashtable_t1426 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
extern "C" int32_t Hashtable_GetHash_m10410 (Hashtable_t1426 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
extern "C" bool Hashtable_KeyEquals_m10411 (Hashtable_t1426 * __this, Object_t * ___item, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
extern "C" void Hashtable_AdjustThreshold_m10412 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
extern "C" void Hashtable_SetTable_m10413 (Hashtable_t1426 * __this, SlotU5BU5D_t1928* ___table, Int32U5BU5D_t109* ___hashes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
extern "C" int32_t Hashtable_Find_m10414 (Hashtable_t1426 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
extern "C" void Hashtable_Rehash_m10415 (Hashtable_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
extern "C" void Hashtable_PutImpl_m10416 (Hashtable_t1426 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
extern "C" void Hashtable_CopyToArray_m10417 (Hashtable_t1426 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
extern "C" bool Hashtable_TestPrime_m10418 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
extern "C" int32_t Hashtable_CalcPrime_m10419 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
extern "C" int32_t Hashtable_ToPrime_m10420 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;