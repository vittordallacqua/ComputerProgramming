#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(){
	
	int i;
	int *p;
	
	p = (int *) malloc(SIZE*sizeof(int));
	if(p == NULL){
		printf("ERRO: Memoria insuficiente.");
	}
	
	printf("Digite 5 numeros inteiros: \n");
	for(i = 0; i < SIZE; i++){
		printf("N%d: ", i);
		scanf("%d", &p[i]);
	}
	
	printf("\nOs numeros digitados foram: \n");
	for(i = 0; i < SIZE; i++){
		printf("N%d: %d\n", i, p[i]);
	}
	
	free(p);
	
	return 0;
}
