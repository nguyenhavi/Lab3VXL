/*
 * blink_led.c
 *
 *  Created on: Oct 26, 2022
 *      Author: HP
 */

#include "blink_led.h"

void blink_led_red(){
	if(timer2_flag == 1) {
		HAL_GPIO_TogglePin(red1_GPIO_Port ,red1_Pin);
		HAL_GPIO_TogglePin(red2_GPIO_Port ,red2_Pin);
		HAL_GPIO_TogglePin(red3_GPIO_Port ,red3_Pin);
		HAL_GPIO_TogglePin(red4_GPIO_Port ,red4_Pin);
		setTimer2(50);
	}
}

void blink_led_yellow(){
	if(timer2_flag == 1) {
		HAL_GPIO_TogglePin(yellow1_GPIO_Port ,yellow1_Pin);
		HAL_GPIO_TogglePin(yellow2_GPIO_Port ,yellow2_Pin);
		HAL_GPIO_TogglePin(yellow3_GPIO_Port ,yellow3_Pin);
		HAL_GPIO_TogglePin(yellow4_GPIO_Port ,yellow4_Pin);
		setTimer2(50);
	}
}

void blink_led_green(){
	if(timer2_flag == 1) {
		HAL_GPIO_TogglePin(green1_GPIO_Port ,green1_Pin);
		HAL_GPIO_TogglePin(green2_GPIO_Port ,green2_Pin);
		HAL_GPIO_TogglePin(green3_GPIO_Port ,green3_Pin);
		HAL_GPIO_TogglePin(green4_GPIO_Port ,green4_Pin);
		setTimer2(50);
	}
}

void clearAllLed(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(red3_GPIO_Port, red3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green3_GPIO_Port, green3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow3_GPIO_Port, yellow3_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(red4_GPIO_Port, red4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(green4_GPIO_Port, green4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(yellow4_GPIO_Port, yellow4_Pin, GPIO_PIN_SET);
}
