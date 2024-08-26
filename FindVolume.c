#include <stdio.h>
#define PI 3.14


double findVolume(double radius, double height);

void main() {

	printf("Enter radius of cylinder: ");
	double radius;
	scanf_s("%lf", &radius);

	printf("Enter height of cylinder: ");
	double height;
	scanf_s("%lf", &height);

	double volumeCylinder;
	volumeCylinder = findVolume(radius, height);

	printf("The volume of the cylinder is %lf\n", volumeCylinder);
}


double findVolume(double radius, double height) {

	return PI * radius * radius * height;
}
