/*
 * uart_communication.c
 *
 *  Created on: Dec 11, 2022
 *      Author: Linh
 */

#include "uart_communication.h"

uint16_t ADC_value = 0;

char str[4] = "0000";
enum comState {
	WAIT_COMMAND, SEND_DATA, RESEND_DATA
};
enum comState statusOfCom = WAIT_COMMAND;

void uart_communiation_fsm(void) {
	switch (statusOfCom) {
	case WAIT_COMMAND:
		if (flagSendData) {
			statusOfCom = SEND_DATA;
			//Reading ADC
			HAL_ADC_Start(&hadc1);
			HAL_ADC_PollForConversion(&hadc1, 100);
			ADC_value = HAL_ADC_GetValue(&hadc1);
			// Convert to string and print
			sprintf(str, "%hu", ADC_value);
		}
		break;
	case SEND_DATA:
		HAL_UART_Transmit(&huart2, buffer, 5, 100);
		HAL_UART_Transmit(&huart2, (uint8_t*) str, strlen(str), 100);
		HAL_UART_Transmit(&huart2, (uint8_t*) "#\r\n", 3, 100);
		if (flagSendData) {
			statusOfCom = RESEND_DATA;
			setTimer2(1000);
		}
		break;
	case RESEND_DATA:
		if (timer2_flag == 1) {
			HAL_UART_Transmit(&huart2, buffer, 5, 100);
			HAL_UART_Transmit(&huart2, (uint8_t*) str, strlen(str), 100);
			HAL_UART_Transmit(&huart2, (uint8_t*) "#\r\n", 3, 100);
			setTimer2(1000);
		}
		if (!flagSendData) {
			statusOfCom = WAIT_COMMAND;
			setTimer2(100);
		}
		break;
	default:
		statusOfCom = WAIT_COMMAND;
	}
}
