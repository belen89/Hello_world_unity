#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARUnityImpl
struct QCARUnityImpl_t635;
// Vuforia.QCARUnity/QCARHint
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_QCARHint.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Void Vuforia.QCARUnityImpl::Deinit()
extern "C" void QCARUnityImpl_Deinit_m2828 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnityImpl::IsRendererDirty()
extern "C" bool QCARUnityImpl_IsRendererDirty_m2829 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnityImpl::SetHint(Vuforia.QCARUnity/QCARHint,System.Int32)
extern "C" bool QCARUnityImpl_SetHint_m2830 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnityImpl::SetHint(System.Int32,System.Int32)
extern "C" bool QCARUnityImpl_SetHint_m2831 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.QCARUnityImpl::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t112  QCARUnityImpl_GetProjectionGL_m2832 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::SetApplicationEnvironment()
extern "C" void QCARUnityImpl_SetApplicationEnvironment_m2833 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::OnPause()
extern "C" void QCARUnityImpl_OnPause_m2834 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::OnResume()
extern "C" void QCARUnityImpl_OnResume_m2835 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::SetRendererDirty()
extern "C" void QCARUnityImpl_SetRendererDirty_m2836 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::.cctor()
extern "C" void QCARUnityImpl__cctor_m2837 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
