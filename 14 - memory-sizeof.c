#include <stdio.h>

int main(){
	int i = 7;
	int size, address;

	size = sizeof(int);
	address=&i;

	printf("i: %d\n", i);
	printf("Size: %d bytes\n", size);
	printf("address: %p\n", address);

	return 0;
}