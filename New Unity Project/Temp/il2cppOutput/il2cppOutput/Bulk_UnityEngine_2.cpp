﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C" void WrapperlessIcall__ctor_m6118 (WrapperlessIcall_t1056 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"


// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m6119 (IL2CPPStructAlignmentAttribute_t1057 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

#include "UnityEngine_ArrayTypes.h"
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_42.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_42MethodDeclarations.h"


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t1058_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t1061_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t1059_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t1060_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m6120 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t1058_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1852);
		AttributeHelperEngine_t1061_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1853);
		ExecuteInEditModeU5BU5D_t1059_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1854);
		RequireComponentU5BU5D_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1855);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t1061_StaticFields*)AttributeHelperEngine_t1061_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t1058*)SZArrayNew(DisallowMultipleComponentU5BU5D_t1058_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t1061_StaticFields*)AttributeHelperEngine_t1061_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t1059*)SZArrayNew(ExecuteInEditModeU5BU5D_t1059_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t1061_StaticFields*)AttributeHelperEngine_t1061_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t1060*)SZArrayNew(RequireComponentU5BU5D_t1060_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern const Il2CppType* MonoBehaviour_t10_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t464_0_0_0_var;
extern TypeInfo* Stack_1_t1197_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m6413_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m6414_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m6415_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6121 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t10_0_0_0_var = il2cpp_codegen_type_from_index(77);
		DisallowMultipleComponent_t464_0_0_0_var = il2cpp_codegen_type_from_index(410);
		Stack_1_t1197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1856);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Stack_1__ctor_m6413_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484225);
		Stack_1_Push_m6414_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484226);
		Stack_1_Pop_m6415_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484227);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t1197 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t79* V_2 = {0};
	{
		Stack_1_t1197 * L_0 = (Stack_1_t1197 *)il2cpp_codegen_object_new (Stack_1_t1197_il2cpp_TypeInfo_var);
		Stack_1__ctor_m6413(L_0, /*hidden argument*/Stack_1__ctor_m6413_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t1197 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m6414(L_1, L_2, /*hidden argument*/Stack_1_Push_m6414_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t10_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t1197 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m6415(L_8, /*hidden argument*/Stack_1_Pop_m6415_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t464_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t79* L_12 = (ObjectU5BU5D_t79*)VirtFuncInvoker2< ObjectU5BU5D_t79*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t79* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t1197 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern const Il2CppType* RequireComponent_t116_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t10_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponent_t116_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t848_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t717_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4437_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m6416_MethodInfo_var;
extern "C" TypeU5BU5D_t848* AttributeHelperEngine_GetRequiredComponents_m6122 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t116_0_0_0_var = il2cpp_codegen_type_from_index(53);
		MonoBehaviour_t10_0_0_0_var = il2cpp_codegen_type_from_index(77);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		RequireComponent_t116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		TypeU5BU5D_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1159);
		List_1_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1181);
		List_1__ctor_m4437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484143);
		List_1_ToArray_m6416_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484228);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t717 * V_0 = {0};
	ObjectU5BU5D_t79* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t116 * V_3 = {0};
	TypeU5BU5D_t848* V_4 = {0};
	{
		V_0 = (List_1_t717 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t116_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t79* L_2 = (ObjectU5BU5D_t79*)VirtFuncInvoker2< ObjectU5BU5D_t79*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t79* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t116 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), RequireComponent_t116_il2cpp_TypeInfo_var));
		List_1_t717 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t79* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t10_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t848* L_11 = ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 3));
		RequireComponent_t116 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t848* L_14 = L_11;
		RequireComponent_t116 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t848* L_17 = L_14;
		RequireComponent_t116 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t848* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t717 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		List_1_t717 * L_22 = (List_1_t717 *)il2cpp_codegen_object_new (List_1_t717_il2cpp_TypeInfo_var);
		List_1__ctor_m4437(L_22, /*hidden argument*/List_1__ctor_m4437_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t116 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t717 * L_25 = V_0;
		RequireComponent_t116 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t116 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t717 * L_30 = V_0;
		RequireComponent_t116 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t116 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t717 * L_35 = V_0;
		RequireComponent_t116 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t79* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t10_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t717 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t848*)NULL;
	}

IL_00f7:
	{
		List_1_t717 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t848* L_48 = List_1_ToArray_m6416(L_47, /*hidden argument*/List_1_ToArray_m6416_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t463_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t10_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m6123 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t463_0_0_0_var = il2cpp_codegen_type_from_index(409);
		MonoBehaviour_t10_0_0_0_var = il2cpp_codegen_type_from_index(77);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t79* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t463_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t79* L_2 = (ObjectU5BU5D_t79*)VirtFuncInvoker2< ObjectU5BU5D_t79*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t79* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t10_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern "C" void DisallowMultipleComponent__ctor_m2254 (DisallowMultipleComponent_t464 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern "C" void RequireComponent__ctor_m248 (RequireComponent_t116 * __this, Type_t * ___requiredComponent, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"


// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern "C" void AddComponentMenu__ctor_m2213 (AddComponentMenu_t452 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern "C" void AddComponentMenu__ctor_m2248 (AddComponentMenu_t452 * __this, String_t* ___menuName, int32_t ___order, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"



// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern "C" void ExecuteInEditMode__ctor_m2253 (ExecuteInEditMode_t463 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"



// System.Void UnityEngine.HideInInspector::.ctor()
extern "C" void HideInInspector__ctor_m4487 (HideInInspector_t870 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern "C" void SetupCoroutine__ctor_m6124 (SetupCoroutine_t1062 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m6125 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t79* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t79*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t79* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m158(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t79* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t1198 *, Object_t *, ObjectU5BU5D_t79*, ParameterModifierU5BU5D_t1199*, CultureInfo_t1168 *, StringU5BU5D_t791* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t1198 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t1199*)(ParameterModifierU5BU5D_t1199*)NULL, (CultureInfo_t1168 *)NULL, (StringU5BU5D_t791*)(StringU5BU5D_t791*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m6126 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t79* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t79*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t79* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t79* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t1198 *, Object_t *, ObjectU5BU5D_t79*, ParameterModifierU5BU5D_t1199*, CultureInfo_t1168 *, StringU5BU5D_t791* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t1198 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t1199*)(ParameterModifierU5BU5D_t1199*)NULL, (CultureInfo_t1168 *)NULL, (StringU5BU5D_t791*)(StringU5BU5D_t791*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C" void WritableAttribute__ctor_m6127 (WritableAttribute_t1063 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern "C" void AssemblyIsEditorAssembly__ctor_m6128 (AssemblyIsEditorAssembly_t1064 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern TypeInfo* UserProfile_t1078_il2cpp_TypeInfo_var;
extern "C" UserProfile_t1078 * GcUserProfileData_ToUserProfile_m6129 (GcUserProfileData_t1065 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1712);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t223 * L_3 = (__this->___image_3);
		UserProfile_t1078 * L_4 = (UserProfile_t1078 *)il2cpp_codegen_object_new (UserProfile_t1078_il2cpp_TypeInfo_var);
		UserProfile__ctor_m6147(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m6130 (GcUserProfileData_t1065 * __this, UserProfileU5BU5D_t913** ___array, int32_t ___number, const MethodInfo* method)
{
	{
		UserProfileU5BU5D_t913** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t913**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t913**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t913** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t1078 * L_5 = GcUserProfileData_ToUserProfile_m6129(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t913**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t913**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t913**)L_3)), L_5);
		*((UserProfile_t1078 **)(UserProfile_t1078 **)SZArrayLdElema((*((UserProfileU5BU5D_t913**)L_3)), L_4)) = (UserProfile_t1078 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral474, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern TypeInfo* AchievementDescription_t1080_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t1080 * GcAchievementDescriptionData_ToAchievementDescription_m6131 (GcAchievementDescriptionData_t1066 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t1080_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1709);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t223 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t223 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t223 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t223 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t1080 * L_7 = (AchievementDescription_t1080 *)il2cpp_codegen_object_new (AchievementDescription_t1080_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m6167(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern TypeInfo* Achievement_t1079_il2cpp_TypeInfo_var;
extern "C" Achievement_t1079 * GcAchievementData_ToAchievement_m6132 (GcAchievementData_t1067 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t1079_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1715);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t602  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m6417((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t602  L_5 = DateTime_AddSeconds_m6418((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t1079 * L_6 = (Achievement_t1079 *)il2cpp_codegen_object_new (Achievement_t1079_il2cpp_TypeInfo_var);
		Achievement__ctor_m6156(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t1067_marshal(const GcAchievementData_t1067& unmarshaled, GcAchievementData_t1067_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t1067_marshal_back(const GcAchievementData_t1067_marshaled& marshaled, GcAchievementData_t1067& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t1067_marshal_cleanup(GcAchievementData_t1067_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern TypeInfo* Score_t1081_il2cpp_TypeInfo_var;
extern "C" Score_t1081 * GcScoreData_ToScore_m6133 (GcScoreData_t1068 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t1081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1717);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t602  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m6417((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t602  L_5 = DateTime_AddSeconds_m6418((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t1081 * L_8 = (Score_t1081 *)il2cpp_codegen_object_new (Score_t1081_il2cpp_TypeInfo_var);
		Score__ctor_m6178(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t1068_marshal(const GcScoreData_t1068& unmarshaled, GcScoreData_t1068_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t1068_marshal_back(const GcScoreData_t1068_marshaled& marshaled, GcScoreData_t1068& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t1068_marshal_cleanup(GcScoreData_t1068_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"

// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m6134 (Resolution_t1069 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern "C" void Resolution_set_width_m6135 (Resolution_t1069 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m6136 (Resolution_t1069 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m6137 (Resolution_t1069 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m6138 (Resolution_t1069 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m6139 (Resolution_t1069 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t123_il2cpp_TypeInfo_var;
extern "C" String_t* Resolution_ToString_m6140 (Resolution_t1069 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Int32_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t79* L_0 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t123_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t79* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t123_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t79* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t123_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m5605(NULL /*static, unused*/, (String_t*) &_stringLiteral475, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientationMethodDeclarations.h"



// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterModeMethodDeclarations.h"



// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapModeMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormatMethodDeclarations.h"



// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWriteMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"



// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern TypeInfo* UserProfileU5BU5D_t913_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m6141 (LocalUser_t914 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1711);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfile__ctor_m6146(__this, /*hidden argument*/NULL);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t1077*)((UserProfileU5BU5D_t913*)SZArrayNew(UserProfileU5BU5D_t913_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m6142 (LocalUser_t914 * __this, IUserProfileU5BU5D_t1077* ___friends, const MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t1077* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m6143 (LocalUser_t914 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m6144 (LocalUser_t914 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m6145 (LocalUser_t914 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern TypeInfo* Texture2D_t223_il2cpp_TypeInfo_var;
extern "C" void UserProfile__ctor_m6146 (UserProfile_t1078 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1030);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral476;
		__this->___m_ID_1 = (String_t*) &_stringLiteral270;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t223 * L_0 = (Texture2D_t223 *)il2cpp_codegen_object_new (Texture2D_t223_il2cpp_TypeInfo_var);
		Texture2D__ctor_m4188(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m6147 (UserProfile_t1078 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t223 * ___image, const MethodInfo* method)
{
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t223 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t125_il2cpp_TypeInfo_var;
extern TypeInfo* UserState_t1088_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m6148 (UserProfile_t1078 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Boolean_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		UserState_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1857);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t79* L_0 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t79* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t79* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend() */, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t125_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t79* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UserState_t1088_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m215(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" void UserProfile_SetUserName_m6149 (UserProfile_t1078 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" void UserProfile_SetUserID_m6150 (UserProfile_t1078 * __this, String_t* ___id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" void UserProfile_SetImage_m6151 (UserProfile_t1078 * __this, Texture2D_t223 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t223 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m6152 (UserProfile_t1078 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m6153 (UserProfile_t1078 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m6154 (UserProfile_t1078 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m6155 (UserProfile_t1078 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m6156 (Achievement_t1079 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t602  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t602  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t602_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m6157 (Achievement_t1079 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1029);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t602_il2cpp_TypeInfo_var);
		DateTime_t602  L_2 = ((DateTime_t602_StaticFields*)DateTime_t602_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C" void Achievement__ctor_m6158 (Achievement_t1079 * __this, const MethodInfo* method)
{
	{
		Achievement__ctor_m6157(__this, (String_t*) &_stringLiteral478, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t1170_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t125_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t602_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m6159 (Achievement_t1079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Double_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1807);
		Boolean_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		DateTime_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1029);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t79* L_0 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t79* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t1170_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t79* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t125_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t79* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t125_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t79* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_18 = L_17;
		DateTime_t602  L_19 = (DateTime_t602 )VirtFuncInvoker0< DateTime_t602  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t602  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t602_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m215(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m6160 (Achievement_t1079 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m6161 (Achievement_t1079 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m6162 (Achievement_t1079 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m6163 (Achievement_t1079 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m6164 (Achievement_t1079 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m6165 (Achievement_t1079 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t602  Achievement_get_lastReportedDate_m6166 (Achievement_t1079 * __this, const MethodInfo* method)
{
	{
		DateTime_t602  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m6167 (AchievementDescription_t1080 * __this, String_t* ___id, String_t* ___title, Texture2D_t223 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t223 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t123_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t125_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m6168 (AchievementDescription_t1080 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Int32_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Boolean_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t79* L_0 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t79* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t79* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t79* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t79* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t123_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t79* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral477;
		ObjectU5BU5D_t79* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t125_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m215(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m6169 (AchievementDescription_t1080 * __this, Texture2D_t223 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t223 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m6170 (AchievementDescription_t1080 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m6171 (AchievementDescription_t1080 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m6172 (AchievementDescription_t1080 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m6173 (AchievementDescription_t1080 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m6174 (AchievementDescription_t1080 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m6175 (AchievementDescription_t1080 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m6176 (AchievementDescription_t1080 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern TypeInfo* DateTime_t602_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Score__ctor_m6177 (Score_t1081 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1029);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t602_il2cpp_TypeInfo_var);
		DateTime_t602  L_2 = DateTime_get_Now_m4185(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m6178(__this, L_0, L_1, (String_t*) &_stringLiteral270, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m6178 (Score_t1081 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t602  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t602  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t123_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t1171_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t602_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m6179 (Score_t1081 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Int32_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Int64_t1171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1808);
		DateTime_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1029);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t79* L_0 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral479);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral479;
		ObjectU5BU5D_t79* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t123_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t79* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral480;
		ObjectU5BU5D_t79* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t1171_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t79* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral481);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral481;
		ObjectU5BU5D_t79* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t79* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral482);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral482;
		ObjectU5BU5D_t79* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t79* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral483);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral483;
		ObjectU5BU5D_t79* L_17 = L_16;
		DateTime_t602  L_18 = (__this->___m_Date_0);
		DateTime_t602  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t602_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m215(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m6180 (Score_t1081 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m6181 (Score_t1081 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m6182 (Score_t1081 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m6183 (Score_t1081 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern TypeInfo* Score_t1081_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t1149_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t791_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m6184 (Leaderboard_t917 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t1081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1717);
		ScoreU5BU5D_t1149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1716);
		StringU5BU5D_t791_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1754);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, (String_t*) &_stringLiteral484);
		Range_t1084  L_0 = {0};
		Range__ctor_m6205(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t1084  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t1081 * L_1 = (Score_t1081 *)il2cpp_codegen_object_new (Score_t1081_il2cpp_TypeInfo_var);
		Score__ctor_m6177(L_1, (String_t*) &_stringLiteral484, (((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t1083*)((ScoreU5BU5D_t1149*)SZArrayNew(ScoreU5BU5D_t1149_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral484;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t791*)SZArrayNew(StringU5BU5D_t791_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t125_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t123_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t1162_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t1089_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t1090_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m6185 (Leaderboard_t917 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Boolean_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		Int32_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		UInt32_t1162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1776);
		UserScope_t1089_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1858);
		TimeScope_t1090_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1859);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Range_t1084  V_0 = {0};
	Range_t1084  V_1 = {0};
	{
		ObjectU5BU5D_t79* L_0 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral485);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral485;
		ObjectU5BU5D_t79* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t79* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral486);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral486;
		ObjectU5BU5D_t79* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t79* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral487);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral487;
		ObjectU5BU5D_t79* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t125_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t79* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral488);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral488;
		ObjectU5BU5D_t79* L_12 = L_11;
		Range_t1084  L_13 = (Range_t1084 )VirtFuncInvoker0< Range_t1084  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t123_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t79* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral21;
		ObjectU5BU5D_t79* L_18 = L_17;
		Range_t1084  L_19 = (Range_t1084 )VirtFuncInvoker0< Range_t1084  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t123_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t79* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral489);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral489;
		ObjectU5BU5D_t79* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t1162_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t79* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral490);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral490;
		ObjectU5BU5D_t79* L_29 = L_28;
		IScoreU5BU5D_t1083* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(Int32_t123_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t79* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral491);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral491;
		ObjectU5BU5D_t79* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t1089_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t79* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral492);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral492;
		ObjectU5BU5D_t79* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t1090_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t79* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral493);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral493;
		ObjectU5BU5D_t79* L_44 = L_43;
		StringU5BU5D_t791* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(Int32_t123_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m215(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m6186 (Leaderboard_t917 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m6187 (Leaderboard_t917 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m6188 (Leaderboard_t917 * __this, IScoreU5BU5D_t1083* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t1083* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m6189 (Leaderboard_t917 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t791* Leaderboard_GetUserFilter_m6190 (Leaderboard_t917 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t791* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m6191 (Leaderboard_t917 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m6192 (Leaderboard_t917 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m6193 (Leaderboard_t917 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m6194 (Leaderboard_t917 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t1084  Leaderboard_get_range_m6195 (Leaderboard_t917 * __this, const MethodInfo* method)
{
	{
		Range_t1084  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m6196 (Leaderboard_t917 * __this, Range_t1084  ___value, const MethodInfo* method)
{
	{
		Range_t1084  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m6197 (Leaderboard_t917 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m6198 (Leaderboard_t917 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" void HitInfo_SendMessage_m6199 (HitInfo_t1085 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t68 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m5696(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_Compare_m6200 (Object_t * __this /* static, unused */, HitInfo_t1085  ___lhs, HitInfo_t1085  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t68 * L_0 = ((&___lhs)->___target_0);
		GameObject_t68 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m221(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t103 * L_3 = ((&___lhs)->___camera_1);
		Camera_t103 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m221(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m6201 (Object_t * __this /* static, unused */, HitInfo_t1085  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t68 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m206(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t103 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m206(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct Component_t74;
struct GUILayer_t924;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t74;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m128_gshared (Component_t74 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m128(__this, method) (( Object_t * (*) (Component_t74 *, const MethodInfo*))Component_GetComponent_TisObject_t_m128_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t924_m6419(__this, method) (( GUILayer_t924 * (*) (Component_t74 *, const MethodInfo*))Component_GetComponent_TisObject_t_m128_gshared)(__this, method)


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* HitInfoU5BU5D_t1086_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t1085_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t1087_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m6202 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HitInfoU5BU5D_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1860);
		HitInfo_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1861);
		SendMouseEvents_t1087_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1862);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t1085  V_0 = {0};
	HitInfo_t1085  V_1 = {0};
	HitInfo_t1085  V_2 = {0};
	HitInfo_t1085  V_3 = {0};
	HitInfo_t1085  V_4 = {0};
	HitInfo_t1085  V_5 = {0};
	HitInfo_t1085  V_6 = {0};
	HitInfo_t1085  V_7 = {0};
	HitInfo_t1085  V_8 = {0};
	{
		HitInfoU5BU5D_t1086* L_0 = ((HitInfoU5BU5D_t1086*)SZArrayNew(HitInfoU5BU5D_t1086_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t1085  L_1 = V_0;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t1086* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t1085  L_3 = V_1;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t1086* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t1085  L_5 = V_2;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t1086* L_6 = ((HitInfoU5BU5D_t1086*)SZArrayNew(HitInfoU5BU5D_t1086_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t1085  L_7 = V_3;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t1086* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t1085  L_9 = V_4;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t1086* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t1085  L_11 = V_5;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t1086* L_12 = ((HitInfoU5BU5D_t1086*)SZArrayNew(HitInfoU5BU5D_t1086_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t1085  L_13 = V_6;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t1086* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t1085  L_15 = V_7;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t1086* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t1085  L_17 = V_8;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern TypeInfo* Input_t384_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t1087_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t104_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t1085_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t383_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t924_m6419_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m6203 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		SendMouseEvents_t1087_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1862);
		CameraU5BU5D_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1619);
		HitInfo_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1861);
		Mathf_t383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		Component_GetComponent_TisGUILayer_t924_m6419_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484229);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t110  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t103 * V_3 = {0};
	CameraU5BU5D_t104* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t71  V_6 = {0};
	GUILayer_t924 * V_7 = {0};
	GUIElement_t923 * V_8 = {0};
	Ray_t390  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t68 * V_12 = {0};
	GameObject_t68 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t1085  V_15 = {0};
	Vector3_t110  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t384_il2cpp_TypeInfo_var);
		Vector3_t110  L_0 = Input_get_mousePosition_m1727(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m5629(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		CameraU5BU5D_t104* L_2 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		CameraU5BU5D_t104* L_3 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t104*)SZArrayNew(CameraU5BU5D_t104_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		CameraU5BU5D_t104* L_6 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m5630(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_7 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t1085  L_9 = V_15;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_12 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		CameraU5BU5D_t104* L_14 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t104* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t103 **)(Camera_t103 **)SZArrayLdElema(L_15, L_17));
		Camera_t103 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m221(NULL /*static, unused*/, L_18, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t103 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t754 * L_22 = Camera_get_targetTexture_m4388(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m206(NULL /*static, unused*/, L_22, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t103 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t71  L_25 = Camera_get_pixelRect_m4075(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t110  L_26 = V_0;
		bool L_27 = Rect_Contains_m5446((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t103 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t924 * L_29 = Component_GetComponent_TisGUILayer_t924_m6419(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t924_m6419_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t924 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m113(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t924 * L_32 = V_7;
		Vector3_t110  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t923 * L_34 = GUILayer_HitTest_m5199(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t923 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m113(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_37 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t923 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t68 * L_39 = Component_get_gameObject_m194(L_38, /*hidden argument*/NULL);
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t1086* L_40 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t103 * L_41 = V_3;
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_42 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t68 *)NULL;
		HitInfoU5BU5D_t1086* L_43 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t103 *)NULL;
	}

IL_0141:
	{
		Camera_t103 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m5619(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t103 * L_46 = V_3;
		Vector3_t110  L_47 = V_0;
		NullCheck(L_46);
		Ray_t390  L_48 = Camera_ScreenPointToRay_m1769(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t110  L_49 = Ray_get_direction_m1773((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t383_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m1757(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t103 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m1770(L_53, /*hidden argument*/NULL);
		Camera_t103 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m1771(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t383_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t103 * L_59 = V_3;
		Ray_t390  L_60 = V_9;
		float L_61 = V_11;
		Camera_t103 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m1785(L_62, /*hidden argument*/NULL);
		Camera_t103 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m5619(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t68 * L_66 = Camera_RaycastTry_m5634(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t68 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m206(NULL /*static, unused*/, L_67, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_69 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t68 * L_70 = V_12;
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t1086* L_71 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t103 * L_72 = V_3;
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t103 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m5625(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t103 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m5625(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_77 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t68 *)NULL;
		HitInfoU5BU5D_t1086* L_78 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t103 *)NULL;
	}

IL_0226:
	{
		Camera_t103 * L_79 = V_3;
		Ray_t390  L_80 = V_9;
		float L_81 = V_11;
		Camera_t103 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m1785(L_82, /*hidden argument*/NULL);
		Camera_t103 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m5619(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t68 * L_86 = Camera_RaycastTry2D_m5636(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t68 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m206(NULL /*static, unused*/, L_87, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_89 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t68 * L_90 = V_13;
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t1086* L_91 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t103 * L_92 = V_3;
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t103 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m5625(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t103 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m5625(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_97 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t68 *)NULL;
		HitInfoU5BU5D_t1086* L_98 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t103 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t104* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_103 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m6204(NULL /*static, unused*/, L_102, (*(HitInfo_t1085 *)((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_107 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern TypeInfo* Input_t384_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t1087_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t1085_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents_SendEvents_m6204 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t1085  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		SendMouseEvents_t1087_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1862);
		HitInfo_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1861);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t1085  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t384_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m1725(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m1764(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t1085  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m6201(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_5 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t1085  L_7 = ___hit;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t1086* L_8 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m6199(((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral494, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_11 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m6201(NULL /*static, unused*/, (*(HitInfo_t1085 *)((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t1085  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_15 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m6200(NULL /*static, unused*/, L_14, (*(HitInfo_t1085 *)((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_18 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m6199(((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral495, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_20 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m6199(((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral496, /*hidden argument*/NULL);
		HitInfoU5BU5D_t1086* L_22 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t1085_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t1085  L_24 = V_2;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_25 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m6201(NULL /*static, unused*/, (*(HitInfo_t1085 *)((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_28 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m6199(((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral497, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t1085  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_31 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m6200(NULL /*static, unused*/, L_30, (*(HitInfo_t1085 *)((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t1085  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m6201(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m6199((&___hit), (String_t*) &_stringLiteral498, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_36 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m6201(NULL /*static, unused*/, (*(HitInfo_t1085 *)((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_39 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m6199(((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral499, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t1085  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m6201(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m6199((&___hit), (String_t*) &_stringLiteral500, /*hidden argument*/NULL);
		HitInfo_SendMessage_m6199((&___hit), (String_t*) &_stringLiteral498, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t1087_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1086* L_43 = ((SendMouseEvents_t1087_StaticFields*)SendMouseEvents_t1087_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t1085  L_45 = ___hit;
		*((HitInfo_t1085 *)(HitInfo_t1085 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m6205 (Range_t1084 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"



// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C" void PropertyAttribute__ctor_m6206 (PropertyAttribute_t1091 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern "C" void TooltipAttribute__ctor_m2261 (TooltipAttribute_t468 * __this, String_t* ___tooltip, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m6206(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern "C" void SpaceAttribute__ctor_m2259 (SpaceAttribute_t466 * __this, float ___height, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m6206(__this, /*hidden argument*/NULL);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern "C" void RangeAttribute__ctor_m2252 (RangeAttribute_t462 * __this, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m6206(__this, /*hidden argument*/NULL);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TextAreaAttribute__ctor_m2264 (TextAreaAttribute_t469 * __this, int32_t ___minLines, int32_t ___maxLines, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m6206(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern "C" void SelectionBaseAttribute__ctor_m2260 (SelectionBaseAttribute_t467 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern "C" void SliderState__ctor_m6207 (SliderState_t1092 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m6208 (StackTraceUtility_t1093 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1093_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m6209 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		StackTraceUtility_t1093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t1093_StaticFields*)StackTraceUtility_t1093_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t1093_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m6210 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t1093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1093_il2cpp_TypeInfo_var);
		((StackTraceUtility_t1093_StaticFields*)StackTraceUtility_t1093_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t1143_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1093_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m6211 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t1143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1865);
		StackTraceUtility_t1093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t1143 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t1143 * L_0 = (StackTrace_t1143 *)il2cpp_codegen_object_new (StackTrace_t1143_il2cpp_TypeInfo_var);
		StackTrace__ctor_m6420(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t1143 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1093_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m6216(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m6212 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m6337(L_1, (String_t*) &_stringLiteral501, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m6337(L_3, (String_t*) &_stringLiteral502, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m6337(L_5, (String_t*) &_stringLiteral503, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m6337(L_7, (String_t*) &_stringLiteral504, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m6337(L_9, (String_t*) &_stringLiteral505, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m6337(L_11, (String_t*) &_stringLiteral506, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1093_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m6213 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		StackTraceUtility_t1093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1093_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m6214(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m144(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral292, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t431_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t91_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t381_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t1143_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1093_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m6214 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		Exception_t91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		StringBuilder_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		StackTrace_t1143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1865);
		StackTraceUtility_t1093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t91 * V_0 = {0};
	StringBuilder_t381 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t1143 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t431 * L_1 = (ArgumentException_t431 *)il2cpp_codegen_object_new (ArgumentException_t431_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2130(L_1, (String_t*) &_stringLiteral507, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t91 *)IsInst(L_2, Exception_t91_il2cpp_TypeInfo_var));
		Exception_t91 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t431 * L_4 = (ArgumentException_t431 *)il2cpp_codegen_object_new (ArgumentException_t431_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2130(L_4, (String_t*) &_stringLiteral508, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t91 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t91 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1957(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t381 * L_10 = (StringBuilder_t381 *)il2cpp_codegen_object_new (StringBuilder_t381_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4143(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1957(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t91 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t91 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m144(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral292, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t91 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t91 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t91 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m6326(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m1957(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m125(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral356, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m125(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t91 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t91 * L_41 = (Exception_t91 *)VirtFuncInvoker0< Exception_t91 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m4137(NULL /*static, unused*/, (String_t*) &_stringLiteral509, L_42, (String_t*) &_stringLiteral292, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t91 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t91 * L_46 = (Exception_t91 *)VirtFuncInvoker0< Exception_t91 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t91 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t381 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m125(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral292, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m6383(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t1143 * L_51 = (StackTrace_t1143 *)il2cpp_codegen_object_new (StackTrace_t1143_il2cpp_TypeInfo_var);
		StackTrace__ctor_m6420(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t381 * L_52 = V_1;
		StackTrace_t1143 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1093_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m6216(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m6383(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t381 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_56);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t265_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t381_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1093_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m6215 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		CharU5BU5D_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		StringBuilder_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		StackTraceUtility_t1093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t791* V_0 = {0};
	StringBuilder_t381 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t265* L_3 = ((CharU5BU5D_t265*)SZArrayNew(CharU5BU5D_t265_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t791* L_4 = String_Split_m4438(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1957(L_5, /*hidden argument*/NULL);
		StringBuilder_t381 * L_7 = (StringBuilder_t381 *)il2cpp_codegen_object_new (StringBuilder_t381_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4143(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t791* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t791* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m6326((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t791* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t791* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1957(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1970(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m6337(L_24, (String_t*) &_stringLiteral510, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m6337(L_27, (String_t*) &_stringLiteral511, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t791* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1093_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m6212(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t791* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1093_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m6212(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m6338(L_38, (String_t*) &_stringLiteral512, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1971(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m6338(L_44, (String_t*) &_stringLiteral513, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m6338(L_46, (String_t*) &_stringLiteral514, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m6338(L_48, (String_t*) &_stringLiteral515, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m6337(L_51, (String_t*) &_stringLiteral459, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m4133(L_53, (String_t*) &_stringLiteral460, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m6337(L_55, (String_t*) &_stringLiteral516, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m1993(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m6338(L_59, (String_t*) &_stringLiteral517, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m6421(L_62, (String_t*) &_stringLiteral460, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m1993(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m6422(L_73, (String_t*) &_stringLiteral518, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1093_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t1093_StaticFields*)StackTraceUtility_t1093_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m6422(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m6423(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m6424(L_82, (String_t*) &_stringLiteral519, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m1993(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m1995(L_88, L_89, (String_t*) &_stringLiteral520, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m1957(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m1995(L_91, L_93, (String_t*) &_stringLiteral78, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t381 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m125(NULL /*static, unused*/, L_96, (String_t*) &_stringLiteral292, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m6383(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t791* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t381 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_101);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t381_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1093_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m6216 (Object_t * __this /* static, unused */, StackTrace_t1143 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		StackTraceUtility_t1093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t381 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t1200 * V_2 = {0};
	MethodBase_t1201 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t1192* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t381 * L_0 = (StringBuilder_t381 *)il2cpp_codegen_object_new (StringBuilder_t381_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4143(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t1143 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t1200 * L_3 = (StackFrame_t1200 *)VirtFuncInvoker1< StackFrame_t1200 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t1200 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t1201 * L_5 = (MethodBase_t1201 *)VirtFuncInvoker0< MethodBase_t1201 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t1201 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t1201 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1957(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t381 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m6383(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t381 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m6383(L_17, (String_t*) &_stringLiteral70, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t381 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m6383(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t381 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m6383(L_21, (String_t*) &_stringLiteral458, /*hidden argument*/NULL);
		StringBuilder_t381 * L_22 = V_0;
		MethodBase_t1201 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m6383(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t381 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m6383(L_25, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t1201 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t1192* L_27 = (ParameterInfoU5BU5D_t1192*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1192* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t381 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m6383(L_29, (String_t*) &_stringLiteral522, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t381 * L_30 = V_0;
		ParameterInfoU5BU5D_t1192* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t1193 **)(ParameterInfo_t1193 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1193 **)(ParameterInfo_t1193 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m6383(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t1192* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t381 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m6383(L_39, (String_t*) &_stringLiteral78, /*hidden argument*/NULL);
		StackFrame_t1200 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m1955(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral523, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m1955(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral524, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t381 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m6383(L_49, (String_t*) &_stringLiteral520, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1093_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t1093_StaticFields*)StackTraceUtility_t1093_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m6337(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1093_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t1093_StaticFields*)StackTraceUtility_t1093_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m1957(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m1957(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t1093_StaticFields*)StackTraceUtility_t1093_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m1957(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m1971(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t381 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m6383(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t381 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m6383(L_63, (String_t*) &_stringLiteral458, /*hidden argument*/NULL);
		StringBuilder_t381 * L_64 = V_0;
		StackFrame_t1200 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m6341((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m6383(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t381 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m6383(L_68, (String_t*) &_stringLiteral78, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t381 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m6383(L_69, (String_t*) &_stringLiteral292, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t1143 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t381 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_74);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"


// System.Void UnityEngine.UnityException::.ctor()
extern "C" void UnityException__ctor_m6217 (UnityException_t411 * __this, const MethodInfo* method)
{
	{
		Exception__ctor_m6425(__this, (String_t*) &_stringLiteral525, /*hidden argument*/NULL);
		Exception_set_HResult_m6426(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m6218 (UnityException_t411 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m6425(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m6426(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m6219 (UnityException_t411 * __this, String_t* ___message, Exception_t91 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t91 * L_1 = ___innerException;
		Exception__ctor_m6427(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m6426(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m6220 (UnityException_t411 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1144 * L_0 = ___info;
		StreamingContext_t1145  L_1 = ___context;
		Exception__ctor_m6428(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m6221 (SharedBetweenAnimatorsAttribute_t1094 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m6222 (StateMachineBehaviour_t1095 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m5074(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m6223 (StateMachineBehaviour_t1095 * __this, Animator_t373 * ___animator, AnimatorStateInfo_t996  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m6224 (StateMachineBehaviour_t1095 * __this, Animator_t373 * ___animator, AnimatorStateInfo_t996  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m6225 (StateMachineBehaviour_t1095 * __this, Animator_t373 * ___animator, AnimatorStateInfo_t996  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m6226 (StateMachineBehaviour_t1095 * __this, Animator_t373 * ___animator, AnimatorStateInfo_t996  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m6227 (StateMachineBehaviour_t1095 * __this, Animator_t373 * ___animator, AnimatorStateInfo_t996  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m6228 (StateMachineBehaviour_t1095 * __this, Animator_t373 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m6229 (StateMachineBehaviour_t1095 * __this, Animator_t373 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"


// System.Void UnityEngine.TextEditor::.ctor()
extern TypeInfo* GUIContent_t417_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t935_il2cpp_TypeInfo_var;
extern "C" void TextEditor__ctor_m1961 (TextEditor_t416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		GUIStyle_t935_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1734);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t417 * L_0 = (GUIContent_t417 *)il2cpp_codegen_object_new (GUIContent_t417_il2cpp_TypeInfo_var);
		GUIContent__ctor_m5337(L_0, /*hidden argument*/NULL);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t935_il2cpp_TypeInfo_var);
		GUIStyle_t935 * L_1 = GUIStyle_get_none_m5385(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___style_5 = L_1;
		Vector2_t184  L_2 = Vector2_get_zero_m1706(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m6230 (TextEditor_t416 * __this, const MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m1965 (TextEditor_t416 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m6231(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m6231 (TextEditor_t416 * __this, const MethodInfo* method)
{
	{
		__this->___pos_1 = 0;
		GUIContent_t417 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m1963(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1957(L_1, /*hidden argument*/NULL);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m6230(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_DeleteSelection_m6232 (TextEditor_t416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIContent_t417 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m1963(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1957(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->___pos_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->___selectPos_2);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->___selectPos_2 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->___pos_1);
		int32_t L_10 = (__this->___selectPos_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->___pos_1);
		int32_t L_12 = (__this->___selectPos_2);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t417 * L_13 = (__this->___content_4);
		GUIContent_t417 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m1963(L_14, /*hidden argument*/NULL);
		int32_t L_16 = (__this->___pos_1);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m1971(L_15, 0, L_16, /*hidden argument*/NULL);
		GUIContent_t417 * L_18 = (__this->___content_4);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m1963(L_18, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___selectPos_2);
		GUIContent_t417 * L_21 = (__this->___content_4);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m1963(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m1957(L_22, /*hidden argument*/NULL);
		int32_t L_24 = (__this->___selectPos_2);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m1971(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m125(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIContent_set_text_m5339(L_13, L_26, /*hidden argument*/NULL);
		int32_t L_27 = (__this->___pos_1);
		__this->___selectPos_2 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t417 * L_28 = (__this->___content_4);
		GUIContent_t417 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m1963(L_29, /*hidden argument*/NULL);
		int32_t L_31 = (__this->___selectPos_2);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m1971(L_30, 0, L_31, /*hidden argument*/NULL);
		GUIContent_t417 * L_33 = (__this->___content_4);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m1963(L_33, /*hidden argument*/NULL);
		int32_t L_35 = (__this->___pos_1);
		GUIContent_t417 * L_36 = (__this->___content_4);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m1963(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m1957(L_37, /*hidden argument*/NULL);
		int32_t L_39 = (__this->___pos_1);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m1971(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m125(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/NULL);
		NullCheck(L_28);
		GUIContent_set_text_m5339(L_28, L_41, /*hidden argument*/NULL);
		int32_t L_42 = (__this->___selectPos_2);
		__this->___pos_1 = L_42;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m6230(__this, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m6233 (TextEditor_t416 * __this, String_t* ___replace, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m6232(__this, /*hidden argument*/NULL);
		GUIContent_t417 * L_0 = (__this->___content_4);
		GUIContent_t417 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m1963(L_1, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___pos_1);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m1995(L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIContent_set_text_m5339(L_0, L_5, /*hidden argument*/NULL);
		int32_t L_6 = (__this->___pos_1);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1957(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->___pos_1 = L_9;
		int32_t L_10 = V_0;
		__this->___selectPos_2 = L_10;
		TextEditor_ClearCursorPos_m6230(__this, /*hidden argument*/NULL);
		TextEditor_UpdateScrollOffset_m6234(__this, /*hidden argument*/NULL);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m6234 (TextEditor_t416 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t71  V_1 = {0};
	Vector2_t184  V_2 = {0};
	Vector2_t184  V_3 = {0};
	Vector2_t184 * G_B17_0 = {0};
	Vector2_t184 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t184 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t935 * L_1 = (__this->___style_5);
		Rect_t71 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m1835(L_2, /*hidden argument*/NULL);
		Rect_t71 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m1836(L_4, /*hidden argument*/NULL);
		Rect_t71  L_6 = {0};
		Rect__ctor_m118(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/NULL);
		GUIContent_t417 * L_7 = (__this->___content_4);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t184  L_9 = GUIStyle_GetCursorPixelPosition_m5386(L_1, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t935 * L_10 = (__this->___style_5);
		NullCheck(L_10);
		RectOffset_t327 * L_11 = GUIStyle_get_padding_m5374(L_10, /*hidden argument*/NULL);
		Rect_t71  L_12 = (__this->___position_6);
		NullCheck(L_11);
		Rect_t71  L_13 = RectOffset_Remove_m5361(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		GUIStyle_t935 * L_14 = (__this->___style_5);
		GUIContent_t417 * L_15 = (__this->___content_4);
		NullCheck(L_14);
		Vector2_t184  L_16 = GUIStyle_CalcSize_m5389(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = ((&V_3)->___x_1);
		GUIStyle_t935 * L_18 = (__this->___style_5);
		GUIContent_t417 * L_19 = (__this->___content_4);
		Rect_t71 * L_20 = &(__this->___position_6);
		float L_21 = Rect_get_width_m1835(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m5391(L_18, L_19, L_21, /*hidden argument*/NULL);
		Vector2__ctor_m1713((&V_2), L_17, L_22, /*hidden argument*/NULL);
		float L_23 = ((&V_2)->___x_1);
		Rect_t71 * L_24 = &(__this->___position_6);
		float L_25 = Rect_get_width_m1835(L_24, /*hidden argument*/NULL);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t184 * L_26 = &(__this->___scrollOffset_11);
		L_26->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t184 * L_27 = &(__this->___graphicalCursorPos_13);
		float L_28 = (L_27->___x_1);
		Vector2_t184 * L_29 = &(__this->___scrollOffset_11);
		float L_30 = (L_29->___x_1);
		float L_31 = Rect_get_width_m1835((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t184 * L_32 = &(__this->___scrollOffset_11);
		Vector2_t184 * L_33 = &(__this->___graphicalCursorPos_13);
		float L_34 = (L_33->___x_1);
		float L_35 = Rect_get_width_m1835((&V_1), /*hidden argument*/NULL);
		L_32->___x_1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		Vector2_t184 * L_36 = &(__this->___graphicalCursorPos_13);
		float L_37 = (L_36->___x_1);
		Vector2_t184 * L_38 = &(__this->___scrollOffset_11);
		float L_39 = (L_38->___x_1);
		GUIStyle_t935 * L_40 = (__this->___style_5);
		NullCheck(L_40);
		RectOffset_t327 * L_41 = GUIStyle_get_padding_m5374(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		int32_t L_42 = RectOffset_get_left_m2156(L_41, /*hidden argument*/NULL);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t184 * L_43 = &(__this->___scrollOffset_11);
		Vector2_t184 * L_44 = &(__this->___graphicalCursorPos_13);
		float L_45 = (L_44->___x_1);
		GUIStyle_t935 * L_46 = (__this->___style_5);
		NullCheck(L_46);
		RectOffset_t327 * L_47 = GUIStyle_get_padding_m5374(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = RectOffset_get_left_m2156(L_47, /*hidden argument*/NULL);
		L_43->___x_1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->___y_2);
		float L_50 = Rect_get_height_m1836((&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t184 * L_51 = &(__this->___scrollOffset_11);
		L_51->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t184 * L_52 = &(__this->___graphicalCursorPos_13);
		float L_53 = (L_52->___y_2);
		GUIStyle_t935 * L_54 = (__this->___style_5);
		NullCheck(L_54);
		float L_55 = GUIStyle_get_lineHeight_m5383(L_54, /*hidden argument*/NULL);
		Vector2_t184 * L_56 = &(__this->___scrollOffset_11);
		float L_57 = (L_56->___y_2);
		float L_58 = Rect_get_height_m1836((&V_1), /*hidden argument*/NULL);
		GUIStyle_t935 * L_59 = (__this->___style_5);
		NullCheck(L_59);
		RectOffset_t327 * L_60 = GUIStyle_get_padding_m5374(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m2157(L_60, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t184 * L_62 = &(__this->___scrollOffset_11);
		Vector2_t184 * L_63 = &(__this->___graphicalCursorPos_13);
		float L_64 = (L_63->___y_2);
		float L_65 = Rect_get_height_m1836((&V_1), /*hidden argument*/NULL);
		GUIStyle_t935 * L_66 = (__this->___style_5);
		NullCheck(L_66);
		RectOffset_t327 * L_67 = GUIStyle_get_padding_m5374(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		int32_t L_68 = RectOffset_get_top_m2157(L_67, /*hidden argument*/NULL);
		GUIStyle_t935 * L_69 = (__this->___style_5);
		NullCheck(L_69);
		float L_70 = GUIStyle_get_lineHeight_m5383(L_69, /*hidden argument*/NULL);
		L_62->___y_2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		Vector2_t184 * L_71 = &(__this->___graphicalCursorPos_13);
		float L_72 = (L_71->___y_2);
		Vector2_t184 * L_73 = &(__this->___scrollOffset_11);
		float L_74 = (L_73->___y_2);
		GUIStyle_t935 * L_75 = (__this->___style_5);
		NullCheck(L_75);
		RectOffset_t327 * L_76 = GUIStyle_get_padding_m5374(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		int32_t L_77 = RectOffset_get_top_m2157(L_76, /*hidden argument*/NULL);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t184 * L_78 = &(__this->___scrollOffset_11);
		Vector2_t184 * L_79 = &(__this->___graphicalCursorPos_13);
		float L_80 = (L_79->___y_2);
		GUIStyle_t935 * L_81 = (__this->___style_5);
		NullCheck(L_81);
		RectOffset_t327 * L_82 = GUIStyle_get_padding_m5374(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		int32_t L_83 = RectOffset_get_top_m2157(L_82, /*hidden argument*/NULL);
		L_78->___y_2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		Vector2_t184 * L_84 = &(__this->___scrollOffset_11);
		float L_85 = (L_84->___y_2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->___y_2);
		Vector2_t184 * L_87 = &(__this->___scrollOffset_11);
		float L_88 = (L_87->___y_2);
		float L_89 = Rect_get_height_m1836((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t184 * L_90 = &(__this->___scrollOffset_11);
		float L_91 = ((&V_2)->___y_2);
		float L_92 = Rect_get_height_m1836((&V_1), /*hidden argument*/NULL);
		GUIStyle_t935 * L_93 = (__this->___style_5);
		NullCheck(L_93);
		RectOffset_t327 * L_94 = GUIStyle_get_padding_m5374(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		int32_t L_95 = RectOffset_get_top_m2157(L_94, /*hidden argument*/NULL);
		GUIStyle_t935 * L_96 = (__this->___style_5);
		NullCheck(L_96);
		RectOffset_t327 * L_97 = GUIStyle_get_padding_m5374(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_bottom_m5359(L_97, /*hidden argument*/NULL);
		L_90->___y_2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		Vector2_t184 * L_99 = &(__this->___scrollOffset_11);
		Vector2_t184 * L_100 = &(__this->___scrollOffset_11);
		float L_101 = (L_100->___y_2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t184 * L_102 = &(__this->___scrollOffset_11);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern TypeInfo* GUIUtility_t943_il2cpp_TypeInfo_var;
extern "C" void TextEditor_Copy_m1966 (TextEditor_t416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1725);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t417 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m1963(L_5, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m1971(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t417 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m1963(L_11, /*hidden argument*/NULL);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m1971(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t943_il2cpp_TypeInfo_var);
		GUIUtility_set_systemCopyBuffer_m5269(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m6235 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m6422(L_0, (String_t*) &_stringLiteral362, (String_t*) &_stringLiteral124, /*hidden argument*/NULL);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m6423(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m6423(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern TypeInfo* GUIUtility_t943_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_Paste_m1962 (TextEditor_t416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1725);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t943_il2cpp_TypeInfo_var);
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m5268(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m1969(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_7);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m6235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m6233(__this, L_7, /*hidden argument*/NULL);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern TypeInfo* Color32_t379_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m6236 (TextGenerationSettings_t374 * __this, Color_t62  ___left, Color_t62  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		s_Il2CppMethodIntialized = true;
	}
	Color32_t379  V_0 = {0};
	Color32_t379  V_1 = {0};
	{
		Color_t62  L_0 = ___left;
		Color32_t379  L_1 = Color32_op_Implicit_m1843(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Color_t62  L_2 = ___right;
		Color32_t379  L_3 = Color32_op_Implicit_m1843(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Color32_t379  L_4 = V_0;
		Color32_t379  L_5 = L_4;
		Object_t * L_6 = Box(Color32_t379_il2cpp_TypeInfo_var, &L_5);
		Color32_t379  L_7 = V_1;
		Color32_t379  L_8 = L_7;
		Object_t * L_9 = Box(Color32_t379_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t383_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m6237 (TextGenerationSettings_t374 * __this, Vector2_t184  ___left, Vector2_t184  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t383_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1757(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t383_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1757(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern TypeInfo* Mathf_t383_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m6238 (TextGenerationSettings_t374 * __this, TextGenerationSettings_t374  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t62  L_0 = (__this->___color_1);
		Color_t62  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m6236(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t383_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m1757(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t383_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m1757(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t184  L_35 = (__this->___generationExtents_14);
		Vector2_t184  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m6237(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t184  L_38 = (__this->___pivot_15);
		Vector2_t184  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m6237(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t219 * L_41 = (__this->___font_0);
		Font_t219 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m221(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern TypeInfo* TrackedReference_t1000_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m6239 (TrackedReference_t1000 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1866);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m6241(NULL /*static, unused*/, ((TrackedReference_t1000 *)IsInst(L_0, TrackedReference_t1000_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m6240 (TrackedReference_t1000 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m6429(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m6241 (Object_t * __this /* static, unused */, TrackedReference_t1000 * ___x, TrackedReference_t1000 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t1000 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t1000 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t1000 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m4141(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t1000 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m4141(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t1000 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t1000 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m4141(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t1000_marshal(const TrackedReference_t1000& unmarshaled, TrackedReference_t1000_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t1000_marshal_back(const TrackedReference_t1000_marshaled& marshaled, TrackedReference_t1000& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t1000_marshal_cleanup(TrackedReference_t1000_marshaled& marshaled)
{
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"

// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"


// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m6242 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t69 * ArgumentCache_get_unityObjectArgument_m6243 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	{
		Object_t69 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6244 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m6245 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m6246 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m6247 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m6248 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t792_il2cpp_TypeInfo_var;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m6249 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Regex_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1068);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1999(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t792_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m6430(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral526, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m6430(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral527, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m6430(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral528, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m6250 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m6249(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m6251 (ArgumentCache_t1100 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m6249(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m6252 (BaseInvokableCall_t1101 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t1167_il2cpp_TypeInfo_var;
extern "C" void BaseInvokableCall__ctor_m6253 (BaseInvokableCall_t1101 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1800);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1167 * L_1 = (ArgumentNullException_t1167 *)il2cpp_codegen_object_new (ArgumentNullException_t1167_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6378(L_1, (String_t*) &_stringLiteral529, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t1167 * L_3 = (ArgumentNullException_t1167 *)il2cpp_codegen_object_new (ArgumentNullException_t1167_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6378(L_3, (String_t*) &_stringLiteral530, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" bool BaseInvokableCall_AllowInvoke_m6254 (Object_t * __this /* static, unused */, Delegate_t94 * ___delegate, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Delegate_t94 * L_0 = ___delegate;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m6431(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Delegate_t94 * L_3 = ___delegate;
		NullCheck(L_3);
		Object_t * L_4 = Delegate_get_Target_m6432(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const Il2CppType* UnityAction_t228_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t228_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m6255 (InvokableCall_t1102 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t228_0_0_0_var = il2cpp_codegen_type_from_index(293);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		UnityAction_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m6253(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t228 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(UnityAction_t228_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t94 * L_6 = Delegate_CreateDelegate_m162(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t94 * L_7 = Delegate_Combine_m1855(NULL /*static, unused*/, L_2, ((UnityAction_t228 *)IsInst(L_6, UnityAction_t228_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t228 *)Castclass(L_7, UnityAction_t228_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m6256 (InvokableCall_t1102 * __this, ObjectU5BU5D_t79* ___args, const MethodInfo* method)
{
	{
		UnityAction_t228 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m6254(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t228 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Events.UnityAction::Invoke() */, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m6257 (InvokableCall_t1102 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t228 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m6432(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t228 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m6431(L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t1100_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m6258 (PersistentCall_t1104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t1100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1867);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t1100 * L_0 = (ArgumentCache_t1100 *)il2cpp_codegen_object_new (ArgumentCache_t1100_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m6242(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t69 * PersistentCall_get_target_m6259 (PersistentCall_t1104 * __this, const MethodInfo* method)
{
	{
		Object_t69 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m6260 (PersistentCall_t1104 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m6261 (PersistentCall_t1104 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t1100 * PersistentCall_get_arguments_m6262 (PersistentCall_t1104 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t1100 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m6263 (PersistentCall_t1104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t69 * L_0 = PersistentCall_get_target_m6259(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m206(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m6260(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1999(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern TypeInfo* CachedInvokableCall_1_t1202_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t1204_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t1205_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t1102_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m6433_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m6434_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m6435_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m6436_MethodInfo_var;
extern "C" BaseInvokableCall_t1101 * PersistentCall_GetRuntimeCall_m6264 (PersistentCall_t1104 * __this, UnityEventBase_t1109 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t1202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1868);
		CachedInvokableCall_1_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1869);
		CachedInvokableCall_1_t1204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1870);
		CachedInvokableCall_1_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1871);
		InvokableCall_t1102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1872);
		CachedInvokableCall_1__ctor_m6433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484230);
		CachedInvokableCall_1__ctor_m6434_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484231);
		CachedInvokableCall_1__ctor_m6435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484232);
		CachedInvokableCall_1__ctor_m6436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484233);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t1109 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t1101 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t1109 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m6275(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t1101 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t1109 * L_7 = ___theEvent;
		Object_t69 * L_8 = PersistentCall_get_target_m6259(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t1101 * L_10 = (BaseInvokableCall_t1101 *)VirtFuncInvoker2< BaseInvokableCall_t1101 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t69 * L_11 = PersistentCall_get_target_m6259(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t1100 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t1101 * L_14 = PersistentCall_GetObjectCall_m6265(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t69 * L_15 = PersistentCall_get_target_m6259(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t1100 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m6246(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t1202 * L_19 = (CachedInvokableCall_1_t1202 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1202_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m6433(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m6433_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t69 * L_20 = PersistentCall_get_target_m6259(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t1100 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m6245(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t1203 * L_24 = (CachedInvokableCall_1_t1203 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1203_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m6434(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m6434_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t69 * L_25 = PersistentCall_get_target_m6259(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t1100 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m6247(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t1204 * L_29 = (CachedInvokableCall_1_t1204 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1204_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m6435(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m6435_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t69 * L_30 = PersistentCall_get_target_m6259(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t1100 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m6248(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t1205 * L_34 = (CachedInvokableCall_1_t1205 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1205_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m6436(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m6436_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t69 * L_35 = PersistentCall_get_target_m6259(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t1102 * L_37 = (InvokableCall_t1102 *)il2cpp_codegen_object_new (InvokableCall_t1102_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m6255(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t1101 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const Il2CppType* Object_t69_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t1206_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t848_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t1101_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t1101 * PersistentCall_GetObjectCall_m6265 (Object_t * __this /* static, unused */, Object_t69 * ___target, MethodInfo_t * ___method, ArgumentCache_t1100 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t69_0_0_0_var = il2cpp_codegen_type_from_index(260);
		CachedInvokableCall_1_t1206_0_0_0_var = il2cpp_codegen_type_from_index(1873);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(19);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		TypeU5BU5D_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1159);
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		BaseInvokableCall_t1101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1874);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t1049 * V_3 = {0};
	Object_t69 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Object_t69_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t1100 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6244(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1999(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t1100 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6244(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetType_m6437(NULL /*static, unused*/, L_5, 0, /*hidden argument*/NULL);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Object_t69_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t1206_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t848* L_11 = ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t848* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t848* L_15 = ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Object_t69_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		TypeU5BU5D_t848* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1)) = (Type_t *)L_18;
		TypeU5BU5D_t848* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2)) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t1049 * L_21 = (ConstructorInfo_t1049 *)VirtFuncInvoker1< ConstructorInfo_t1049 *, TypeU5BU5D_t848* >::Invoke(68 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t1100 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t69 * L_23 = ArgumentCache_get_unityObjectArgument_m6243(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t69 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m206(NULL /*static, unused*/, L_24, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t69 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m158(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t69 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t1049 * L_30 = V_3;
		ObjectU5BU5D_t79* L_31 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, 3));
		Object_t69 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)L_32;
		ObjectU5BU5D_t79* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1)) = (Object_t *)L_34;
		ObjectU5BU5D_t79* L_35 = L_33;
		Object_t69 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2)) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m6412(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t1101 *)IsInst(L_37, BaseInvokableCall_t1101_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_55.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_55MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t1105_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m6438_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m6266 (PersistentCallGroup_t1106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1876);
		List_1__ctor_m6438_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484234);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		List_1_t1105 * L_0 = (List_1_t1105 *)il2cpp_codegen_object_new (List_1_t1105_il2cpp_TypeInfo_var);
		List_1__ctor_m6438(L_0, /*hidden argument*/List_1__ctor_m6438_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern TypeInfo* Enumerator_t1207_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t95_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m6439_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m6440_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m6441_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m6267 (PersistentCallGroup_t1106 * __this, InvokableCallList_t1108 * ___invokableList, UnityEventBase_t1109 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1877);
		IDisposable_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		List_1_GetEnumerator_m6439_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484235);
		Enumerator_get_Current_m6440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484236);
		Enumerator_MoveNext_m6441_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484237);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t1104 * V_0 = {0};
	Enumerator_t1207  V_1 = {0};
	BaseInvokableCall_t1101 * V_2 = {0};
	Exception_t91 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t91 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1105 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t1207  L_1 = List_1_GetEnumerator_m6439(L_0, /*hidden argument*/List_1_GetEnumerator_m6439_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t1104 * L_2 = Enumerator_get_Current_m6440((&V_1), /*hidden argument*/Enumerator_get_Current_m6440_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t1104 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m6263(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t1104 * L_5 = V_0;
			UnityEventBase_t1109 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t1101 * L_7 = PersistentCall_GetRuntimeCall_m6264(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t1101 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t1108 * L_9 = ___invokableList;
			BaseInvokableCall_t1101 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m6269(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m6441((&V_1), /*hidden argument*/Enumerator_MoveNext_m6441_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t91 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t1207  L_12 = V_1;
		Enumerator_t1207  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t1207_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t95_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t91 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_56.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_3.h"
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_56MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t1107_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m6442_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m6268 (InvokableCallList_t1108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1878);
		List_1__ctor_m6442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484238);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1107 * L_0 = (List_1_t1107 *)il2cpp_codegen_object_new (List_1_t1107_il2cpp_TypeInfo_var);
		List_1__ctor_m6442(L_0, /*hidden argument*/List_1__ctor_m6442_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t1107 * L_1 = (List_1_t1107 *)il2cpp_codegen_object_new (List_1_t1107_il2cpp_TypeInfo_var);
		List_1__ctor_m6442(L_1, /*hidden argument*/List_1__ctor_m6442_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t1107 * L_2 = (List_1_t1107 *)il2cpp_codegen_object_new (List_1_t1107_il2cpp_TypeInfo_var);
		List_1__ctor_m6442(L_2, /*hidden argument*/List_1__ctor_m6442_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m6269 (InvokableCallList_t1108 * __this, BaseInvokableCall_t1101 * ___call, const MethodInfo* method)
{
	{
		List_1_t1107 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t1101 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t1101 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m6270 (InvokableCallList_t1108 * __this, BaseInvokableCall_t1101 * ___call, const MethodInfo* method)
{
	{
		List_1_t1107 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t1101 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t1101 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* List_1_t1107_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t1208_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m6442_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m6443_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m6444_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m6271 (InvokableCallList_t1108 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1878);
		Predicate_1_t1208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1879);
		List_1__ctor_m6442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484238);
		Predicate_1__ctor_m6443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484239);
		List_1_RemoveAll_m6444_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484240);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1107 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t1107 * L_0 = (List_1_t1107 *)il2cpp_codegen_object_new (List_1_t1107_il2cpp_TypeInfo_var);
		List_1__ctor_m6442(L_0, /*hidden argument*/List_1__ctor_m6442_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t1107 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t1101 * L_3 = (BaseInvokableCall_t1101 *)VirtFuncInvoker1< BaseInvokableCall_t1101 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t1107 * L_7 = V_0;
		List_1_t1107 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t1101 * L_10 = (BaseInvokableCall_t1101 *)VirtFuncInvoker1< BaseInvokableCall_t1101 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t1101 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t1107 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t1107 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t1107 * L_16 = V_0;
		List_1_t1107 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t1208 * L_19 = (Predicate_1_t1208 *)il2cpp_codegen_object_new (Predicate_1_t1208_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m6443(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m6443_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m6444(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m6444_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m6272 (InvokableCallList_t1108 * __this, const MethodInfo* method)
{
	{
		List_1_t1107 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo* List_1_AddRange_m6445_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m6273 (InvokableCallList_t1108 * __this, ObjectU5BU5D_t79* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m6445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484241);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t1107 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t1107 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m6445(L_0, L_1, /*hidden argument*/List_1_AddRange_m6445_MethodInfo_var);
		List_1_t1107 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t1107 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m6445(L_2, L_3, /*hidden argument*/List_1_AddRange_m6445_MethodInfo_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t1107 * L_4 = (__this->___m_ExecutingCalls_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BaseInvokableCall_t1101 * L_6 = (BaseInvokableCall_t1101 *)VirtFuncInvoker1< BaseInvokableCall_t1101 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_4, L_5);
		ObjectU5BU5D_t79* L_7 = ___parameters;
		NullCheck(L_6);
		VirtActionInvoker1< ObjectU5BU5D_t79* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		List_1_t1107 * L_10 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t1107 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t1106_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m6274 (UnityEventBase_t1109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1880);
		PersistentCallGroup_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1881);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m148(__this, /*hidden argument*/NULL);
		InvokableCallList_t1108 * L_0 = (InvokableCallList_t1108 *)il2cpp_codegen_object_new (InvokableCallList_t1108_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m6268(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t1106 * L_1 = (PersistentCallGroup_t1106 *)il2cpp_codegen_object_new (PersistentCallGroup_t1106_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m6266(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m158(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m2332 (UnityEventBase_t1109 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m2333 (UnityEventBase_t1109 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m6277(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m158(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const Il2CppType* Object_t69_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m6275 (UnityEventBase_t1109 * __this, PersistentCall_t1104 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t69_0_0_0_var = il2cpp_codegen_type_from_index(260);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Object_t69_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t1104 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t1100 * L_2 = PersistentCall_get_arguments_m6262(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6244(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m1999(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t1104 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t1100 * L_6 = PersistentCall_get_arguments_m6262(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6244(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetType_m6437(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Object_t69_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t1104 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m6260(L_11, /*hidden argument*/NULL);
		PersistentCall_t1104 * L_13 = ___call;
		NullCheck(L_13);
		Object_t69 * L_14 = PersistentCall_get_target_m6259(L_13, /*hidden argument*/NULL);
		PersistentCall_t1104 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m6261(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m6276(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const Il2CppType* Single_t105_0_0_0_var;
extern const Il2CppType* Int32_t123_0_0_0_var;
extern const Il2CppType* Boolean_t125_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t69_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t848_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m6276 (UnityEventBase_t1109 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t105_0_0_0_var = il2cpp_codegen_type_from_index(47);
		Int32_t123_0_0_0_var = il2cpp_codegen_type_from_index(72);
		Boolean_t125_0_0_0_var = il2cpp_codegen_type_from_index(73);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(2);
		Object_t69_0_0_0_var = il2cpp_codegen_type_from_index(260);
		TypeU5BU5D_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1159);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t848* G_B10_2 = {0};
	TypeU5BU5D_t848* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t848* G_B9_2 = {0};
	TypeU5BU5D_t848* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m6282(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t848* L_10 = ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Single_t105_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m6282(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t848* L_15 = ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Int32_t123_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m6282(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t848* L_20 = ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Boolean_t125_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0)) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m6282(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t848* L_25 = ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0)) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m6282(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t848* L_30 = ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Object_t69_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m6282(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m6277 (UnityEventBase_t1109 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t1108 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m6272(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m6278 (UnityEventBase_t1109 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t1106 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t1108 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m6267(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m6279 (UnityEventBase_t1109 * __this, BaseInvokableCall_t1101 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t1108 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t1101 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m6270(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m6280 (UnityEventBase_t1109 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t1108 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m6271(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m6281 (UnityEventBase_t1109 * __this, ObjectU5BU5D_t79* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m6278(__this, /*hidden argument*/NULL);
		InvokableCallList_t1108 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t79* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m6273(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityEventBase_ToString_m2331 (UnityEventBase_t1109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m325(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m158(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m144(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral124, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m6282 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t848* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t1192* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t1193 * V_5 = {0};
	ParameterInfoU5BU5D_t1192* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m158(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t848* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t1198 *, TypeU5BU5D_t848*, ParameterModifierU5BU5D_t1199* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t1198 *)NULL, L_4, (ParameterModifierU5BU5D_t1199*)(ParameterModifierU5BU5D_t1199*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t1192* L_8 = (ParameterInfoU5BU5D_t1192*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1192* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t1192* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t1192* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t1193 **)(ParameterInfo_t1193 **)SZArrayLdElema(L_10, L_12));
		TypeU5BU5D_t848* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15));
		ParameterInfo_t1193 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t1192* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m111(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t79_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1797 (UnityEvent_t209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t79*)SZArrayNew(ObjectU5BU5D_t79_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m6274(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t848_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m2356 (UnityEvent_t209 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1159);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m6282(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t848*)SZArrayNew(TypeU5BU5D_t848_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* InvokableCall_t1102_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t1101 * UnityEvent_GetDelegate_m2357 (UnityEvent_t209 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t1102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1872);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t1102 * L_2 = (InvokableCall_t1102 *)il2cpp_codegen_object_new (InvokableCall_t1102_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m6255(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m1800 (UnityEvent_t209 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t79* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m6281(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern "C" void UserAuthorizationDialog__ctor_m6283 (UserAuthorizationDialog_t1110 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m110(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern "C" void UserAuthorizationDialog_Start_m6284 (UserAuthorizationDialog_t1110 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern "C" void UserAuthorizationDialog_OnGUI_m6285 (UserAuthorizationDialog_t1110 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m6286 (UserAuthorizationDialog_t1110 * __this, int32_t ___windowID, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m6287 (DefaultValueAttribute_t1111 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m6288 (DefaultValueAttribute_t1111 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m6289 (DefaultValueAttribute_t1111 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t1111 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t1111 *)IsInst(L_0, DefaultValueAttribute_t1111_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t1111 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t1111 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m6288(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t1111 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m6288(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m6290 (DefaultValueAttribute_t1111 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m5053(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m6291 (ExcludeFromDocsAttribute_t1112 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m2214 (FormerlySerializedAsAttribute_t453 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t1113_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m6292 (TypeInferenceRuleAttribute_t1114 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t1113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1883);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t1113_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m6293(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m6293 (TypeInferenceRuleAttribute_t1114 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m4053(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m6294 (TypeInferenceRuleAttribute_t1114 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m6295 (GenericStack_t930 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m6446(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m1959 (UnityAction_t228 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m6296 (UnityAction_t228 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m6296((UnityAction_t228 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t228(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m6297 (UnityAction_t228 * __this, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m6298 (UnityAction_t228 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
