#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, size;
	int even = 0, odd = 0;
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
		if(p[i] % 2 == 0){
			even++;
		}
		else{
			odd++;
		}
	}
	
	printf("\n%d numeros sao pares\n", even);
	printf("%d numeros sao impares", odd);
		
	free(p);
	
	return 0;
}
