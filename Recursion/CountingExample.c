#include <stdio.h>
#include <stdlib.h>

void print(int n){
	if(n == 0){
		printf("%d ", n);
	}
	else{
		// printf("%d ", n);
		print(n - 1);
		printf("%d ", n);
	}
}

int main(){
	
	int n;
	
	printf("Digite qualquer valor maior que 0: ");
	scanf("%d", &n);
	printf("\n");
	
	print(n);
	
	return 0;
}
