#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t905;
struct YieldInstruction_t905_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m5725 (YieldInstruction_t905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t905_marshal(const YieldInstruction_t905& unmarshaled, YieldInstruction_t905_marshaled& marshaled);
void YieldInstruction_t905_marshal_back(const YieldInstruction_t905_marshaled& marshaled, YieldInstruction_t905& unmarshaled);
void YieldInstruction_t905_marshal_cleanup(YieldInstruction_t905_marshaled& marshaled);
