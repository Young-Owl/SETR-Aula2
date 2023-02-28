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

void dtInit(struct dailytemp *dt);
void dtAdd(struct dailytemp *dt, int temp);
void dtState(struct dailytemp *dt);
