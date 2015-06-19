#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TextureRenderer
struct TextureRenderer_t695;
// UnityEngine.Texture
struct Texture_t276;
// UnityEngine.RenderTexture
struct RenderTexture_t754;
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"

// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C" int32_t TextureRenderer_get_Width_m3841 (TextureRenderer_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C" int32_t TextureRenderer_get_Height_m3842 (TextureRenderer_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.QCARRenderer/Vec2I)
extern "C" void TextureRenderer__ctor_m3843 (TextureRenderer_t695 * __this, Texture_t276 * ___textureToRender, int32_t ___renderTextureLayer, Vec2I_t631  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C" RenderTexture_t754 * TextureRenderer_Render_m3844 (TextureRenderer_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C" void TextureRenderer_Destroy_m3845 (TextureRenderer_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
