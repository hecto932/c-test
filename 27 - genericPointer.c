#include <stdio.h>

int main() {

	int x = 5;
	int * intPointer;

	intPointer = &x;

	*intPointer+=2;

	printf("%d\n", x);

	x = 5;

	void * genericPointer;

	genericPointer = &x;

	* (int *)genericPointer += 3;

	printf("%d\n", x);

	return 0;
}