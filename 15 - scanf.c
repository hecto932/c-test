#include <stdio.h>

int main(void){
	int number, result;

	printf("Put a natural number please?\n");
	scanf("%d", &number);

	result = number * number;

	printf("%d\n", result);

	return 0;
} 