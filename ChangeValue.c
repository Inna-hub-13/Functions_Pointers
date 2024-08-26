#include <stdio.h>

void setValue(int*,int);

void main() {

	int a = 100;
	int* pa = &a;

	printf("a: %d\n", a);

	*pa = 11;
	printf("After *pa a: %d\n", a);

	setValue(&a, 122);
	printf("Ater setValue a: %d\n", a);

}

void setValue(int* address, int value) {

	*address = value;
}