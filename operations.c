#include <stdio.h>

int main() {
	int var1, var2, resultado;
	var1 = 2;
	var2 = 11;

	resultado = var1 + var2;

	printf("%d + %d = %d\n", var1, var2, resultado);

	resultado = var2 - var1;

	printf("%d - %d = %d\n", var2, var1, resultado);

	resultado = var1 * var2;

	printf("%d * %d = %d\n", var1, var2, resultado);

	resultado = var2 / var1;

	printf("%d / %d = %d\n", var2, var1, resultado);

	resultado = var2 % var1;

	printf("%d %% %d = %d\n", var2, var1, resultado);

	return 0;

}