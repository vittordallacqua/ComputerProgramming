#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 100, *b, **c, ***d;

	b = &a;
	c = &b;
	d = &c;
	
	printf("Address of A: %p\t|  Content of A: %d\n", &a, a);
	
	printf("\nAddress of B: %p\t|  Content of B: %p\n", &b, b);
	printf("Content pointed by B: %d\n", *b);
	
	printf("\nAddress of C: %p\t|  Content of C: %p\n", &c, c);
	printf("Content pointed by C: %d\n", **c);
	
	printf("\nAddress of D: %p\t|  Content of D: %p\n", &d, d);
	printf("Content pointed by D: %d\n", ***d);

	return 0;	
}
