#include <stdio.h>
#include <stdlib.h>

int func(int n){
	if(n == 0){
		return 0;
	}
	else{
		return n + func(n - 1);
	}
}

int main(){
	
	int n;
	
	printf("Digite o valor maximo maior que 0: ");
	scanf("%d", &n);
	printf("\n");
	
	printf("1 -> %d = %d\n", n, func(n));
	
	return 0;
}
