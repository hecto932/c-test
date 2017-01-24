#include <stdio.h>

int main() {
	int x = 1, y = 2, z;

	if(x < y){
		printf("x es menor que y\n");
	}
	else if(x > y){
		printf("x es mayor que y\n");
	}
	else{
		printf("x es igual a y\n");
	}

	return 0;
}