#include <stdio.h>

void swap(int*, int*);

void main() {

	int a = 13;
	int b = 36;

	printf("a is %d, b is %d\n", a, b);
	swap(&a, &b);
	printf("After swap: a is %d, b is %d\n", a, b);
}

void swap(int* address1, int* address2) {

	int temp = *address1;
	*address1 = *address2;
	*address2 = temp;
}