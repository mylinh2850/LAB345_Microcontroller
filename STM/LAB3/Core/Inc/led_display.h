/*
 * led_display.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Linh
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "main.h"
#include "global.h"
#include "software_timer.h"

void display7SEG1(int num);
void display7SEG2(int num);

void update7SEG1(int index, int value);
void update7SEG2(int index, int value);

void mode1_control();


#endif /* INC_LED_DISPLAY_H_ */
