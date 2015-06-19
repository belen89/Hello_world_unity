#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t210;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t208;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t188;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t147;
// System.Collections.IEnumerator
struct IEnumerator_t368;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m772 (Button_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t208 * Button_get_onClick_m773 (Button_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m774 (Button_t210 * __this, ButtonClickedEvent_t208 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m775 (Button_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m776 (Button_t210 * __this, PointerEventData_t188 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m777 (Button_t210 * __this, BaseEventData_t147 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m778 (Button_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
