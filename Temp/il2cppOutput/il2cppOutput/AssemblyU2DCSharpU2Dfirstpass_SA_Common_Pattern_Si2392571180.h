﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ISN_RemoteNotificationsController
struct ISN_RemoteNotificationsController_t1910006075;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Common.Pattern.Singleton`1<ISN_RemoteNotificationsController>
struct  Singleton_1_t2392571180  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t2392571180_StaticFields
{
public:
	// T SA.Common.Pattern.Singleton`1::_instance
	ISN_RemoteNotificationsController_t1910006075 * ____instance_2;
	// System.Boolean SA.Common.Pattern.Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_3;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t2392571180_StaticFields, ____instance_2)); }
	inline ISN_RemoteNotificationsController_t1910006075 * get__instance_2() const { return ____instance_2; }
	inline ISN_RemoteNotificationsController_t1910006075 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(ISN_RemoteNotificationsController_t1910006075 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_3() { return static_cast<int32_t>(offsetof(Singleton_1_t2392571180_StaticFields, ___applicationIsQuitting_3)); }
	inline bool get_applicationIsQuitting_3() const { return ___applicationIsQuitting_3; }
	inline bool* get_address_of_applicationIsQuitting_3() { return &___applicationIsQuitting_3; }
	inline void set_applicationIsQuitting_3(bool value)
	{
		___applicationIsQuitting_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif