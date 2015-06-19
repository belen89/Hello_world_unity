#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t2155;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2151;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2144;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m11851 (FixupRecord_t2155 * __this, ObjectRecord_t2151 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t2151 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m11852 (FixupRecord_t2155 * __this, ObjectManager_t2144 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
