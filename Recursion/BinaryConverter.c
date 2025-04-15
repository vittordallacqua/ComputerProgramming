#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void decimalBinary(int num){
	if(num > 0){
		decimalBinary(num / 2);
		printf("%d", num % 2);
	}
}

int main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num == 0){
		printf("0");
	}
	else{
		printf("\n%d na forma binaria: ", num);
		decimalBinary(num);
	}
			
	return 0;
}
