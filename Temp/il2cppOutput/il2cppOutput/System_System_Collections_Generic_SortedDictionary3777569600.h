﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "System_System_Collections_Generic_RBTree_NodeEnumer648190100.h"

// UnityEditor.XCodeEditor.PBXGroup
struct PBXGroup_t3369372711;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<System.String,UnityEditor.XCodeEditor.PBXGroup>
struct  Enumerator_t3777569600 
{
public:
	// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator::host
	NodeEnumerator_t648190100  ___host_0;
	// TValue System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator::current
	PBXGroup_t3369372711 * ___current_1;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(Enumerator_t3777569600, ___host_0)); }
	inline NodeEnumerator_t648190100  get_host_0() const { return ___host_0; }
	inline NodeEnumerator_t648190100 * get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(NodeEnumerator_t648190100  value)
	{
		___host_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Enumerator_t3777569600, ___current_1)); }
	inline PBXGroup_t3369372711 * get_current_1() const { return ___current_1; }
	inline PBXGroup_t3369372711 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(PBXGroup_t3369372711 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier(&___current_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
