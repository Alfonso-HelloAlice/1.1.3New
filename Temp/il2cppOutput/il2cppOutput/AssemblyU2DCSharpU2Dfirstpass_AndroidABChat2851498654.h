﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidABChat
struct  AndroidABChat_t2851498654  : public Il2CppObject
{
public:
	// System.String AndroidABChat::name
	String_t* ___name_0;
	// System.String AndroidABChat::type
	String_t* ___type_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AndroidABChat_t2851498654, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(AndroidABChat_t2851498654, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
