﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_LocalReceiptResult
struct  ISN_LocalReceiptResult_t3746327569  : public Il2CppObject
{
public:
	// System.Byte[] ISN_LocalReceiptResult::_Receipt
	ByteU5BU5D_t3397334013* ____Receipt_0;
	// System.String ISN_LocalReceiptResult::_ReceiptString
	String_t* ____ReceiptString_1;

public:
	inline static int32_t get_offset_of__Receipt_0() { return static_cast<int32_t>(offsetof(ISN_LocalReceiptResult_t3746327569, ____Receipt_0)); }
	inline ByteU5BU5D_t3397334013* get__Receipt_0() const { return ____Receipt_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__Receipt_0() { return &____Receipt_0; }
	inline void set__Receipt_0(ByteU5BU5D_t3397334013* value)
	{
		____Receipt_0 = value;
		Il2CppCodeGenWriteBarrier(&____Receipt_0, value);
	}

	inline static int32_t get_offset_of__ReceiptString_1() { return static_cast<int32_t>(offsetof(ISN_LocalReceiptResult_t3746327569, ____ReceiptString_1)); }
	inline String_t* get__ReceiptString_1() const { return ____ReceiptString_1; }
	inline String_t** get_address_of__ReceiptString_1() { return &____ReceiptString_1; }
	inline void set__ReceiptString_1(String_t* value)
	{
		____ReceiptString_1 = value;
		Il2CppCodeGenWriteBarrier(&____ReceiptString_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
