#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
struct CharacterInfo_t1005;
struct CharacterInfo_t1005_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m5828 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m5829 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m5830 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m5831 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m5832 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m5833 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m5834 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m5835 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t184  CharacterInfo_get_uvBottomLeftUnFlipped_m5836 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t184  CharacterInfo_get_uvBottomRightUnFlipped_m5837 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t184  CharacterInfo_get_uvTopRightUnFlipped_m5838 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t184  CharacterInfo_get_uvTopLeftUnFlipped_m5839 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t184  CharacterInfo_get_uvBottomLeft_m5840 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t184  CharacterInfo_get_uvBottomRight_m5841 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t184  CharacterInfo_get_uvTopRight_m5842 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t184  CharacterInfo_get_uvTopLeft_m5843 (CharacterInfo_t1005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void CharacterInfo_t1005_marshal(const CharacterInfo_t1005& unmarshaled, CharacterInfo_t1005_marshaled& marshaled);
void CharacterInfo_t1005_marshal_back(const CharacterInfo_t1005_marshaled& marshaled, CharacterInfo_t1005& unmarshaled);
void CharacterInfo_t1005_marshal_cleanup(CharacterInfo_t1005_marshaled& marshaled);
