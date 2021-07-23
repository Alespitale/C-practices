#ifndef _WEATHER_H
#define _WEATHER_H

#include "array_helpers.h"


int min_temp(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS]);


void max_temp_year(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], int output[YEARS]);


void mes_prec(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], t_month outp[YEARS]);

#endif