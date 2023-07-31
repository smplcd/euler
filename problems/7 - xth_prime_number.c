#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#define PRIMEN 10001

bool is_prime(int x);
int find_next_prime(int x);

int main(int argc, char *argv[]){
	int nth_prime = 2;
	for (int i=1; i<PRIMEN; i++){
		nth_prime = find_next_prime(nth_prime);
	}

    printf("%dth Prime Number: %d\n", PRIMEN, nth_prime);
    return 0;
}

bool is_prime(int x){
	if (x < 2) return false;
	if (x == 2) return true;

    for(int i=3; i*i<=x; i+=2){
        if(x % i == 0){
            return false;
        }
    }
	return true;
}

int find_next_prime(int x){
	if (x == 2) return 3;

	for(;/*ever*/;){
		x += 2;
		if (is_prime(x)) return x;
	}
}

