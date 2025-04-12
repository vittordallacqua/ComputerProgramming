#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	
	if(n == 1){
		return 0;
	}
	else{
		if(n == 2){
			return 1;
		}
		else{
			return fib(n - 1) + fib(n - 2);
		}
	}
}

int main(){
	
	int n;
	
	printf("Digite o termo da sequencia: ");
	scanf("%d", &n);
	printf("\n");
	
	printf("Fibonacci(%d) = %d\n", n, fib(n));
	
	return 0;
}
