/*
 * schedule.h
 *
 *  Created on: Dec 4, 2023
 *      Author: Nghia
 */

#ifndef INC_SCHEDULE_H_
#define INC_SCHEDULE_H_

#include "stdint.h"
#include "main.h"

#define SCH_MAX_TASKS 10
#define NO_TASK_ID 0
#define TICKS 10

typedef struct {
	void(* pTask)(void); // Pointer to the task (void function)
	int32_t Delay; //Delay (ticks) until the function will be run
	int32_t Period; //Interval (ticks) between subsequent run
	int8_t RunMe; //Same as timer flag
	uint32_t TaskID;
} sTask;

extern sTask SCH_tasks_G[SCH_MAX_TASKS];

void SCH_Init(void);
void SCH_Update(void);
unsigned char SCH_Add_Task(void (* pFunction) (), unsigned int DELAY, unsigned int PERIOD);
void SCH_Dispatch_Tasks(void);

#endif /* INC_SCHEDULE_H_ */
