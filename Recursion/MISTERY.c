#include <stdio.h>
#include <stdlib.h>

int X(int a){
	if ( a <= 0 ){
		return 0;	
	}
	else{
		return a + X(a-1);	
	}
}

int main(){
	
	int a;
	
	printf("Entre com um valor: ");
	scanf("%d", &a);
	
	printf("%d ", X(a));
	
	return 0;
}
