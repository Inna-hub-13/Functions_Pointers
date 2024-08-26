#include <stdio.h>
#define SIZE 10

int findMaxElement(int*);
void fillArray(int*);
void printArray(int*);

void main() {

	int arr[SIZE];
	fillArray(arr);
	printArray(arr);
	printf("Max element found: %d\n", findMaxElement(arr));
	printf("Size arr: %d\n", sizeof(arr) / sizeof(arr[0]));
}

void fillArray(int* a) {

	for (int i = 0; i < SIZE; i++) {

		printf("Enter element number %d: ", (i + 1));
		scanf_s("%d", &a[i]);
	}
}

void printArray(int* a) {

	printf("\nArray: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}

	printf("\n\n");
}

int findMaxElement(int* a) {

	int max = a[0];

	for (int i = 1; i < SIZE; i++) {

		if (a[i] > max)
			max = a[i];
	}
	

	return max;
}