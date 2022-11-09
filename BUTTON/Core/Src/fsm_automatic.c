/*
 * fsm_automatic.c
 *
 *  Created on: Oct 26, 2022
 *      Author: HP
 */

#include "fsm_automatic.h"

void fsm_automatic1_run(){
	switch(status1){
	case INIT:
		HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red3_GPIO_Port, red3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green3_GPIO_Port, green3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow3_GPIO_Port, yellow3_Pin, GPIO_PIN_SET);

		status1 = RED1;
		setTimer1(RED1_TIME);
		break;
	case RED1:
		HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red3_GPIO_Port, red3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green3_GPIO_Port, green3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow3_GPIO_Port, yellow3_Pin, GPIO_PIN_SET);

		if(timer1_flag == 1){
			status1 = GREEN1;
			setTimer1(GREEN1_TIME);
		}
		break;
	case YELLOW1:
		HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(red3_GPIO_Port, red3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green3_GPIO_Port, green3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow3_GPIO_Port, yellow3_Pin, GPIO_PIN_RESET);
		if(timer1_flag == 1){
			status1 = RED1;
			setTimer1(RED1_TIME);
		}
		break;
	case GREEN1:
		HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red3_GPIO_Port, red3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green3_GPIO_Port, green3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow3_GPIO_Port, yellow3_Pin, GPIO_PIN_SET);
		if(timer1_flag == 1){
			status1 = YELLOW1;
			setTimer1(YELLOW1_TIME);
		}
		break;
	default:
		break;
	}
}

void fsm_automatic2_run(){
	switch(status2){
	case INIT:
		HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red4_GPIO_Port, red4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green4_GPIO_Port, green4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow4_GPIO_Port, yellow4_Pin, GPIO_PIN_SET);
		status2 = GREEN2;
		setTimer4(GREEN2_TIME);
		break;
	case RED2:
		HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red4_GPIO_Port, red4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green4_GPIO_Port, green4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow4_GPIO_Port, yellow4_Pin, GPIO_PIN_SET);
		if(timer4_flag == 1){
			status2 = GREEN2;
			setTimer4(GREEN2_TIME);
		}
		break;
	case YELLOW2:
		HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(red4_GPIO_Port, red4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green4_GPIO_Port, green4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow4_GPIO_Port, yellow4_Pin, GPIO_PIN_RESET);
		if(timer4_flag == 1){
			status2 = RED2;
			setTimer4(RED2_TIME);
		}
		break;
	case GREEN2:
		HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(red4_GPIO_Port, red4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green4_GPIO_Port, green4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow4_GPIO_Port, yellow4_Pin, GPIO_PIN_SET);
		if(timer4_flag == 1){
			status2 = YELLOW2;
			setTimer4(YELLOW2_TIME);
		}
		break;
	default:
		break;
	}
}

