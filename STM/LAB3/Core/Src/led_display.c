/*
 * led_display.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Linh
 */
#include "led_display.h"

void display7SEG1(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		break;

	}
}

void display7SEG2(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, RESET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, RESET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, RESET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, RESET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, RESET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, RESET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, SET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, RESET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, RESET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, SET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, SET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, SET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, RESET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, RESET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, SET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, RESET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, RESET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, SET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, RESET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, RESET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, RESET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, RESET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, SET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, SET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, SET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, RESET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, RESET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, SET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, SET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, RESET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, RESET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, SET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, RESET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, RESET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, SET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, RESET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, RESET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, SET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, RESET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, RESET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, RESET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, RESET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, RESET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, RESET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, RESET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, SET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, SET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, SET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, RESET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, RESET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, RESET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, RESET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, RESET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, RESET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, RESET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, RESET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, RESET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, RESET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, SET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, RESET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(SEG00_GPIO_Port, SEG00_Pin, SET);
		HAL_GPIO_WritePin(SEG01_GPIO_Port, SEG01_Pin, SET);
		HAL_GPIO_WritePin(SEG02_GPIO_Port, SEG02_Pin, SET);
		HAL_GPIO_WritePin(SEG03_GPIO_Port, SEG03_Pin, SET);
		HAL_GPIO_WritePin(SEG04_GPIO_Port, SEG04_Pin, SET);
		HAL_GPIO_WritePin(SEG05_GPIO_Port, SEG05_Pin, SET);
		HAL_GPIO_WritePin(SEG06_GPIO_Port, SEG06_Pin, SET);
		break;

	}
}

void update7SEG1(int index, int value) {
	int led1_display = value / 10;
	int led2_display = value % 10;

	switch (index) {
	case 0:
		//Display the first 7SEG with led_buffer[0]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		display7SEG1(led1_display);
		break;
	case 1:
		//Display the second 7SEG with led_buffer[1]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		display7SEG1(led2_display);
		break;
	default:
		break;
	}
}

void update7SEG2(int index, int value) {
	int led3_display = value / 10;
	int led4_display = value % 10;

	switch (index) {
	case 0:
		//Display the first 7SEG with led_buffer[0]
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG2(led3_display);

		break;
	case 1:
		//Display the second 7SEG with led_buffer[1]
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		display7SEG2(led4_display);
		break;
	default:
		break;
	}
}

