#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int sum(int array[], int size){
	if(size == 0){
		return 0;
	}
	else{
		return array[size - 1] + sum(array, size - 1);
	}
}

int main(){
	
	int array[SIZE];
	
	printf("Digite os valores para popular o vetor.\n\n");
	for(int i = 0; i < SIZE; i++ ){
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	
	printf("\nSoma = %d", sum(array, SIZE));
	
	return 0;
}
