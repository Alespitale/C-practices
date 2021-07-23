#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "helpers.h"
#include "sort.h"

static bool goes_before(unsigned int x, unsigned int y) {
    bool r=false;
    if (x<=y){
        r=true;
    }
    return r;
}

bool array_is_sorted(player_t atp[], unsigned int length) {
    unsigned int i = 1;
    while (i < length && goes_before(atp[i - 1].rank, atp[i].rank)) {
        i++;
    }
    return (i == length);
}

void swap(player_t atp[], unsigned int i, unsigned int j){
	player_t tmp;
	tmp =atp[i];
	atp[i]=atp[j];
	atp[j]=tmp;
}

static void insert(player_t atp[], unsigned int i){
    unsigned int j=i;
	while (j>=1 && goes_before(atp[j].rank, atp[j-1].rank)){
		swap(atp,j,j-1);
		j= j-1;
	}
}

void sort(player_t atp[], unsigned int length) {
    for (unsigned int i =1u; i < length; ++i){
        insert(atp,i);
        assert(array_is_sorted(atp,i));
    }
}

