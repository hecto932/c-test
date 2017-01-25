#include <stdio.h>

int main(void){

	char string[] = "I'm the old form!";
	printf("%s\n", string);

	char * newString = "I'm the new form!";
	printf("%s\n", newString);

	char * string2;

	string2 = &string;

	printf("Asignacion : %s\n", string2);


	return 0;
}