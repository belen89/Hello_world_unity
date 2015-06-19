#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3654;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3655;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m25602_gshared (LinkedListNode_1_t3654 * __this, LinkedList_1_t3655 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m25602(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t3654 *, LinkedList_1_t3655 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m25602_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m25603_gshared (LinkedListNode_1_t3654 * __this, LinkedList_1_t3655 * ___list, Object_t * ___value, LinkedListNode_1_t3654 * ___previousNode, LinkedListNode_1_t3654 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m25603(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t3654 *, LinkedList_1_t3655 *, Object_t *, LinkedListNode_1_t3654 *, LinkedListNode_1_t3654 *, const MethodInfo*))LinkedListNode_1__ctor_m25603_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m25604_gshared (LinkedListNode_1_t3654 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m25604(__this, method) (( void (*) (LinkedListNode_1_t3654 *, const MethodInfo*))LinkedListNode_1_Detach_m25604_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t3655 * LinkedListNode_1_get_List_m25605_gshared (LinkedListNode_1_t3654 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m25605(__this, method) (( LinkedList_1_t3655 * (*) (LinkedListNode_1_t3654 *, const MethodInfo*))LinkedListNode_1_get_List_m25605_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t3654 * LinkedListNode_1_get_Next_m25606_gshared (LinkedListNode_1_t3654 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m25606(__this, method) (( LinkedListNode_1_t3654 * (*) (LinkedListNode_1_t3654 *, const MethodInfo*))LinkedListNode_1_get_Next_m25606_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m25607_gshared (LinkedListNode_1_t3654 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m25607(__this, method) (( Object_t * (*) (LinkedListNode_1_t3654 *, const MethodInfo*))LinkedListNode_1_get_Value_m25607_gshared)(__this, method)
