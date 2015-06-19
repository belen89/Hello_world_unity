#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordManager
struct WordManager_t655;
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

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManager::GetActiveWordResults()
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManager::GetNewWords()
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManager::GetLostWords()
// System.Boolean Vuforia.WordManager::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManager::GetTrackableBehaviours()
// System.Void Vuforia.WordManager::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
// System.Void Vuforia.WordManager::.ctor()
extern "C" void WordManager__ctor_m2902 (WordManager_t655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
