#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t1857;
struct PreviousInfo_t1857_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m9776 (PreviousInfo_t1857 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t1857_marshal(const PreviousInfo_t1857& unmarshaled, PreviousInfo_t1857_marshaled& marshaled);
void PreviousInfo_t1857_marshal_back(const PreviousInfo_t1857_marshaled& marshaled, PreviousInfo_t1857& unmarshaled);
void PreviousInfo_t1857_marshal_cleanup(PreviousInfo_t1857_marshaled& marshaled);
