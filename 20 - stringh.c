#include <stdio.h>
#include <string.h>

int main(void){

	char string[] = "Hola como estas ?";
	char string2[] = "Mi nombre es Hector";

	printf("%s\n", string);
	printf("%s\n", string2);

	strcpy(string, string2);

	printf("%s\n", string);

	printf("Length: %d\n", (int)strlen(string));

	printf("Equal ? : %d\n", strcmp(string, string2));

	return 0;
}