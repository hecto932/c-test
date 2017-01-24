#include <stdio.h>

int main(){

	int vector[3];

	vector[0] = 1;
	vector[1] = 2;
	vector[2] = 3;
	vector[3] = 4;

	for(int i = 0; i < 4 ; ++i){
		printf("%d\n", vector[i]);
	}

	return 0;
}