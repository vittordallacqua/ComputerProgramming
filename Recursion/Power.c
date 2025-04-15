#include <stdio.h>
#include <stdlib.h>

int powOfAB(int a, int b){
	
	if(b == 0){
		return 1;
	}
	else{
		if(b == 1){
			return a;
		}
		else{
			return a * powOfAB(a, b - 1);
		}	
	}
}

int main(){
	
	int a, b;
	
	printf("Digite a base: ");
	scanf("%d", &a);
	
	printf("Digite o expoente: ");
	scanf("%d", &b);
	
	printf("\n%d^%d = %d", a, b, powOfAB(a, b));	
	
	return 0;
}
