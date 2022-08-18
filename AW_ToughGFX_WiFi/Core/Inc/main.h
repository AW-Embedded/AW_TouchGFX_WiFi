/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define WIFI_GPIO_Pin GPIO_PIN_4
#define WIFI_GPIO_GPIO_Port GPIOI
#define WIFI_BOOT_Pin GPIO_PIN_3
#define WIFI_BOOT_GPIO_Port GPIOI
#define WIFI_DATRDY_Pin GPIO_PIN_5
#define WIFI_DATRDY_GPIO_Port GPIOI
#define WIFI_DATRDY_EXTI_IRQn EXTI9_5_IRQn
#define LED3_Pin GPIO_PIN_11
#define LED3_GPIO_Port GPIOG
#define VSYNC_FREQ_Pin GPIO_PIN_14
#define VSYNC_FREQ_GPIO_Port GPIOH
#define WIFI_WKUP_Pin GPIO_PIN_2
#define WIFI_WKUP_GPIO_Port GPIOI
#define RENDER_TIME_Pin GPIO_PIN_13
#define RENDER_TIME_GPIO_Port GPIOH
#define FRAME_RATE_Pin GPIO_PIN_9
#define FRAME_RATE_GPIO_Port GPIOI
#define WIFI_RST_Pin GPIO_PIN_1
#define WIFI_RST_GPIO_Port GPIOI
#define WAKEUP_Pin GPIO_PIN_13
#define WAKEUP_GPIO_Port GPIOC
#define WAKEUP_EXTI_IRQn EXTI15_10_IRQn
#define LED2_Pin GPIO_PIN_2
#define LED2_GPIO_Port GPIOG
#define LCD_INT_Pin GPIO_PIN_2
#define LCD_INT_GPIO_Port GPIOH
#define MCU_ACTIVE_Pin GPIO_PIN_9
#define MCU_ACTIVE_GPIO_Port GPIOH
#define LCD_BL_CTRL_Pin GPIO_PIN_1
#define LCD_BL_CTRL_GPIO_Port GPIOA
#define LCD_ON_OFF_Pin GPIO_PIN_2
#define LCD_ON_OFF_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
