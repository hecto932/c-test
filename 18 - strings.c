#include <stdio.h>

int main(void) {
	char name[7];

	name[0] = 'H';
	name[1] = 'E';
	name[2] = 'C';
	name[3] = 'T';
	name[4] = 'O';
	name[5] = 'R';
	name[6] = '\0';

	printf("%s\n", name);

	char name2[] = "Hector Jose Flores Colmenarez";
	printf("%s\n", name2);

	printf("Second value [2] in name is: %c\n", name2[2]);

	return 0;
}