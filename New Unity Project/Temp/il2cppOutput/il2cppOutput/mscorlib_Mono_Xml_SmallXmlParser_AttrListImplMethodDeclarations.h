﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t1907;
// System.String
struct String_t;

// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::.ctor()
extern "C" void AttrListImpl__ctor_m10192 (AttrListImpl_t1907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser/AttrListImpl::get_Length()
extern "C" int32_t AttrListImpl_get_Length_m10193 (AttrListImpl_t1907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetName(System.Int32)
extern "C" String_t* AttrListImpl_GetName_m10194 (AttrListImpl_t1907 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetValue(System.Int32)
extern "C" String_t* AttrListImpl_GetValue_m10195 (AttrListImpl_t1907 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::Clear()
extern "C" void AttrListImpl_Clear_m10196 (AttrListImpl_t1907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::Add(System.String,System.String)
extern "C" void AttrListImpl_Add_m10197 (AttrListImpl_t1907 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;