/*
 * task.c
 *
 *  Created on: Dec 4, 2023
 *      Author: Nghia
 */


#include "task.h"

void LED_0_Display() {
	HAL_GPIO_TogglePin(LED_0_GPIO_Port, LED_0_Pin);
}

void LED_1_Display() {
	HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
}

void LED_2_Display() {
	HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
}

void LED_3_Display() {
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
}

void LED_4_Display() {
	HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
}