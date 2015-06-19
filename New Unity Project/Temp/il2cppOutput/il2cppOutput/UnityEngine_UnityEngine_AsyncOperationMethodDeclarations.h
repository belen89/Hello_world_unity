#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t897;
struct AsyncOperation_t897_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m5606 (AsyncOperation_t897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m5607 (AsyncOperation_t897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m5608 (AsyncOperation_t897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t897_marshal(const AsyncOperation_t897& unmarshaled, AsyncOperation_t897_marshaled& marshaled);
void AsyncOperation_t897_marshal_back(const AsyncOperation_t897_marshaled& marshaled, AsyncOperation_t897& unmarshaled);
void AsyncOperation_t897_marshal_cleanup(AsyncOperation_t897_marshaled& marshaled);
