#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "dailytemp.h"

void dtInit(struct dailytemp *dt) {
    dt->hour = 0;
    for(int i = 0; i<24; i++){
        dt->temp[i] = 0;
    }
    dt->max = 0;
    dt->min = 0;
    dt->avg = 0;
}