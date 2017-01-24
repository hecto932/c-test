#include <stdio.h>

void print(void){
	printf("Welcome to my program!\n");
}

double add(double v1, double v2){
	double v3;

	v3 = v1 + v2;

	return v3;
}

double multiplication(double x, double y){
	double z;

	z = x * y;

	return z;
}

int main(void) {
	double a = 2.5, b = 3, result;

	print();

	result = add(a, b);

	printf("%f\n", result);

	result = multiplication(a, b);

	printf("%f\n", result);

	return 0;
}