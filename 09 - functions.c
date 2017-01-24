#include <stdio.h>

int ardilla (void){
	int something = 3;

	return something;
}

void no_return_anything(void){
	printf("Won't return anything!\n");
}

int square(int n){
	int side = n * n;
	return side;
}

int main(){
	int x;

	printf("Hola\n");
	x = ardilla();

	printf("%d\n", x);

	no_return_anything();

	int n = 5, result;

	result = square(n);

	printf("%d\n", result);
}