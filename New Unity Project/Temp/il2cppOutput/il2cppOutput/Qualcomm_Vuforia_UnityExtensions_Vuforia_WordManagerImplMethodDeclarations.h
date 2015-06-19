#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordManagerImpl
struct WordManagerImpl_t662;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t739;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t740;
// Vuforia.Word
struct Word_t664;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t65;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t741;
// UnityEngine.Transform
struct Transform_t102;
// Vuforia.QCARManagerImpl/WordData[]
struct WordDataU5BU5D_t625;
// Vuforia.QCARManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t626;
// System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordData>
struct IEnumerable_1_t742;
// System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordResultData>
struct IEnumerable_1_t743;
// Vuforia.WordResult
struct WordResult_t663;
// Vuforia.WordPrefabCreationMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C" Object_t* WordManagerImpl_GetActiveWordResults_m2903 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C" Object_t* WordManagerImpl_GetNewWords_m2904 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C" Object_t* WordManagerImpl_GetLostWords_m2905 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C" bool WordManagerImpl_TryGetWordBehaviour_m2906 (WordManagerImpl_t662 * __this, Object_t * ___word, WordAbstractBehaviour_t65 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* WordManagerImpl_GetTrackableBehaviours_m2907 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C" void WordManagerImpl_DestroyWordBehaviour_m2908 (WordManagerImpl_t662 * __this, WordAbstractBehaviour_t65 * ___behaviour, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m2909 (WordManagerImpl_t662 * __this, int32_t ___wordPrefabCreationMode, int32_t ___maxInstances, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m2910 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C" void WordManagerImpl_RemoveDestroyedTrackables_m2911 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.QCARManagerImpl/WordData[],Vuforia.QCARManagerImpl/WordResultData[])
extern "C" void WordManagerImpl_UpdateWords_m2912 (WordManagerImpl_t662 * __this, Transform_t102 * ___arCameraTransform, WordDataU5BU5D_t625* ___newWordData, WordResultDataU5BU5D_t626* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C" void WordManagerImpl_SetWordBehavioursToNotFound_m2913 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWords_m2914 (WordManagerImpl_t662 * __this, Object_t* ___newWordData, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWordResultPoses_m2915 (WordManagerImpl_t662 * __this, Transform_t102 * ___arCameraTransform, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C" void WordManagerImpl_AssociateWordResultsWithBehaviours_m2916 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C" void WordManagerImpl_UnregisterLostWords_m2917 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C" void WordManagerImpl_UpdateWordBehaviourPoses_m2918 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C" WordAbstractBehaviour_t65 * WordManagerImpl_AssociateWordBehaviour_m2919 (WordManagerImpl_t662 * __this, WordResult_t663 * ___wordResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t65 * WordManagerImpl_AssociateWordBehaviour_m2920 (WordManagerImpl_t662 * __this, WordResult_t663 * ___wordResult, WordAbstractBehaviour_t65 * ___wordBehaviourTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t65 * WordManagerImpl_InstantiateWordBehaviour_m2921 (Object_t * __this /* static, unused */, WordAbstractBehaviour_t65 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C" WordAbstractBehaviour_t65 * WordManagerImpl_CreateWordBehaviour_m2922 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C" void WordManagerImpl__ctor_m2923 (WordManagerImpl_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
