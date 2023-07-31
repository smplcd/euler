#include <stdint.h>
#include <stdio.h>

#define UPPER 100

int main(int argc, char *argv[]){
	uint64_t sum_of_squares = 0;
	uint64_t square_of_the_sum = 0;

	for (int i=1; i<=UPPER; i++){
		sum_of_squares += i*i;
		square_of_the_sum += i;
	}
	square_of_the_sum *= square_of_the_sum;
	
	printf("Difference between the sum of the squares of the first %d natural "
	       "numbers and the square of their sum: %llu\n",
		   UPPER, square_of_the_sum - sum_of_squares);
	return 0;
}
