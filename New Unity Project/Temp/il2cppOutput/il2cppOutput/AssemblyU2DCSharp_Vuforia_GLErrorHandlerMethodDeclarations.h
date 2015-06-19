﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.GLErrorHandler
struct GLErrorHandler_t17;
// System.String
struct String_t;

// System.Void Vuforia.GLErrorHandler::.ctor()
extern "C" void GLErrorHandler__ctor_m23 (GLErrorHandler_t17 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::.cctor()
extern "C" void GLErrorHandler__cctor_m24 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::SetError(System.String)
extern "C" void GLErrorHandler_SetError_m25 (Object_t * __this /* static, unused */, String_t* ___errorText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::OnGUI()
extern "C" void GLErrorHandler_OnGUI_m26 (GLErrorHandler_t17 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::DrawWindowContent(System.Int32)
extern "C" void GLErrorHandler_DrawWindowContent_m27 (GLErrorHandler_t17 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
