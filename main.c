// Main File for the project

/** @file main.c
 * @brief main.c file brief decription 
 *
 * Follows the detailed description of main.c. It is separated from 
 * the brief one by a blank line.
 * In this case main.c is the file that contains the main() function. 
 * 
 * @author Paulo Pedreiras
 * @date 3 March 2022
 * @bug No known bugs.
 */

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
