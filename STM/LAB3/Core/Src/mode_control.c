/*
 * mode_control.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Linh
 */

#include "mode_control.h"

void fsm_control() {
	if (isButtonPressed(0) == 1) {
		modeCounter++;
		if (modeCounter > 4) {
			modeCounter = 1;
		}
	}

	switch (modeCounter) {
	case 1:
		mode1_control();
		break;
	case 2:
		mode2_control();
		break;
	case 3:
		mode3_control();
		break;
	case 4:
		mode4_control();
		break;
	default:
		break;
	}
}

void mode1_control() {
	if (timeCounter == 0) {
		timeCounter = 100;

		if (counter == 0) {
			counter = redTime + greenTime + yellowTime;
		}

		if (counter == redTime + greenTime + yellowTime) {
			//Red1 led and Green2 led on.
			//Red1 led
			setRed1Light();
			time1_display = redTime;
			//Green2 led
			setGreen2Light();
			time2_display = greenTime;
		}

		else if (counter == redTime + yellowTime) {
			//Red1 led and Yellow2 led on.
			//Yellow2 led
			setYellow2Light();
			time2_display = yellowTime;
		}

		else if (counter == greenTime + yellowTime) {
			//Green1 led and Red2 led on.
			//Green1 led
			setGreen1Light();
			time1_display = greenTime;
			//Red2 led
			setRed2Light();
			time2_display = redTime;
		}

		else if (counter == yellowTime) {
			//Yellow1 led and Red2 led on.
			//Yellow1 led
			setYellow1Light();
			time1_display = yellowTime;
		}

		counter--;
	}

	if (timeCounter == 100) {
		update7SEG1(0, time1_display);
		update7SEG2(0, time2_display);
	}

	else if (timeCounter == 50) {
		update7SEG1(1, time1_display);
		update7SEG2(1, time2_display);

		time1_display--;
		time2_display--;
	}

	timeCounter--;
}

void mode2_control() {
	green_temp = greenTime;
	time2_display = 2;
	time1_display = red_temp;

	//button2 is pressed
	if (isButtonPressed(1) == 1) {
		red_temp++;
		if (red_temp > 99) {
			red_temp = 1;
		}
		time1_display = red_temp;
	}

	//button3 is pressed
	if (isButtonPressed(2) == 1) {
		redTime = red_temp;
		counter = redTime + greenTime + yellowTime;
		time1_display = redTime;
	}

	if (timeCounter == 0) {
		timeCounter = 100;
	}

	if (timeCounter == 100 || timeCounter == 50) {
		HAL_GPIO_TogglePin(R1_GPIO_Port, R1_Pin);
		HAL_GPIO_TogglePin(R2_GPIO_Port, R2_Pin);

		if (timeCounter == 100) {
			update7SEG1(0, time1_display);
			update7SEG2(0, time2_display);
		} else if (timeCounter == 50) {
			update7SEG1(1, time1_display);
			update7SEG2(1, time2_display);
		}
	}

	counter = redTime + greenTime + yellowTime;
	timeCounter--;
}

void mode3_control() {
	red_temp = redTime;
	time2_display = 3;
	time1_display = yellow_temp;

	//button2 is pressed
	if (isButtonPressed(1) == 1) {
		yellow_temp++;
		if (yellow_temp > 99) {
			yellow_temp = 1;
		}
		time1_display = yellow_temp;
	}

	//button3 is pressed
	if (isButtonPressed(2) == 1) {
		yellowTime = yellow_temp;
		counter = redTime + greenTime + yellowTime;
		time1_display = yellowTime;
	}

	if (timeCounter == 0) {
		timeCounter = 100;
	}

	if (timeCounter == 100 || timeCounter == 50) {
		HAL_GPIO_TogglePin(Y1_GPIO_Port, Y1_Pin);
		HAL_GPIO_TogglePin(Y2_GPIO_Port, Y2_Pin);

		if (timeCounter == 100) {
			update7SEG1(0, time1_display);
			update7SEG2(0, time2_display);
		} else if (timeCounter == 50) {
			update7SEG1(1, time1_display);
			update7SEG2(1, time2_display);
		}
	}

	counter = redTime + greenTime + yellowTime;
	timeCounter--;
}

void mode4_control() {
	yellow_temp = yellowTime;
	time2_display = 4;
	time1_display = green_temp;

	//button2 is pressed
	if (isButtonPressed(1) == 1) {
		green_temp++;
		if (green_temp > 99) {
			green_temp = 1;
		}
		time1_display = green_temp;
	}

	//button3 is pressed
	if (isButtonPressed(2) == 1) {
		greenTime = green_temp;
		counter = redTime + greenTime + yellowTime;
		time1_display = greenTime;
	}

	if (timeCounter == 0) {
		timeCounter = 100;
	}

	if (timeCounter == 100 || timeCounter == 50) {
		HAL_GPIO_TogglePin(G1_GPIO_Port, G1_Pin);
		HAL_GPIO_TogglePin(G2_GPIO_Port, G2_Pin);

		if (timeCounter == 100) {
			update7SEG1(0, time1_display);
			update7SEG2(0, time2_display);
		} else if (timeCounter == 50) {
			update7SEG1(1, time1_display);
			update7SEG2(1, time2_display);
		}
	}

	counter = redTime + greenTime + yellowTime;
	timeCounter--;
}
