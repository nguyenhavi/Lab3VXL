/*
 * global.h
 *
 *  Created on: Oct 26, 2022
 *      Author: HP
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"

#define INIT	1

#define RED1	2
#define YELLOW1	3
#define GREEN1	4

#define RED2	5
#define YELLOW2	6
#define GREEN2	7

#define NormalMode 	10
#define Mode2 	   	11
#define Mode3 		12
#define Mode4		13

extern int RED1_TIME;
extern int YELLOW1_TIME;
extern int GREEN1_TIME;

extern int RED2_TIME;
extern int YELLOW2_TIME;
extern int GREEN2_TIME;

extern int status_main;
extern int status2;
extern int status1;
extern int index_7SEG;

extern int flag_red_change;
extern int flag_yellow_change;
extern int flag_green_change;

extern int buffer_time;

extern int counter1;
extern int counter2;
extern int index_traffic;

extern int TimerForKeyPress;

extern uint32_t frequency;
#endif /* INC_GLOBAL_H_ */
