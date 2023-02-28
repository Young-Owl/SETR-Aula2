#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "dailytemp.h"

void dtAdd(struct dailytemp *dt, int tmp){ 
    if(tmp > -50 && tmp < 50){
        dt->temp[dt->hour]=tmp;
    }
}