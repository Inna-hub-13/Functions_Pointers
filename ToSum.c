#include <stdio.h>

static double toSum(double, double);

void main() {

	double a, b;
	printf("Enter a: ");
	scanf_s("%lf", &a);

	printf("Enter b: ");
	scanf_s("%lf", &b);

	double sum = toSum(a, b);
	printf("The sum of %lf and %lf is %lf\n", a, b, sum);
}

double toSum(double a, double b) {

	return a + b;
}