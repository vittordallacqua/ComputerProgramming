#include <stdio.h>
#include <stdlib.h>

void print(int array[], int size){
		
	int i;
	
	for(i = 0; i < size; i++){
		printf("Array[%d] = %d", i, *(array + i));
		printf("\n");
	}
}

int main(){

	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	print(array, 10);

	return 0;
}
