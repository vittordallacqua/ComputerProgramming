#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 9;
	int *b, **c, ***d;
	
	b = &a;
	c = &b;
	d = &c;
	
	printf("Dobro de A = %d \t", *b * 2);
	printf("Triplo de A = %d \t", **c * 3);
	printf("Quartuplo de A = %d\n", ***d * 4);
		
	return 0;
}
