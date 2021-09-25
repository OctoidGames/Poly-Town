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

// cameraPos
struct  cameraPos_t3283758543  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider cameraPos::HeightSlider
	Slider_t297367283 * ___HeightSlider_2;
	// System.Single cameraPos::Height
	float ___Height_3;
	// System.Single cameraPos::Sensitivity
	float ___Sensitivity_4;

public:
	inline static int32_t get_offset_of_HeightSlider_2() { return static_cast<int32_t>(offsetof(cameraPos_t3283758543, ___HeightSlider_2)); }
	inline Slider_t297367283 * get_HeightSlider_2() const { return ___HeightSlider_2; }
	inline Slider_t297367283 ** get_address_of_HeightSlider_2() { return &___HeightSlider_2; }
	inline void set_HeightSlider_2(Slider_t297367283 * value)
	{
		___HeightSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___HeightSlider_2, value);
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(cameraPos_t3283758543, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}

	inline static int32_t get_offset_of_Sensitivity_4() { return static_cast<int32_t>(offsetof(cameraPos_t3283758543, ___Sensitivity_4)); }
	inline float get_Sensitivity_4() const { return ___Sensitivity_4; }
	inline float* get_address_of_Sensitivity_4() { return &___Sensitivity_4; }
	inline void set_Sensitivity_4(float value)
	{
		___Sensitivity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
