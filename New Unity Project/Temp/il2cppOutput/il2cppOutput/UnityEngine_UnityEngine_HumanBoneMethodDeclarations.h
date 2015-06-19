﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t1004;
struct HumanBone_t1004_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m5824 (HumanBone_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m5825 (HumanBone_t1004 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m5826 (HumanBone_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m5827 (HumanBone_t1004 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t1004_marshal(const HumanBone_t1004& unmarshaled, HumanBone_t1004_marshaled& marshaled);
void HumanBone_t1004_marshal_back(const HumanBone_t1004_marshaled& marshaled, HumanBone_t1004& unmarshaled);
void HumanBone_t1004_marshal_cleanup(HumanBone_t1004_marshaled& marshaled);
