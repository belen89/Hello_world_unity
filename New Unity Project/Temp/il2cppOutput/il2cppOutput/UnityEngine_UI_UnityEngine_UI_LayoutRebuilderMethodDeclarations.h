﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t331;
// UnityEngine.Transform
struct Transform_t102;
// UnityEngine.RectTransform
struct RectTransform_t225;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t376;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t329;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t74;
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder__ctor_m1574 (LayoutRebuilder_t331 * __this, RectTransform_t225 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C" void LayoutRebuilder__cctor_m1575 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::UnityEngine.UI.ICanvasElement.Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void LayoutRebuilder_UnityEngine_UI_ICanvasElement_Rebuild_m1576 (LayoutRebuilder_t331 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ReapplyDrivenProperties_m1577 (Object_t * __this /* static, unused */, RectTransform_t225 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C" Transform_t102 * LayoutRebuilder_get_transform_m1578 (LayoutRebuilder_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C" bool LayoutRebuilder_IsDestroyed_m1579 (LayoutRebuilder_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_StripDisabledBehavioursFromList_m1580 (Object_t * __this /* static, unused */, List_1_t376 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutControl_m1581 (LayoutRebuilder_t331 * __this, RectTransform_t225 * ___rect, UnityAction_1_t329 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutCalculation_m1582 (LayoutRebuilder_t331 * __this, RectTransform_t225 * ___rect, UnityAction_1_t329 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutForRebuild_m1583 (Object_t * __this /* static, unused */, RectTransform_t225 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidLayoutGroup_m1584 (Object_t * __this /* static, unused */, RectTransform_t225 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidController_m1585 (Object_t * __this /* static, unused */, RectTransform_t225 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutRootForRebuild_m1586 (Object_t * __this /* static, unused */, RectTransform_t225 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(UnityEngine.UI.LayoutRebuilder)
extern "C" bool LayoutRebuilder_Equals_m1587 (LayoutRebuilder_t331 * __this, LayoutRebuilder_t331  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C" int32_t LayoutRebuilder_GetHashCode_m1588 (LayoutRebuilder_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C" String_t* LayoutRebuilder_ToString_m1589 (LayoutRebuilder_t331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__9_m1590 (Object_t * __this /* static, unused */, Component_t74 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__A_m1591 (Object_t * __this /* static, unused */, Component_t74 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__B_m1592 (Object_t * __this /* static, unused */, Component_t74 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__C(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__C_m1593 (Object_t * __this /* static, unused */, Component_t74 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__D(UnityEngine.Component)
extern "C" bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m1594 (Object_t * __this /* static, unused */, Component_t74 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;