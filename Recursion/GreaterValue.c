#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int higher(int array[], int size, int aux){
	if(size == 0){
		return array[auxiliar];
	}
	else{
		if(array[size - 1] > array[auxiliar]){
			return higher(array, size - 1, size);
		}
		else{
			return higher(array, size - 1, aux)
		}
	}
} 

int main(){
	
	int array[SIZE];
	
	printf("Digite os valores para popular o vetor.\n\n");
	for(int i = 0; i < SIZE; i++ ){
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	
	printf("\nMaior valor = %d", higher(array, SIZE, 0));
	
	return 0;
}
