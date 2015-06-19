#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct InternalEnumerator_1_t3570;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m24592_gshared (InternalEnumerator_1_t3570 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m24592(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3570 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m24592_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m24593_gshared (InternalEnumerator_1_t3570 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m24593(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3570 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m24593_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m24594_gshared (InternalEnumerator_1_t3570 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m24594(__this, method) (( void (*) (InternalEnumerator_1_t3570 *, const MethodInfo*))InternalEnumerator_1_Dispose_m24594_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m24595_gshared (InternalEnumerator_1_t3570 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m24595(__this, method) (( bool (*) (InternalEnumerator_1_t3570 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m24595_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current()
extern "C" KeyValuePair_2_t3569  InternalEnumerator_1_get_Current_m24596_gshared (InternalEnumerator_1_t3570 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m24596(__this, method) (( KeyValuePair_2_t3569  (*) (InternalEnumerator_1_t3570 *, const MethodInfo*))InternalEnumerator_1_get_Current_m24596_gshared)(__this, method)
