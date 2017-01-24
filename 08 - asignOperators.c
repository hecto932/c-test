// Asign Operators

// a++ : a = a + 1
// a+=b : a = a + b
// a-- : a = a - 1
// a-=b : a = a - b
// a/=b : a = a / b
// a*=b : a = a * b
// nivel de bits
// >>= : de izquierda
// <<= : de derecha

#include <stdio.h>

int main (){
	int a = 0, b = 3;
	a++;

	printf("a: %d\n", ++a);
	printf("a: %d\n", a);

	return 0;
}