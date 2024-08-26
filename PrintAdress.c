#include <stdio.h>

void printAddress(int*);

void main() {

	int a = 192884;

	printf("Value: %d\n", a);
	printf("The address in main: %p\n", &a);
	printAddress(&a);

}

void printAddress(int* address) {

	printf("The address in printAddress: %p\n", address);
}