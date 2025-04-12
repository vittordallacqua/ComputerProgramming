#include <stdio.h>
#include <stdlib.h>

int reverseOrder(int n){
	int num;
	
	if(n > 0){
		scanf("%d", &num);
		reverseOrder(n - 1);
		printf("%d ", num);
	}

}

int main(){
	
	int n;
	
	printf("Digite o tamanho da sequencia: ");
	scanf("%d", &n);
	
	printf("Digite os valores da sequencia: ");
	reverseOrder(n);

	return 0;
}
