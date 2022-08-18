################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/TouchGFXProjects/AW_TouchGFX_WiFi/AW_ToughGFX_WiFi/TouchGFX/App/app_touchgfx.c 

C_DEPS += \
./Application/User/TouchGFX/App/app_touchgfx.d 

OBJS += \
./Application/User/TouchGFX/App/app_touchgfx.o 


# Each subdirectory must supply rules for building sources it contributes
Application/User/TouchGFX/App/app_touchgfx.o: D:/TouchGFXProjects/AW_TouchGFX_WiFi/AW_ToughGFX_WiFi/TouchGFX/App/app_touchgfx.c Application/User/TouchGFX/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H7B3xxQ -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../Drivers/BSP -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../TouchGFX/target/generated -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../Drivers/BSP/Components/eswifi -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/BSP/STM32H7B3I-DK -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/mx25lm51245g -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Middlewares/ST/STM32_Network_Library/Includes -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../TouchGFX/generated/videos/include -I../../Drivers/BSP/Components/es_wifi -Og -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-User-2f-TouchGFX-2f-App

clean-Application-2f-User-2f-TouchGFX-2f-App:
	-$(RM) ./Application/User/TouchGFX/App/app_touchgfx.d ./Application/User/TouchGFX/App/app_touchgfx.o ./Application/User/TouchGFX/App/app_touchgfx.su

.PHONY: clean-Application-2f-User-2f-TouchGFX-2f-App

