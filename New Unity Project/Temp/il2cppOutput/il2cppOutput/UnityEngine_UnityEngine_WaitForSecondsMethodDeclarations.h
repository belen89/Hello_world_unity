#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t413;
struct WaitForSeconds_t413_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m1933 (WaitForSeconds_t413 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t413_marshal(const WaitForSeconds_t413& unmarshaled, WaitForSeconds_t413_marshaled& marshaled);
void WaitForSeconds_t413_marshal_back(const WaitForSeconds_t413_marshaled& marshaled, WaitForSeconds_t413& unmarshaled);
void WaitForSeconds_t413_marshal_cleanup(WaitForSeconds_t413_marshaled& marshaled);
