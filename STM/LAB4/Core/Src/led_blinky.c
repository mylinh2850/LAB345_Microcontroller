/*
 * led_blinky.c
 *
 *  Created on: Nov 24, 2022
 *      Author: Linh
 */

#include "led_blinky.h"

void led1_blinky() {
	//Toggle led RED
	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
}

void led2_blinky() {
	//Toggle led YELLOW
	HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
}

void led3_blinky() {
	//Toggle led BLUE
	HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
}

void led4_blinky() {
	//Toggle led ORANGE
	HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
}

void led5_blinky() {
	//Toggle led GREEN
	HAL_GPIO_TogglePin(LED5_GPIO_Port, LED5_Pin);
}
