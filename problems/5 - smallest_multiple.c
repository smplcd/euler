#include <math.h>
#include <stdint.h>
#include <stdio.h>

#define UPPER 10
#define LOWER 1

uint64_t greatest_common_denominator(uint64_t x, int y);
uint64_t lowest_common_multiplier(uint64_t x, int y);

int main(int argc, char *argv[]){
	uint64_t product = LOWER;

	for(int i=fmax(2 ,LOWER); i<UPPER; i++){
		product = lowest_common_multiplier(product, i);
	}

	printf("Largest Number evenly divisible by all numbers between %d and %d: %llu\n", LOWER, UPPER, product);
	return 0;
}

uint64_t greatest_common_denominator(uint64_t x, int y){
	int n;
	for (int i=1; i<=x && i<=y; i++){
		if (x % i == 0 && y % i == 0){
			n =  i;
		}
	}
	return n;
}

uint64_t lowest_common_multiplier(uint64_t x, int y){
	return ((x * y) / greatest_common_denominator(x, y));
}