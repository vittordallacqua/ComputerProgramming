#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* searchString(char *context, char *word){
	
	char *ptr = strstr(context, word);
	
	if(ptr){
		return ptr;
	}
	else{
		return printf("Palavra '%s' nao encontrada.", word);
	}
}

int main(){
	
	char context[] = "I fucking love BMTH";
	char word[] = "love";
	
	char *result = searchString(context, word);
	
	printf("A palavra (substring) '%s' foi encontrada em: '%s'", word, result);
	
	return 0;
}
