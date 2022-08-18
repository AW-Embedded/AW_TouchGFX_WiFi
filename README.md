# AW_TouchGFX_WiFi

Example use of TouchGFX and WiFi module on the STM32H7B3I-DK.

NOTE.

STM32CubeMX v6.6.1 gives a warning about not having USE_NEWLIB_REENTRANT enabled if you try to generate code with it disabled.

If USE_NEWLIB_REENTRANT is enabled when using STM32 Network Library v2.1.0 the calls to strtok in (Drivers/BSP/Components/es_wifi.c) will fail when used within a FreeRTOS task.

To remedy this, either:
- Disable USE_NEWLIB_REENTRANT and ignore the warning on code generation.
- Enable USE_NEWLIB_REENTRANT and replace calls to strtok with strtok_r.
 
The ST provided ClockAndWether project was used as a code / designer reference, this project however is created through TouchGFX designer using the STM32H7B3I-DK board setup.

Built using:

-TouchGFX Designer v4.20.0
-STM32CubeFW_H7 v1.10.0
-STM32CubeMX v6.6.1
-STM32CubeIDE v1.10.0
-STM32 Network Library v2.1.0