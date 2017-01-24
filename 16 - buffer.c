#include <stdio.h>

int main() {

	int a;
	int b;


	printf("First value?\n");
	fflush(stdin);
	scanf("%d", &a);


	printf("Second value?\n");
	scanf("%d", &b);
	fflush(stdin);
	
	printf("\n a = %d", a);
	printf("\n b = %d", b);


	return 0;
}