/*
 * scheduler.h
 *
 *  Created on: Nov 24, 2022
 *      Author: Linh
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "main.h"
#include <stdint.h>

typedef struct {
	void (*pTask)(void);
	uint32_t Delay;		//Delay until the function run
	uint32_t Period;	//Interval between consecutive runs
	uint8_t RunMe;		//Incremented (by scheduler) when task is due to execute
	uint32_t TaskID;
} sTasks;

#define SCH_MAX_TASKS	40

void SCH_Init(void);
void SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
void SCH_Delete_Task(const int TASK_INDEX);

#endif /* INC_SCHEDULER_H_ */