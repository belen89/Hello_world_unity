#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1456;
// System.Net.WebRequest
struct WebRequest_t1450;
// System.Uri
struct Uri_t1035;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m6870 (HttpRequestCreator_t1456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1450 * HttpRequestCreator_Create_m6871 (HttpRequestCreator_t1456 * __this, Uri_t1035 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
