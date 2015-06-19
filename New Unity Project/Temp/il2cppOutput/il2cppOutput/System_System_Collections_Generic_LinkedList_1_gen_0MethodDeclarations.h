#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3655;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3654;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t495;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Object[]
struct ObjectU5BU5D_t79;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m25579_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m25579(__this, method) (( void (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1__ctor_m25579_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m25580_gshared (LinkedList_1_t3655 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m25580(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3655 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))LinkedList_1__ctor_m25580_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m25581_gshared (LinkedList_1_t3655 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m25581(__this, ___value, method) (( void (*) (LinkedList_1_t3655 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m25581_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m25582_gshared (LinkedList_1_t3655 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m25582(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3655 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m25582_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25583_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25583(__this, method) (( Object_t* (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25583_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m25584_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m25584(__this, method) (( Object_t * (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m25584_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25585_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25585(__this, method) (( bool (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25585_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m25586_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m25586(__this, method) (( bool (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m25586_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m25587_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m25587(__this, method) (( Object_t * (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m25587_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m25588_gshared (LinkedList_1_t3655 * __this, LinkedListNode_1_t3654 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m25588(__this, ___node, method) (( void (*) (LinkedList_1_t3655 *, LinkedListNode_1_t3654 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m25588_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t3654 * LinkedList_1_AddLast_m25589_gshared (LinkedList_1_t3655 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m25589(__this, ___value, method) (( LinkedListNode_1_t3654 * (*) (LinkedList_1_t3655 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m25589_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m25590_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m25590(__this, method) (( void (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_Clear_m25590_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m25591_gshared (LinkedList_1_t3655 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m25591(__this, ___value, method) (( bool (*) (LinkedList_1_t3655 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m25591_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m25592_gshared (LinkedList_1_t3655 * __this, ObjectU5BU5D_t79* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m25592(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3655 *, ObjectU5BU5D_t79*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m25592_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t3654 * LinkedList_1_Find_m25593_gshared (LinkedList_1_t3655 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m25593(__this, ___value, method) (( LinkedListNode_1_t3654 * (*) (LinkedList_1_t3655 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m25593_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3656  LinkedList_1_GetEnumerator_m25594_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m25594(__this, method) (( Enumerator_t3656  (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_GetEnumerator_m25594_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m25595_gshared (LinkedList_1_t3655 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m25595(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3655 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))LinkedList_1_GetObjectData_m25595_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m25596_gshared (LinkedList_1_t3655 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m25596(__this, ___sender, method) (( void (*) (LinkedList_1_t3655 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m25596_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m25597_gshared (LinkedList_1_t3655 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m25597(__this, ___value, method) (( bool (*) (LinkedList_1_t3655 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m25597_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m25598_gshared (LinkedList_1_t3655 * __this, LinkedListNode_1_t3654 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m25598(__this, ___node, method) (( void (*) (LinkedList_1_t3655 *, LinkedListNode_1_t3654 *, const MethodInfo*))LinkedList_1_Remove_m25598_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m25599_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m25599(__this, method) (( void (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_RemoveLast_m25599_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m25600_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m25600(__this, method) (( int32_t (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_get_Count_m25600_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t3654 * LinkedList_1_get_First_m25601_gshared (LinkedList_1_t3655 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m25601(__this, method) (( LinkedListNode_1_t3654 * (*) (LinkedList_1_t3655 *, const MethodInfo*))LinkedList_1_get_First_m25601_gshared)(__this, method)
