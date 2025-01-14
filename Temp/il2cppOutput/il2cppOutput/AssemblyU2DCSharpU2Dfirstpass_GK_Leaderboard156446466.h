﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GK_ScoreCollection
struct GK_ScoreCollection_t4092547735;
// System.Collections.Generic.List`1<GK_Score>
struct List_1_t898130005;
// System.Collections.Generic.Dictionary`2<System.Int32,GK_LocalPlayerScoreUpdateListener>
struct Dictionary_2_t78700957;
// GK_LeaderBoardInfo
struct GK_LeaderBoardInfo_t3670215494;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_Leaderboard
struct  GK_Leaderboard_t156446466  : public Il2CppObject
{
public:
	// System.Boolean GK_Leaderboard::IsOpen
	bool ___IsOpen_0;
	// System.Boolean GK_Leaderboard::_CurrentPlayerScoreLoaded
	bool ____CurrentPlayerScoreLoaded_1;
	// GK_ScoreCollection GK_Leaderboard::SocsialCollection
	GK_ScoreCollection_t4092547735 * ___SocsialCollection_2;
	// GK_ScoreCollection GK_Leaderboard::GlobalCollection
	GK_ScoreCollection_t4092547735 * ___GlobalCollection_3;
	// System.Collections.Generic.List`1<GK_Score> GK_Leaderboard::CurrentPlayerScore
	List_1_t898130005 * ___CurrentPlayerScore_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,GK_LocalPlayerScoreUpdateListener> GK_Leaderboard::ScoreUpdateListners
	Dictionary_2_t78700957 * ___ScoreUpdateListners_5;
	// GK_LeaderBoardInfo GK_Leaderboard::_info
	GK_LeaderBoardInfo_t3670215494 * ____info_6;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of__CurrentPlayerScoreLoaded_1() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ____CurrentPlayerScoreLoaded_1)); }
	inline bool get__CurrentPlayerScoreLoaded_1() const { return ____CurrentPlayerScoreLoaded_1; }
	inline bool* get_address_of__CurrentPlayerScoreLoaded_1() { return &____CurrentPlayerScoreLoaded_1; }
	inline void set__CurrentPlayerScoreLoaded_1(bool value)
	{
		____CurrentPlayerScoreLoaded_1 = value;
	}

	inline static int32_t get_offset_of_SocsialCollection_2() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ___SocsialCollection_2)); }
	inline GK_ScoreCollection_t4092547735 * get_SocsialCollection_2() const { return ___SocsialCollection_2; }
	inline GK_ScoreCollection_t4092547735 ** get_address_of_SocsialCollection_2() { return &___SocsialCollection_2; }
	inline void set_SocsialCollection_2(GK_ScoreCollection_t4092547735 * value)
	{
		___SocsialCollection_2 = value;
		Il2CppCodeGenWriteBarrier(&___SocsialCollection_2, value);
	}

	inline static int32_t get_offset_of_GlobalCollection_3() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ___GlobalCollection_3)); }
	inline GK_ScoreCollection_t4092547735 * get_GlobalCollection_3() const { return ___GlobalCollection_3; }
	inline GK_ScoreCollection_t4092547735 ** get_address_of_GlobalCollection_3() { return &___GlobalCollection_3; }
	inline void set_GlobalCollection_3(GK_ScoreCollection_t4092547735 * value)
	{
		___GlobalCollection_3 = value;
		Il2CppCodeGenWriteBarrier(&___GlobalCollection_3, value);
	}

	inline static int32_t get_offset_of_CurrentPlayerScore_4() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ___CurrentPlayerScore_4)); }
	inline List_1_t898130005 * get_CurrentPlayerScore_4() const { return ___CurrentPlayerScore_4; }
	inline List_1_t898130005 ** get_address_of_CurrentPlayerScore_4() { return &___CurrentPlayerScore_4; }
	inline void set_CurrentPlayerScore_4(List_1_t898130005 * value)
	{
		___CurrentPlayerScore_4 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentPlayerScore_4, value);
	}

	inline static int32_t get_offset_of_ScoreUpdateListners_5() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ___ScoreUpdateListners_5)); }
	inline Dictionary_2_t78700957 * get_ScoreUpdateListners_5() const { return ___ScoreUpdateListners_5; }
	inline Dictionary_2_t78700957 ** get_address_of_ScoreUpdateListners_5() { return &___ScoreUpdateListners_5; }
	inline void set_ScoreUpdateListners_5(Dictionary_2_t78700957 * value)
	{
		___ScoreUpdateListners_5 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreUpdateListners_5, value);
	}

	inline static int32_t get_offset_of__info_6() { return static_cast<int32_t>(offsetof(GK_Leaderboard_t156446466, ____info_6)); }
	inline GK_LeaderBoardInfo_t3670215494 * get__info_6() const { return ____info_6; }
	inline GK_LeaderBoardInfo_t3670215494 ** get_address_of__info_6() { return &____info_6; }
	inline void set__info_6(GK_LeaderBoardInfo_t3670215494 * value)
	{
		____info_6 = value;
		Il2CppCodeGenWriteBarrier(&____info_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
