#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t271;
struct Coroutine_t271_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5071 (Coroutine_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5072 (Coroutine_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5073 (Coroutine_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t271_marshal(const Coroutine_t271& unmarshaled, Coroutine_t271_marshaled& marshaled);
void Coroutine_t271_marshal_back(const Coroutine_t271_marshaled& marshaled, Coroutine_t271& unmarshaled);
void Coroutine_t271_marshal_cleanup(Coroutine_t271_marshaled& marshaled);
