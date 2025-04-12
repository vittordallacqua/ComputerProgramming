#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int arrayProduct(int v[], int size){
	
	if(size == 0){
		return 1;
	}
	else{
		if(v[size - 1] > 0){
			return v[size - 1] * arrayProduct(v, size - 1); 
		}
		else{
			return arrayProduct(v, size - 1);
		}
	}
	
}

int main(){
	
	int v[SIZE] = {1, -6, 7, 9, -13};
	
	printf("Produto do vetor: %d", arrayProduct(v, SIZE));	
	
	return 0;
}
