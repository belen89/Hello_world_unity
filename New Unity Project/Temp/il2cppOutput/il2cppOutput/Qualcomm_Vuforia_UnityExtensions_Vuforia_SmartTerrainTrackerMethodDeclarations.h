#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SmartTerrainTrackerAbstractBehaviour
struct SmartTerrainTrackerAbstractBehaviour_t43;
// System.Action
struct Action_t90;

// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::Awake()
extern "C" void SmartTerrainTrackerAbstractBehaviour_Awake_m2565 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnEnable()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnEnable_m2566 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnDisable()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnDisable_m2567 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnDestroy()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnDestroy_m2568 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::RegisterTrackerStartedCallback(System.Action)
extern "C" void SmartTerrainTrackerAbstractBehaviour_RegisterTrackerStartedCallback_m2569 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::UnregisterTrackerStartedCallback(System.Action)
extern "C" void SmartTerrainTrackerAbstractBehaviour_UnregisterTrackerStartedCallback_m2570 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::StartSmartTerrainTracker()
extern "C" void SmartTerrainTrackerAbstractBehaviour_StartSmartTerrainTracker_m2571 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::StopSmartTerrainTracker()
extern "C" void SmartTerrainTrackerAbstractBehaviour_StopSmartTerrainTracker_m2572 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::InitSmartTerrainTracker()
extern "C" void SmartTerrainTrackerAbstractBehaviour_InitSmartTerrainTracker_m2573 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnQCARInitialized()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnQCARInitialized_m2574 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnQCARStarted()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnQCARStarted_m2575 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnPause(System.Boolean)
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnPause_m2576 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::Vuforia.IEditorSmartTerrainTrackerBehaviour.SetAutomaticStart(System.Boolean)
extern "C" void SmartTerrainTrackerAbstractBehaviour_Vuforia_IEditorSmartTerrainTrackerBehaviour_SetAutomaticStart_m405 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, bool ___autoStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::Vuforia.IEditorSmartTerrainTrackerBehaviour.get_AutomaticStart()
extern "C" bool SmartTerrainTrackerAbstractBehaviour_Vuforia_IEditorSmartTerrainTrackerBehaviour_get_AutomaticStart_m406 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::Vuforia.IEditorSmartTerrainTrackerBehaviour.SetSmartTerrainScaleToMM(System.Single)
extern "C" void SmartTerrainTrackerAbstractBehaviour_Vuforia_IEditorSmartTerrainTrackerBehaviour_SetSmartTerrainScaleToMM_m407 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, float ___scaleToMM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SmartTerrainTrackerAbstractBehaviour::Vuforia.IEditorSmartTerrainTrackerBehaviour.get_ScaleToMM()
extern "C" float SmartTerrainTrackerAbstractBehaviour_Vuforia_IEditorSmartTerrainTrackerBehaviour_get_ScaleToMM_m408 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::.ctor()
extern "C" void SmartTerrainTrackerAbstractBehaviour__ctor_m197 (SmartTerrainTrackerAbstractBehaviour_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
