#include <stdio.h>

void main() {

	int a[2];

	printf("address a: %p, address b: %p\n", &a[0], &a[1]);
	int difference = &a[1] - &a[0];
	printf("difference: %d\n", difference);
	printf("difference: %d\n", sizeof(a[0]));
}*/