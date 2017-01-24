#include <stdio.h>
#include <string.h>

struct Alumno {
	int nota;
	char name[40];
	int old;
};

int main(void){
	int x;
	struct Alumno a1;

	a1.nota = 4;
	strcpy(a1.name, "Hector");
	a1.old = 24;

	printf("Alumno: %s de %d de edad tiene %d\n", a1.name, a1.old, a1.nota);
}