#include <stdio.h>

int main(int argc, char *argv[]){
    int nsum, x, y;
    nsum = 0;
    x = 1;
    y = 2;

    while (x < 4000000){
        if (x % 2 == 0){
            nsum += x;
        }

        y += x;
        x = y - x;
    }

    printf("%d\n", nsum);
    return 0;
}
