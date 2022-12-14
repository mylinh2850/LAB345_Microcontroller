/*
 * command_parser.h
 *
 *  Created on: Dec 11, 2022
 *      Author: Linh
 */

#ifndef INC_COMMAND_PARSER_H_
#define INC_COMMAND_PARSER_H_

#include "main.h"
#include "timer.h"
#include "stdio.h"
#include "string.h"

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void command_parser_fsm (void);

#endif /* INC_COMMAND_PARSER_H_ */
