#include <stdio.h>

int findGCD(int, int);

void main() {

	printf("The largest common dividor of 1688, 146 is %d\n", findGCD(1688, 146));
	printf("The largest common dividor of 5000, 125 is %d\n", findGCD(5000, 125));
	printf("The largest common dividor of 13, 16 is %d\n", findGCD(13, 16));
	

}

int findGCD(int number1, int number2) {

	int gcd = (number2 > number1) ? number1 : number2;

	do {
		if (number2 % gcd == 0 && number1 % gcd == 0)
			return gcd;
		else
			gcd--;
	} while (gcd != 1);

	return gcd;
}