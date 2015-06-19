#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>
struct Enumerator_t3214;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t627;

// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>)
extern "C" void Enumerator__ctor_m19156_gshared (Enumerator_t3214 * __this, LinkedList_1_t627 * ___parent, const MethodInfo* method);
#define Enumerator__ctor_m19156(__this, ___parent, method) (( void (*) (Enumerator_t3214 *, LinkedList_1_t627 *, const MethodInfo*))Enumerator__ctor_m19156_gshared)(__this, ___parent, method)
// System.Object System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19157_gshared (Enumerator_t3214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19157(__this, method) (( Object_t * (*) (Enumerator_t3214 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19157_gshared)(__this, method)
// T System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m19158_gshared (Enumerator_t3214 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19158(__this, method) (( int32_t (*) (Enumerator_t3214 *, const MethodInfo*))Enumerator_get_Current_m19158_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19159_gshared (Enumerator_t3214 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19159(__this, method) (( bool (*) (Enumerator_t3214 *, const MethodInfo*))Enumerator_MoveNext_m19159_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m19160_gshared (Enumerator_t3214 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19160(__this, method) (( void (*) (Enumerator_t3214 *, const MethodInfo*))Enumerator_Dispose_m19160_gshared)(__this, method)
