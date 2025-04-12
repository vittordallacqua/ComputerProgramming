#include <stdio.h>
#include <stdlib.h>

int nonRecursiveX(int a){
	int soma = 0;
	
	for(int i = 1; i <= a; i++){
		soma += i;
	}
	
	return soma;
}

int main(){
	
	int a;
	
	printf("Entre com um valor: ");
	scanf("%d", &a);
	
	printf("%d", nonRecursiveX(a));
	
	return 0;
}
