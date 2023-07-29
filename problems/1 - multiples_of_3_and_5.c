#include <stdio.h>

int main(int argc, char *argv[]){
    int nsum = 0;

    for (int i=0; i<1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            nsum += i;
        }
    }

    printf("%d\n", nsum);
    return 0;
}
