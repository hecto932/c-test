#include <stdio.h>

int main(void) {

	int vector[4];

	for(int i = 0; i < 5; ++i){
		vector[i] = i+1;
		printf("%d\n", vector[i]);
	}

	int * pointer1 = &vector[0];
	int * pointer2 = &vector[2];

	printf("Antes pointer1: %d\n", *pointer1);
	printf("Antes pointer2: %d\n", *pointer2);

	pointer1++;
	pointer2++;

	printf("Despues pointer1: %d\n", *pointer1);
	printf("Despues pointer2: %d\n", *pointer2);

	return 0;
}