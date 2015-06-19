#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARUnity
struct QCARUnity_t711;
// Vuforia.QCARUnity/QCARHint
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_QCARHint.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Void Vuforia.QCARUnity::Deinit()
extern "C" void QCARUnity_Deinit_m153 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnity::IsRendererDirty()
extern "C" bool QCARUnity_IsRendererDirty_m3894 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnity::SetHint(Vuforia.QCARUnity/QCARHint,System.Int32)
extern "C" bool QCARUnity_SetHint_m3895 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnity::SetHint(System.Int32,System.Int32)
extern "C" bool QCARUnity_SetHint_m3896 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.QCARUnity::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t112  QCARUnity_GetProjectionGL_m3897 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnity::OnPause()
extern "C" void QCARUnity_OnPause_m151 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnity::OnResume()
extern "C" void QCARUnity_OnResume_m152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnity::SetRendererDirty()
extern "C" void QCARUnity_SetRendererDirty_m3898 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
