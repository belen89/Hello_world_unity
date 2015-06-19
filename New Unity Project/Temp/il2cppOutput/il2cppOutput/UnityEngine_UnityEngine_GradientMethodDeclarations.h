#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t927;
struct Gradient_t927_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m5203 (Gradient_t927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m5204 (Gradient_t927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m5205 (Gradient_t927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m5206 (Gradient_t927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t927_marshal(const Gradient_t927& unmarshaled, Gradient_t927_marshaled& marshaled);
void Gradient_t927_marshal_back(const Gradient_t927_marshaled& marshaled, Gradient_t927& unmarshaled);
void Gradient_t927_marshal_cleanup(Gradient_t927_marshaled& marshaled);
