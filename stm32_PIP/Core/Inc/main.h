/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define OUT2_1_Pin GPIO_PIN_12
#define OUT2_1_GPIO_Port GPIOB
#define OUT2_2_Pin GPIO_PIN_13
#define OUT2_2_GPIO_Port GPIOB
#define OUT1_2_Pin GPIO_PIN_14
#define OUT1_2_GPIO_Port GPIOB
#define OUT1_1_Pin GPIO_PIN_15
#define OUT1_1_GPIO_Port GPIOB
#define PWM_01_Pin GPIO_PIN_8
#define PWM_01_GPIO_Port GPIOA
#define PWM_02_Pin GPIO_PIN_9
#define PWM_02_GPIO_Port GPIOA
#define PWM_03_Pin GPIO_PIN_10
#define PWM_03_GPIO_Port GPIOA
#define PWM_04_Pin GPIO_PIN_11
#define PWM_04_GPIO_Port GPIOA
#define OUT4_1_Pin GPIO_PIN_12
#define OUT4_1_GPIO_Port GPIOA
#define OUT4_2_Pin GPIO_PIN_15
#define OUT4_2_GPIO_Port GPIOA
#define OUT3_2_Pin GPIO_PIN_3
#define OUT3_2_GPIO_Port GPIOB
#define OUT3_1_Pin GPIO_PIN_4
#define OUT3_1_GPIO_Port GPIOB
#define D01_Encoder_Pin GPIO_PIN_6
#define D01_Encoder_GPIO_Port GPIOB
#define D01_Encoder_EXTI_IRQn EXTI9_5_IRQn
#define D02_Encoder_Pin GPIO_PIN_7
#define D02_Encoder_GPIO_Port GPIOB
#define D02_Encoder_EXTI_IRQn EXTI9_5_IRQn
#define D03_Encoder_Pin GPIO_PIN_8
#define D03_Encoder_GPIO_Port GPIOB
#define D03_Encoder_EXTI_IRQn EXTI9_5_IRQn
#define D04_Encoder_Pin GPIO_PIN_9
#define D04_Encoder_GPIO_Port GPIOB
#define D04_Encoder_EXTI_IRQn EXTI9_5_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
