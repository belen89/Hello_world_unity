#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ObjectTracker
struct ObjectTracker_t541;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t574;
// Vuforia.TargetFinder
struct TargetFinder_t593;
// Vuforia.DataSet
struct DataSet_t561;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t733;

// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::get_ImageTargetBuilder()
// Vuforia.TargetFinder Vuforia.ObjectTracker::get_TargetFinder()
// Vuforia.DataSet Vuforia.ObjectTracker::CreateDataSet()
// System.Boolean Vuforia.ObjectTracker::DestroyDataSet(Vuforia.DataSet,System.Boolean)
// System.Boolean Vuforia.ObjectTracker::ActivateDataSet(Vuforia.DataSet)
// System.Boolean Vuforia.ObjectTracker::DeactivateDataSet(Vuforia.DataSet)
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTracker::GetActiveDataSets()
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTracker::GetDataSets()
// System.Void Vuforia.ObjectTracker::DestroyAllDataSets(System.Boolean)
// System.Boolean Vuforia.ObjectTracker::PersistExtendedTracking(System.Boolean)
// System.Boolean Vuforia.ObjectTracker::ResetExtendedTracking()
// System.Void Vuforia.ObjectTracker::.ctor()
extern "C" void ObjectTracker__ctor_m2729 (ObjectTracker_t541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
