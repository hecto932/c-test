#include <stdio.h>
#include <stdlib.h>

typedef struct contacto{
	int edad;
	long tel;
} contacto_t;

int main() {

	// Estatic form
	/*contacto_t c1;
	c1.edad = 3;
	c1.tel = 5569324346;
	printf("Edad: %d\n", c1.edad);
	printf("Telefono: %ld\n", c1.tel);*/

	// Dynamic Form
	contacto_t * c1 = malloc(sizeof(contacto_t));
	c1->edad = 3;
	c1->tel = 5569324346;

	printf("Edad: %d\n", c1->edad);
	printf("Telefono: %ld\n", c1->tel);

	free(c1);

	return 0;
}