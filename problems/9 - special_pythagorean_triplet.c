#include <stdio.h>

#define SUM 1000

int get_product_of_pythagorean_triplet_of_specific_sum(int sum);

int main(int argc, char *argv[]){
	int prod = (int) get_product_of_pythagorean_triplet_of_specific_sum(SUM);

	printf("Product of abc: %d\n", prod);
	return 0;
}

int get_product_of_pythagorean_triplet_of_specific_sum(int sum){
	for (int a=3; a<sum; a++){
		for (int b=4; b<sum;b++){
			int c = sum - a - b;
			if (c*c == a*a + b*b) return a*b*c;
		}
	}
	return 0;
}
