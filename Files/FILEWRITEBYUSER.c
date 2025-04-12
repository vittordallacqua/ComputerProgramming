#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char line[100];
	char character[100];
	FILE *file;
	
	file = fopen("arq.txt", "w");
	
	if(file == NULL){
		printf("ERRO: Nao foi possivel criar o arquivo.");
	}
	else{
		printf("Digite caracteres para serem salvos em arquivo: \n");
		scanf("%s", &character);
		fprintf(file, "%s", character);
	}

	fclose(file);
	
	printf("Arquivo salvo.");
	
	return 0;
}

