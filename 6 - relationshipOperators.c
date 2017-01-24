#include <stdio.h>

int main() {
	int a = 3, b = 5, c = 3, resultado;

	resultado = (a < b);
	printf("a < b %d\n", resultado);

	resultado = (a > b);
	printf("a > b %d\n", resultado);

	resultado = (a == b);
	printf("a == b %d\n", resultado);

	resultado = (a == c);
	printf("a == c %d\n", resultado);

	printf("%d\n", 0 ? 0 : 1);

	printf("%d\n", 1 ? 1 : 0);

	return 0;
}