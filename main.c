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

/**
 * @brief This function initializes the struct dailytemp
 * 
 * All the values of the struct are set to 0, allocating the memory for the array temp
 * that stores all the temperatures during the day (24 hours limit).
 * 
 * @param dt This is the structure that will be initialized.
*/
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

/**
 * @brief This function calculates the max, min and avg temperatures during the day, displaying them.
 * 
 * The function will navegates through the array temp until reaching the last hour inserted
 * calculating the max, min and avg temperatures.
 * 
 * @param dt This is the structure that will be used for the math, later to be displayed.
 * 
*/
void dtStat(struct dailytemp *dt){
    int sum = 0;
    int max = 0;
    int min = 0;
    for(int i = 0; i < dt->hour; i++){
        if(dt->temp[i] > max){
            max = dt->temp[i];
        }
        if(dt->temp[i] < min){
            min = dt->temp[i];
        }
        sum += dt->temp[i];
    }
    dt->max = max;
    dt->min = min;
    dt->avg = sum/dt->hour;
    printf("Max: %d, Min: %d, Avg: %d\n", dt->max, dt->min, dt->avg);
}