/*
 * timer.h
 *
 *  Created on: Dec 11, 2022
 *      Author: Linh
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"
#define TIMER_CYCLE	10

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
