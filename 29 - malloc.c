#include <stdio.h>
#include <stdlib.h>

int main(void) {

	void * p1 = malloc(sizeof(int));

	if(p1 == NULL)
		printf("Error: La memoria esta llena.\n");
	else
		printf("Memoria asignada a p1 correctamente\n");

	free(p1); // Libera la memoria apuntada

	return 0;
} 