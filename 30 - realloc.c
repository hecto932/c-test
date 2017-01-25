#include <stdio.h>

int main() {	

	void * dynamicVector = NULL;
	void * dynamicVector6 = NULL;
	int  * converVector = NULL;

	dynamicVector = malloc(4 * sizeof(int));

	if(dynamicVector == NULL)
		printf("No se pudo asignar memoria\n");
	
	converVector = (int *)dynamicVector;
	converVector[0] = 1;
	converVector[1] = 2;
	converVector[2] = 3;
	converVector[3] = 4;

	dynamicVector6 = realloc(dynamicVector, 6 * sizeof(int));

	if(dynamicVector6 == NULL)
		printf("No se pudo asignar memoria\n");

	converVector = (int *) dynamicVector6;

	printf("El nuevo vector en el [3] : %d\n",converVector[3]);

	converVector[4] = 5;
	converVector[5] = 6;

	printf("El nuevo vector en el [4] : %d\n",converVector[4]);
	printf("El nuevo vector en el [5] : %d\n",converVector[5]);

	return 0;
} 