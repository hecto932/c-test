#include <stdio.h>

int main(void){

	int b = 5;

	int * pointer;

	pointer = &b;

	printf("b: %d\n", b);
	printf("pointer: %p\n", pointer);
	printf("pointer: %d\n", *pointer);

	*pointer = 10;

	printf("pointer: %d\n", *pointer);

	return 0;
}