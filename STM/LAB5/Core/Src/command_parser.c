/*
 * command_parser.c
 *
 *  Created on: Dec 11, 2022
 *      Author: Linh
 */

#include "command_parser.h"

#define WAIT_DATA			1
#define DATA_RECEIVE		2
#define RECEIVE_DATA_R  	3
#define RECEIVE_DATA_S  	4
#define END_DATA_RST 		5
#define RECEIVE_DATA_O 		6
#define END_DATA_OK 		7
uint8_t uartStatus = WAIT_DATA;

void command_parser_fsm(void) {
	switch (uartStatus) {
	case WAIT_DATA:
		if (temp == '!') {
			uartStatus = DATA_RECEIVE;
		}
		break;
	case DATA_RECEIVE:
		if (temp == 'R')
			uartStatus = RECEIVE_DATA_R;
		else if (temp == 'O')
			uartStatus = RECEIVE_DATA_O;
		else
			uartStatus = WAIT_DATA;
		break;
	case RECEIVE_DATA_R:
		if (temp == 'S')
			uartStatus = RECEIVE_DATA_S;
		else
			uartStatus = WAIT_DATA;
		break;
	case RECEIVE_DATA_S:
		if (temp == 'T')
			uartStatus = END_DATA_RST;
		else
			uartStatus = WAIT_DATA;
		break;
	case RECEIVE_DATA_O:
		if (temp == 'K')
			uartStatus = END_DATA_OK;
		else
			uartStatus = WAIT_DATA;
		break;
	case END_DATA_RST:
		if (temp == '#') {
			uartStatus = WAIT_DATA;
			flagSendData = 1;
		} else
			uartStatus = WAIT_DATA;
		break;
	case END_DATA_OK:
		if (temp == '#') {
			uartStatus = WAIT_DATA;
			flagSendData = 0;
		} else
			uartStatus = WAIT_DATA;
		break;
	default:
		break;
	}
}
