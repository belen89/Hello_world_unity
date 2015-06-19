﻿#pragma once
#include <stdint.h>
// UnityEngine.UI.FontData
struct FontData_t220;
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t269;
// UnityEngine.Material
struct Material_t60;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Text
struct  Text_t266  : public MaskableGraphic_t248
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t220 * ___m_FontData_23;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_24;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t269 * ___m_TextCache_25;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t269 * ___m_TextCacheForLayout_26;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_28;
};
struct Text_t266_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t60 * ___s_DefaultText_27;
};
