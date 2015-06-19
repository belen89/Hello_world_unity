#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t1067;
struct GcAchievementData_t1067_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1079;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1079 * GcAchievementData_ToAchievement_m6132 (GcAchievementData_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t1067_marshal(const GcAchievementData_t1067& unmarshaled, GcAchievementData_t1067_marshaled& marshaled);
void GcAchievementData_t1067_marshal_back(const GcAchievementData_t1067_marshaled& marshaled, GcAchievementData_t1067& unmarshaled);
void GcAchievementData_t1067_marshal_cleanup(GcAchievementData_t1067_marshaled& marshaled);
