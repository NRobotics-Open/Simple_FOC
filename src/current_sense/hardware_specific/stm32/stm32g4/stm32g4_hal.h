#ifndef STM32G4_LOWSIDE_HAL
#define STM32G4_LOWSIDE_HAL

#include "Arduino.h"
#if defined(STM32G4xx)
#if !defined(HAL_OPAMP_MODULE_ENABLED)
#if defined(_STM32_DEF_) and !defined(ARDUINO_B_G431B_ESC1) and !defined(ARDUINO_GENERIC_G431CBUX)


#include "stm32g4xx_hal.h"
#include "../../../../common/foc_utils.h"
#include "../../../../drivers/hardware_specific/stm32/stm32_mcu.h"
#include "../stm32_mcu.h"
#include "stm32g4_utils.h"

int _adc_init(Stm32CurrentSenseParams* cs_params, const STM32DriverParams* driver_params);
void _adc_gpio_init(Stm32CurrentSenseParams* cs_params, const int pinA, const int pinB, const int pinC);

#endif

#endif

#endif

#endif
