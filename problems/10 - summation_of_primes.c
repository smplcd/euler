#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#define PRIMEUNDER 2000000

bool is_prime(int x);

int main(int argc, char *argv[]){
	uint64_t prime_sum = 2;

	for (int i=3; i<PRIMEUNDER; i+=2){
		if (is_prime(i)) prime_sum += i;
	}

    printf("Sum of Prime numbers unders %d: %llu\n", PRIMEUNDER, prime_sum);
    return 0;
}

bool is_prime(int x){
	if (x < 2) return false;
	if (x < 4) return true;
	if (x % 2 == 0 || x % 3 == 0) return false;

    for(int i=5; i*i<=x; i+=6){
        if(x % i == 0 || x % (i+2) == 0) return false;
    }
	return true;
}
