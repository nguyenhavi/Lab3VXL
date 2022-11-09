/*
 * button.c
 *
 *  Created on: Oct 26, 2022
 *      Author: HP
 */

#include "button.h"
#include "main.h"
#include "global.h"

//0123 for button1
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;

//4567 for button2
int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;

int KeyReg7 = NORMAL_STATE;

//891011 for button3
int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;

int KeyReg11 = NORMAL_STATE;

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess1(){
	//TODO
	button1_flag = 1;
}

void subKeyProcess2(){
	//TODO
	button2_flag = 1;
}

void subKeyProcess3(){
	//TODO
	button3_flag = 1;
}

void getKeyInput(){
	//Code for button1
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if(KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if(KeyReg2 == PRESSED_STATE){
				subKeyProcess1();
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress == 0){
				KeyReg3 = NORMAL_STATE;
			}
		}
	}

	//Code for button2
	KeyReg4 = KeyReg5;
	KeyReg5 = KeyReg6;
	KeyReg6 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	if ((KeyReg4 == KeyReg5) && (KeyReg5 == KeyReg6)){
		if(KeyReg7 != KeyReg6){
			KeyReg7 = KeyReg6;
			if(KeyReg6 == PRESSED_STATE){
				subKeyProcess2();
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress == 0){
				KeyReg7 = NORMAL_STATE;
			}
		}
	}

	//Code for button3
	KeyReg8 = KeyReg9;
	KeyReg9 = KeyReg10;
	KeyReg10 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	if ((KeyReg8 == KeyReg9) && (KeyReg9 == KeyReg10)){
		if(KeyReg11 != KeyReg10){
			KeyReg11 = KeyReg10;
			if(KeyReg10 == PRESSED_STATE){
				subKeyProcess3();
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress == 0){
				KeyReg11 = NORMAL_STATE;
			}
		}
	}
}
