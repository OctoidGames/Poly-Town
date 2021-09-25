#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// selectionRing
struct  selectionRing_t2416806052  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 selectionRing::Selected
	Vector2_t2243707579  ___Selected_2;
	// UnityEngine.AudioSource selectionRing::SelectSound
	AudioSource_t1135106623 * ___SelectSound_3;
	// System.Boolean selectionRing::soundplayed
	bool ___soundplayed_4;

public:
	inline static int32_t get_offset_of_Selected_2() { return static_cast<int32_t>(offsetof(selectionRing_t2416806052, ___Selected_2)); }
	inline Vector2_t2243707579  get_Selected_2() const { return ___Selected_2; }
	inline Vector2_t2243707579 * get_address_of_Selected_2() { return &___Selected_2; }
	inline void set_Selected_2(Vector2_t2243707579  value)
	{
		___Selected_2 = value;
	}

	inline static int32_t get_offset_of_SelectSound_3() { return static_cast<int32_t>(offsetof(selectionRing_t2416806052, ___SelectSound_3)); }
	inline AudioSource_t1135106623 * get_SelectSound_3() const { return ___SelectSound_3; }
	inline AudioSource_t1135106623 ** get_address_of_SelectSound_3() { return &___SelectSound_3; }
	inline void set_SelectSound_3(AudioSource_t1135106623 * value)
	{
		___SelectSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___SelectSound_3, value);
	}

	inline static int32_t get_offset_of_soundplayed_4() { return static_cast<int32_t>(offsetof(selectionRing_t2416806052, ___soundplayed_4)); }
	inline bool get_soundplayed_4() const { return ___soundplayed_4; }
	inline bool* get_address_of_soundplayed_4() { return &___soundplayed_4; }
	inline void set_soundplayed_4(bool value)
	{
		___soundplayed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
