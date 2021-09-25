#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Slider
struct Slider_t297367283;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingBarTest
struct  LoadingBarTest_t1717298735  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider LoadingBarTest::LoadingBar
	Slider_t297367283 * ___LoadingBar_2;
	// System.Single LoadingBarTest::Loaded
	float ___Loaded_3;

public:
	inline static int32_t get_offset_of_LoadingBar_2() { return static_cast<int32_t>(offsetof(LoadingBarTest_t1717298735, ___LoadingBar_2)); }
	inline Slider_t297367283 * get_LoadingBar_2() const { return ___LoadingBar_2; }
	inline Slider_t297367283 ** get_address_of_LoadingBar_2() { return &___LoadingBar_2; }
	inline void set_LoadingBar_2(Slider_t297367283 * value)
	{
		___LoadingBar_2 = value;
		Il2CppCodeGenWriteBarrier(&___LoadingBar_2, value);
	}

	inline static int32_t get_offset_of_Loaded_3() { return static_cast<int32_t>(offsetof(LoadingBarTest_t1717298735, ___Loaded_3)); }
	inline float get_Loaded_3() const { return ___Loaded_3; }
	inline float* get_address_of_Loaded_3() { return &___Loaded_3; }
	inline void set_Loaded_3(float value)
	{
		___Loaded_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
