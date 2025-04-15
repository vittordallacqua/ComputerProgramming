#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int *x;
	
	x = malloc(sizeof(int));
	
	if(x){
		printf("Memory allocated successfully!\n");
		printf("x: %d\n", *x);
		*x = 50;
		printf("x: %d\n", *x);
	}
	else{
		printf("Error allocating memory!\n");
	}
	
	return 0;
}
