/*
 * software_timer.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Linh
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_


extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer1_counter;
extern int timer2_counter;
extern int timer3_counter;
extern int timer4_counter;
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void timerRun();
void clearTimer1();

#endif /* INC_SOFTWARE_TIMER_H_ */
