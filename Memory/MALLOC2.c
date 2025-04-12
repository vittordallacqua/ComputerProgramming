#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, size;
	int *p;
	
	printf("Qual o tamanho do vetor? ");
	scanf("%d", &size);
	
	p = (int *) malloc(size*sizeof(int));
	if(p == NULL){
		printf("ERRO: Memoria insuficiente.");
	}
	
	printf("\nDigite os valores inteiros: \n");
	for(i = 0; i < size; i++){
		printf("Array[%d]: ", i);
		scanf("%d", &p[i]);
	}
	
	for(i = 0; i < size; i++){
		printf("Array[%d]: %d\n", i, p[i]);
	}
	
	free(p);
	
	return 0;
}
