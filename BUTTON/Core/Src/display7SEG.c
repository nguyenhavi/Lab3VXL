/*
 * display7SEG.c
 *
 *  Created on: Oct 26, 2022
 *      Author: HP
 */

#include "display7SEG.h"

void display7SEG_1(int number){
	if(number == 0){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
	}
	else if(number == 1){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
	}
	else if (number == 2){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	}
	else if (number == 3){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	}
	else if (number == 4){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	}
	else if (number == 5){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	}
	else if (number == 6){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	}
	else if (number == 7){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
	}
	else if (number == 8){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	}
	else if (number == 9){
		HAL_GPIO_WritePin (a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	}
}

void display7SEG_2(int number){
	if(number == 0){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
	}
	else if(number == 1){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
	}
	else if (number == 2){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	}
	else if (number == 3){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	}
	else if (number == 4){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	}
	else if (number == 5){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	}
	else if (number == 6){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	}
	else if (number == 7){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
	}
	else if (number == 8){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	}
	else if (number == 9){
		HAL_GPIO_WritePin (a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin (f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin (g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	}
}

void update7SEG1forMode234(int value7SEG1, int value7SEG2){
	switch(index_7SEG){
	case -1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		index_7SEG = 0;
		setTimer3(100);
		break;
	//The top 2 7SEG leds use to display the mode
	//The bottom 2 7SEG leds use to display time of correspond LED
	case 0:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			display7SEG_1(value7SEG1 / 10);
			display7SEG_2(value7SEG1 % 10);
		if(timer3_flag == 1){
			index_7SEG = 1;
			setTimer3(100);
		}
		// Display EN1 7SEG
		break;
	case 1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
		display7SEG_1(value7SEG2 / 10);
		display7SEG_2(value7SEG2 % 10);
		if(timer3_flag == 1){
			index_7SEG = 0;
			setTimer3(100);
		}
		// Display EN2 7SEG
		break;
	default:
		break;
	}
}

void traffic_time(int value1, int value2){
	switch(index_traffic){
	case -1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		index_traffic = 0;
		setTimer5(100);
		break;
	case 0: //EN1 positive mean the bottom 2 7SEG leds is display
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			display7SEG_1(value1 / 10);
			display7SEG_2(value1 % 10);
	  		if(counter1 <= 0){
				if(status1 == RED1){
					counter1 = RED1_TIME/100;
				}
				else if(status1 == GREEN1){
					counter1 = GREEN1_TIME/100;
				}
				else if(status1 == YELLOW1){
					counter1 = YELLOW1_TIME/100;
				}
	  		}
		if(timer5_flag == 1){
			counter1--;
			counter2--;
			index_traffic = 1;
			setTimer5(100);
		}
		break;
	case 1: //EN2 positive mean the top 2 7SEG leds is display
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
		display7SEG_1(value2 / 10);
		display7SEG_2(value2 % 10);
  		if(counter2 <= 0){
			if(status2 == RED2){
				counter2 = RED2_TIME/100;
			}
			else if(status2 == GREEN2){
				counter2 = GREEN2_TIME/100;
			}
			else if(status2 == YELLOW2){
				counter2 = YELLOW2_TIME/100;
			}
  		}
		if(timer5_flag == 1){
			counter1--;
			counter2--;
			index_traffic = 0;
			setTimer5(100);
		}
		break;
	default:
		break;
	}
}
