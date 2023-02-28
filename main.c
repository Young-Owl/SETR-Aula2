// Main File for the project

/** @file main.c
 * @brief main.c Store temperatures during a day
 *
 * This file, have a data struct and 3 functions to control a temperatures during a day
 * 
 * @author Gonçalo Soares & Gonçalo Rodrigues
 * @date 28 Februery 2023
 * @bug No known bugs.
 */

/* Includes */
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

struct dailytemp {
    int hour;
    int temp[24];
    int max;
    int min;
    int avg;
};

void dtInit(struct dailytemp *dt) {
    dt->hour = 0;
    for(int i = 0; i<24; i++){
        dt->temp[i] = 0;
    }
    dt->max = 0;
    dt->min = 0;
    dt->avg = 0;
}

void dtAdd(struct dailytemp *dt, int tmp){ 
    if(tmp > -50 && tmp < 50){
        dt->temp[dt->hour]=tmp;
        dt->hour++;
    }
}

void dtState(struct dailytemp *dt);
