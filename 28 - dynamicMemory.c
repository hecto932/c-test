#include <stdio.h>
#include <stdlib.h>

// malloc sirve para asignar memoria dinamica
// free sirve para liberar memoria dinamica
// realloc realocar la memoria

int main(void) {

	// Estatic memory 
	int a;
	a = 3;
	printf("%d\n", a);


	// Dynamic memory
	void * p1 = NULL;
	printf("Int size: %u\n", sizeof(int));
	p1 = malloc(sizeof(int));

	int * p1_convertered = (int *)p1;

	*p1_convertered = 3;

	printf("%d\n", *p1_convertered);

	

	return 0;
}