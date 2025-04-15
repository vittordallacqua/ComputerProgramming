#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");

	int i, size, *array;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	array = malloc(size * sizeof(int));

	if(array){
		printf("Memory allocated successfully!\n\n");
		for(i = 0; i < size; i++){
			printf("Enter the values for Array[%d]: ", i);
			scanf("%d", &array[i]);
		}
		printf("\n");
		for(i = 0; i < size; i++){
			printf("Array[%d] = %d\n", i, array[i]);
		}
	}
	
	else{
		printf("Error allocating memory!");
	}
	
	return 0;
}
