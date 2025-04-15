#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int feeCalculator(float balance, float fare){
	
	return balance * (fare / 100);
}

int main(){
	
	float balance, fare, fee, newBalance;
	
	printf("Digite o saldo: ");
	scanf("%f", &balance);
	printf("Digite a taxa: ");
	scanf("%f", &fare);
	
	fee = feeCalculator(balance, fare);
	newBalance = balance + fee;
	
	printf("\nJuros: %.2f \t Saldo Atualizado: %.2f", fee, newBalance);

	return 0;
}
