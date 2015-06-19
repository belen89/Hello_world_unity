#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.NullWebCamTexAdaptor
struct NullWebCamTexAdaptor_t601;
// UnityEngine.Texture
struct Texture_t276;
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"

// System.Boolean Vuforia.NullWebCamTexAdaptor::get_DidUpdateThisFrame()
extern "C" bool NullWebCamTexAdaptor_get_DidUpdateThisFrame_m2766 (NullWebCamTexAdaptor_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullWebCamTexAdaptor::get_IsPlaying()
extern "C" bool NullWebCamTexAdaptor_get_IsPlaying_m2767 (NullWebCamTexAdaptor_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.NullWebCamTexAdaptor::get_Texture()
extern "C" Texture_t276 * NullWebCamTexAdaptor_get_Texture_m2768 (NullWebCamTexAdaptor_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullWebCamTexAdaptor::.ctor(System.Int32,Vuforia.QCARRenderer/Vec2I)
extern "C" void NullWebCamTexAdaptor__ctor_m2769 (NullWebCamTexAdaptor_t601 * __this, int32_t ___requestedFPS, Vec2I_t631  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullWebCamTexAdaptor::Play()
extern "C" void NullWebCamTexAdaptor_Play_m2770 (NullWebCamTexAdaptor_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullWebCamTexAdaptor::Stop()
extern "C" void NullWebCamTexAdaptor_Stop_m2771 (NullWebCamTexAdaptor_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
