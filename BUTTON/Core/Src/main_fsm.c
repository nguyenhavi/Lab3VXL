/*
 * main_fsm.c
 *
 *  Created on: Oct 27, 2022
 *      Author: HP
 */

#include "main_fsm.h"
#include "display7SEG.h"
#include "blink_led.h"

void main_fsm(){
	  switch(status_main){
	  	case NormalMode:
	  		fsm_automatic1_run();
	  		fsm_automatic2_run();
	  		//display traffic count down time
	  		traffic_time(counter1, counter2);
	  		if(isButton1Pressed() == 1){
	  			clearAllLed();
	  			setTimer2(50);
	  			status_main = Mode2;
	  		}
	  		break;
	  	case Mode2:
	  		blink_led_red();
	  		//display mode and time for RED_LED
	  		update7SEG1forMode234(RED1_TIME/100, 2);
	  		if(isButton1Pressed() == 1){
	  			if(flag_red_change == 0){
	  				RED1_TIME -= buffer_time*100;
	  				RED2_TIME -= buffer_time*100;
	  			}
	  			flag_red_change = 0;
	  			buffer_time = 0;
	  			clearAllLed();
	  			setTimer2(50);
	  			status_main = Mode3;
	  		}
	  		if(isButton2Pressed() == 1){
	  			buffer_time++;
	  			RED1_TIME += 100;
	  			RED2_TIME += 100;
	  		}
	  		if(isButton3Pressed() == 1){
	  			flag_red_change = 1;
	  		}
	  		break;
	  	case Mode3:
	  		blink_led_yellow();
	  		//display mode and time for YELLOW_LED
	  		update7SEG1forMode234(YELLOW1_TIME/100, 3);
	  		if(isButton1Pressed() == 1){
	  			if(flag_yellow_change == 0){
	  				YELLOW1_TIME -= buffer_time*100;
	  				YELLOW2_TIME -= buffer_time*100;
	  			}
	  			flag_yellow_change = 0;
	  			buffer_time = 0;
	  			clearAllLed();
	  			setTimer2(50);
	  			status_main = Mode4;
	  		}
	  		if(isButton2Pressed() == 1){
	  			buffer_time++;
	  			YELLOW1_TIME += 100;
	  			YELLOW2_TIME += 100;
	  		}
	  		if(isButton3Pressed() == 1){
	  			flag_yellow_change = 1;
	  		}
	  		break;
	  	case Mode4:
	  		blink_led_green();
	  		//display mode and time for GREEN_LED
	  		update7SEG1forMode234(GREEN1_TIME/100, 4);
	  		if(isButton1Pressed() == 1){
	  			if(flag_green_change == 0){
	  				GREEN1_TIME -= buffer_time*100;
	  				GREEN2_TIME -= buffer_time*100;
	  			}
	  			flag_green_change = 0;
	  			buffer_time = 0;
	  			clearAllLed();
	  			status_main = NormalMode;
	  		}
	  		if(isButton2Pressed() == 1){
	  			buffer_time++;
	  			GREEN1_TIME += 100;
	  			GREEN2_TIME += 100;
	  		}
	  		if(isButton3Pressed() == 1){
	  			flag_green_change = 1;
	  		}
	  		break;
	  	default:
	  		break;
	  }
}
