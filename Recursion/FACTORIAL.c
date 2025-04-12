#include <stdio.h>
#include <stdlib.h>

int factorial(int number){
	
	if(number == 0 || number == 1){
		return 1;
	}
	else{
		return number * factorial(number - 1);
	}
	
}

int main(){
	
	int number;
	
	printf("Digite um numero para calcular a fatorial: ");
	scanf("%d", &number);
	printf("\n%d! = %d", number, factorial(number));	
	
	return 0;
}
