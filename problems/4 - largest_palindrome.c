#include <stdio.h>

int is_palindrome(int n);

int main(int argc, char *argv[]){
    int i, j, k;
    int maxpalindrome = 0;
    int products[2] = {0, 0};

    for (j=999; j>99; j--){
        for (i=999; i>99; i--){
            k = i * j;
            if (k > maxpalindrome && is_palindrome(k)){
                maxpalindrome = k;
                products[0] = i;
                products[1] = j;
            }
        }
    }
    printf("Largest Palindrome made from the product of two 3-digit numbers: %d * %d = %d\n",
            products[0], products[1], maxpalindrome);
    return 0;
}

int is_palindrome(int n){
    int r = 0;
    int t = n;

    while (t > 0){
        r = r * 10 + (t % 10);
        t /= 10;
    }

    return (n == r);
}
