#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *file;
	
	file = fopen("dados.bin", "wb");
	
	if(file == NULL){
		printf("ERRO: Nao foi possivel criar o arquivo.");
	}
	else{
		for(int i = 1; i <= 100; i++){
			fprintf(file, "%d\n", i);
		}
	}

	fclose(file);
	
	printf("Arquivo salvo.");
	
	return 0;
}

