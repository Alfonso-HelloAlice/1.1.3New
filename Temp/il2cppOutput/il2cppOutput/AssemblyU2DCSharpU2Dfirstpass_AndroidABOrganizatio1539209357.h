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

// AndroidABOrganization
struct  AndroidABOrganization_t1539209357  : public Il2CppObject
{
public:
	// System.String AndroidABOrganization::name
	String_t* ___name_0;
	// System.String AndroidABOrganization::title
	String_t* ___title_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AndroidABOrganization_t1539209357, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(AndroidABOrganization_t1539209357, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier(&___title_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
