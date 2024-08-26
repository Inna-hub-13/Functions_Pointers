#include <stdio.h>

int add(int*, int*);


void main() {

	int a = 10;
	int b = 23;

	int sum;
	sum = add(&a, &b);
	printf("The sum of %d and %d is %d\n", a, b, sum);

}

int add(int* addressNum1, int* addressNum2) {

	return *addressNum1 + *addressNum2;
}