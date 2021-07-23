#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "array_helpers.h"
#include "weather.h"

int min_temp(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS]){
	int temp_min = a[0][0][0][2];
	for(unsigned int year=0u; year < YEARS; year++){
		for(unsigned int month=0u; month < MONTHS; month++){
			for(unsigned int day=0u; day < DAYS; day++){
				if (temp_min > a[year][month][day][2]){
				 	temp_min = a[year][month][day][2];
				}
			}
		}
	}
return temp_min;
}

void max_temp_year(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], int output[YEARS]){
    int max;
    for(unsigned int year=0u; year < YEARS; year++){
        max = a[year][0][0][1];
        for(unsigned int month=0u; month < MONTHS; month++){
            for(unsigned int day=0u; day < DAYS; day++){
                if (max < a[year][month][day][1]){
                    max = a[year][month][day][1];
                }
            }
        }
        output[year]=max;
    }
    printf("La mayor temperatura maxima registrada de cada año entre 1980 y 2016 en Cordoba es : [");
    for(unsigned int year=0u; year < YEARS; year++){
    if(year == YEARS-1){
        printf("%d]\n", output[year]);
        }else{
        printf("%d, ", output[year]);
        }
    }
}

void mes_prec(int a[YEARS][MONTHS][DAYS][PHYS_QTTYS], t_month outp[YEARS]){
    int max, res;
    for(unsigned int year=0u; year < YEARS; year++){
        max=0;
        for(unsigned int month=0u; month < MONTHS; month++){
            res=0;
            for(unsigned int day=0u; day < DAYS; day++){
                res= res + a[year][month][day][5];
            }
            if (max < res){
                max= res;
                outp[year]= month;
            }
        }
    }
    printf("Los meses con mayor precipitacion entre 1980 y 2016 en Cordoba es : [");
    for(unsigned int year=0u; year < YEARS; year++){
    if(year == YEARS-1){
        printf("%d]\n", outp[year]+1);
        }else{
        printf("%d, ", outp[year]+1);
        }
    }
}
