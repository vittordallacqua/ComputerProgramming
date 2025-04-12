#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char fileName[100];
	char line[100];
	FILE *file;
	
	printf("Digite o nome do arquivo: ");
	scanf("%s", &fileName);
	
	file = fopen(fileName, "r");
	
	if(file == NULL){
		printf("ERRO: Nao foi possivel abrir o arquivo.");
	}
	else{
		printf("\nConteudo de '%s': \n\n", fileName);
		while(fscanf(file, "%[^\n]\n", line) != EOF){
		printf("%s\n", line);
		}
	}
	
	fclose(file);
	
	return 0;
}

