﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutUtility
struct LayoutUtility_t333;
// UnityEngine.RectTransform
struct RectTransform_t225;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t332;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t377;

// System.Single UnityEngine.UI.LayoutUtility::GetMinSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetMinSize_m1595 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetPreferredSize_m1596 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetFlexibleSize_m1597 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetMinWidth_m1598 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetPreferredWidth_m1599 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetFlexibleWidth_m1600 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetMinHeight_m1601 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetPreferredHeight_m1602 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetFlexibleHeight_m1603 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single)
extern "C" float LayoutUtility_GetLayoutProperty_m1604 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, Func_2_t332 * ___property, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single,UnityEngine.UI.ILayoutElement&)
extern "C" float LayoutUtility_GetLayoutProperty_m1605 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, Func_2_t332 * ___property, float ___defaultValue, Object_t ** ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinWidth>m__E(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetMinWidthU3Em__E_m1606 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__F(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__F_m1607 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__10(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__10_m1608 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleWidth>m__11(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetFlexibleWidthU3Em__11_m1609 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinHeight>m__12(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetMinHeightU3Em__12_m1610 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__13(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__13_m1611 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__14(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__14_m1612 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleHeight>m__15(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetFlexibleHeightU3Em__15_m1613 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
