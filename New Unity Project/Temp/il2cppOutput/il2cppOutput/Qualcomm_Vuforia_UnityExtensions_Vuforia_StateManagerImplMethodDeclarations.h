#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.StateManagerImpl
struct StateManagerImpl_t685;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t750;
// Vuforia.WordManager
struct WordManager_t655;
// Vuforia.Trackable
struct Trackable_t532;
// Vuforia.DataSet
struct DataSet_t561;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t15;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t21;
// Vuforia.ImageTarget
struct ImageTarget_t700;
// UnityEngine.GameObject
struct GameObject_t68;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t29;
// Vuforia.Marker
struct Marker_t707;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t627;
// UnityEngine.Transform
struct Transform_t102;
// Vuforia.QCARManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t624;
// Vuforia.QCARManagerImpl/WordData[]
struct WordDataU5BU5D_t625;
// Vuforia.QCARManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t626;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t751;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t33;
// Vuforia.MultiTarget
struct MultiTarget_t708;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t6;
// Vuforia.CylinderTarget
struct CylinderTarget_t559;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t35;
// Vuforia.ObjectTarget
struct ObjectTarget_t535;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetActiveTrackableBehaviours_m3789 (StateManagerImpl_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetTrackableBehaviours_m3790 (StateManagerImpl_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C" WordManager_t655 * StateManagerImpl_GetWordManager_m3791 (StateManagerImpl_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m3792 (StateManagerImpl_t685 * __this, Object_t * ___trackable, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C" void StateManagerImpl_AssociateMarkerBehaviours_m3793 (StateManagerImpl_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m3794 (StateManagerImpl_t685 * __this, DataSet_t561 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C" void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m3795 (StateManagerImpl_t685 * __this, TrackableBehaviour_t15 * ___trackableBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C" void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m3796 (StateManagerImpl_t685 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C" void StateManagerImpl_RemoveDestroyedTrackables_m3797 (StateManagerImpl_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C" void StateManagerImpl_ClearTrackableBehaviours_m3798 (StateManagerImpl_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t21 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m3799 (StateManagerImpl_t685 * __this, Object_t * ___trackable, GameObject_t68 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C" ImageTargetAbstractBehaviour_t21 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m3800 (StateManagerImpl_t685 * __this, Object_t * ___trackable, GameObject_t68 * ___gameObject, DataSet_t561 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C" MarkerAbstractBehaviour_t29 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m3801 (StateManagerImpl_t685 * __this, Object_t * ___trackable, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C" MarkerAbstractBehaviour_t29 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m3802 (StateManagerImpl_t685 * __this, Object_t * ___trackable, GameObject_t68 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C" void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m3803 (StateManagerImpl_t685 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_EnableTrackableBehavioursForTrackable_m3804 (StateManagerImpl_t685 * __this, Object_t * ___trackable, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<System.Int32>&)
extern "C" void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m3805 (StateManagerImpl_t685 * __this, LinkedList_1_t627 ** ___trackableIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPose(UnityEngine.Transform,Vuforia.QCARManagerImpl/TrackableResultData[],System.Int32)
extern "C" void StateManagerImpl_UpdateCameraPose_m3806 (StateManagerImpl_t685 * __this, Transform_t102 * ___arCameraTransform, TrackableResultDataU5BU5D_t624* ___trackableResultDataArray, int32_t ___originTrackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.QCARManagerImpl/TrackableResultData[],System.Int32,System.Int32)
extern "C" void StateManagerImpl_UpdateTrackablePoses_m3807 (StateManagerImpl_t685 * __this, Transform_t102 * ___arCameraTransform, TrackableResultDataU5BU5D_t624* ___trackableResultDataArray, int32_t ___originTrackableID, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C" void StateManagerImpl_UpdateVirtualButtons_m3808 (StateManagerImpl_t685 * __this, int32_t ___numVirtualButtons, IntPtr_t ___virtualButtonPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.QCARManagerImpl/WordData[],Vuforia.QCARManagerImpl/WordResultData[])
extern "C" void StateManagerImpl_UpdateWords_m3809 (StateManagerImpl_t685 * __this, Transform_t102 * ___arCameraTransform, WordDataU5BU5D_t625* ___wordData, WordResultDataU5BU5D_t626* ___wordResultData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateVirtualButtonBehaviours_m3810 (StateManagerImpl_t685 * __this, VirtualButtonAbstractBehaviourU5BU5D_t751* ___vbBehaviours, DataSet_t561 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C" void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m3811 (StateManagerImpl_t685 * __this, DataSet_t561 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C" ImageTargetAbstractBehaviour_t21 * StateManagerImpl_CreateImageTargetBehaviour_m3812 (StateManagerImpl_t685 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C" MultiTargetAbstractBehaviour_t33 * StateManagerImpl_CreateMultiTargetBehaviour_m3813 (StateManagerImpl_t685 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C" CylinderTargetAbstractBehaviour_t6 * StateManagerImpl_CreateCylinderTargetBehaviour_m3814 (StateManagerImpl_t685 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C" ObjectTargetAbstractBehaviour_t35 * StateManagerImpl_CreateObjectTargetBehaviour_m3815 (StateManagerImpl_t685 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C" void StateManagerImpl_InitializeMarkerBehaviour_m3816 (StateManagerImpl_t685 * __this, MarkerAbstractBehaviour_t29 * ___markerBehaviour, Object_t * ___marker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCamera(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.QCARManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionCamera_m3817 (StateManagerImpl_t685 * __this, TrackableBehaviour_t15 * ___trackableBehaviour, Transform_t102 * ___arCameraTransform, PoseData_t609  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.QCARManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionTrackable_m3818 (StateManagerImpl_t685 * __this, TrackableBehaviour_t15 * ___trackableBehaviour, Transform_t102 * ___arCameraTransform, PoseData_t609  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C" void StateManagerImpl__ctor_m3819 (StateManagerImpl_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
