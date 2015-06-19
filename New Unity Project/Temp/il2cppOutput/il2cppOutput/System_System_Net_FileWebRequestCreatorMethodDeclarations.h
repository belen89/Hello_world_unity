#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1451;
// System.Net.WebRequest
struct WebRequest_t1450;
// System.Uri
struct Uri_t1035;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m6862 (FileWebRequestCreator_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1450 * FileWebRequestCreator_Create_m6863 (FileWebRequestCreator_t1451 * __this, Uri_t1035 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
