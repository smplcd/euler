#include <stdint.h>
#include <stdio.h>

#define MAXPRIMEFN 64

int main(int argc, char *argv[]){
    uint64_t prime = 600851475143;

    int primef[MAXPRIMEFN];
    int *pprimef = primef;

    int n = 2;

	while (n * n <= prime){
        if (prime % n == 0){
            *pprimef++ = n;
            prime /= n;
        }
        else{
            n++;
        }
    }
    *pprimef = prime;

    printf("Biggest Prime Factor: %d\n", *pprimef);
    return 0;
}

