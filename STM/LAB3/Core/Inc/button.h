/*
 * button.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Linh
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

#define NUM_OF_BUTTONS	3

int isButtonPressed(int index);
void subKeyProcess(int index);
void clearButton();
void getKeyInput();

#endif /* INC_BUTTON_H_ */

