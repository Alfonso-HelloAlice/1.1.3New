﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Common.Pattern.NonMonoSingleton`1<System.Object>
struct  NonMonoSingleton_1_t461172036  : public Il2CppObject
{
public:

public:
};

struct NonMonoSingleton_1_t461172036_StaticFields
{
public:
	// T SA.Common.Pattern.NonMonoSingleton`1::_Instance
	Il2CppObject * ____Instance_0;

public:
	inline static int32_t get_offset_of__Instance_0() { return static_cast<int32_t>(offsetof(NonMonoSingleton_1_t461172036_StaticFields, ____Instance_0)); }
	inline Il2CppObject * get__Instance_0() const { return ____Instance_0; }
	inline Il2CppObject ** get_address_of__Instance_0() { return &____Instance_0; }
	inline void set__Instance_0(Il2CppObject * value)
	{
		____Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
