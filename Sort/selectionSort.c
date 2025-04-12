#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

void selectionSort(int *array, int size){
	
	for(int i = 0; i < size; i++){
		int lower = i;
		for(int j = i + 1; j < size; j++){
			if(array[j] < array[lower]){
				lower = j;
			}
		int aux = array[i];
		array[i] = array[lower];
		array[lower] = aux;
		}
	}
}

void printArray(int *array, int size){
	for(int i = 0; i < size; i++){
		printf("[%d] ", array[i]);
	}
	printf("\n\n");
}

int main(){
	
	int array[SIZE] = {6, 8, 9, 4, 3, 7, 1};
	
	printf("Array original: ");
	printArray(array, SIZE);
	
	selectionSort(array, SIZE);
	
	printf("Array ordenado: ");
	printArray(array, SIZE);
	
	return 0;
}
