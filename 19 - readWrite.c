#include <stdio.h>

int main(void){

	char string[40];
	char string2[40];

	printf("Enter a phrase: \n");
	scanf("%[^\n]s\n", string);
	printf("%s\n", string);

	printf("Enter a phrase: \n");
	gets(string2);
	printf("%s\n", string2);

	return 0;
}