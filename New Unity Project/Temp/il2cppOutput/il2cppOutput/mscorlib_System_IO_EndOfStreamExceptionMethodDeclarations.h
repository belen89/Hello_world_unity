﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.EndOfStreamException
struct EndOfStreamException_t1963;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.EndOfStreamException::.ctor()
extern "C" void EndOfStreamException__ctor_m10706 (EndOfStreamException_t1963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.EndOfStreamException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void EndOfStreamException__ctor_m10707 (EndOfStreamException_t1963 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
