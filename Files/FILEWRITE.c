#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char line[100];
	FILE *file;
	
	file = fopen("dados.txt", "w");
	
	if(file == NULL){
		printf("ERRO: Nao foi possivel criar o arquivo.");
	}
	else{
		for(int i = 1; i <= 100; i++){
			fprintf(file, "%d\n", i);
		}
		printf("Arquivo salvo.");
	}

	fclose(file);
	
	return 0;
}

