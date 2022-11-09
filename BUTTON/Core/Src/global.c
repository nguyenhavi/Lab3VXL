/*
 * global.c
 *
 *  Created on: Oct 26, 2022
 *      Author: HP
 */

#include "global.h"
#include "main.h"

int status1 = 0;
int status2 = 0;

int status_main = 0;

int index_7SEG = -1;

int RED1_TIME = 500;
int YELLOW1_TIME = 200;
int GREEN1_TIME = 300;

int RED2_TIME = 500;
int YELLOW2_TIME = 200;
int GREEN2_TIME = 300;

int buffer_time = 0;

int flag_red_change = 0;
int flag_yellow_change = 0;
int flag_green_change = 0;

int counter1 = 5;
int counter2 = 3;
int index_traffic = -1;

uint32_t frequency = 0;

int TimerForKeyPress = 200;
