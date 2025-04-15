#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct{
	char name[50];
	int age;
	char sex;
}Person;

Person list[SIZE];
int number = 0;

int register_person(){
	if(number < SIZE){
		
		Person p;
		scanf("%*c");
		printf("Name: ");
		fgets(p.name, 50, stdin);
		printf("Age and Sex (M or F): ");
		scanf("%d %c", &p.age, &p.sex);
		list[number] = p;
		number++;
		
		return 1;
	}
	else{
		printf("ERROR: Array is full.\n\n");
		
		return 0;
	}
}

void print_array(){
	int i;
	if(number){
		for(i = 0; i < number; i++){
			printf("Name: %s", list[i].name);
			printf("Age: %d\t Sex: %c\n\n", list[i].age, list[i].sex);
 	}
	}
	else{
		printf("There are no saved records.\n");
	}
}

void save_to_file(){
	FILE *log = fopen("log.txt", "w");
	int i;
	
	if(log){
		fprintf(log, "%d\n", number);
		for(i = 0; i < number; i++){
			fprintf(log, "Name: %s", list[i].name);
			fprintf(log, "Age: %d\n", list[i].age);
			fprintf(log, "Sex: %c\n", list[i].sex);
		}
		fclose(log);
	}
	else{
		printf("ERROR: Could not save the file.\n\n");
	}
}


void read_file(){
	FILE *log = fopen("log.txt", "r");
	int i;
	
	if(log){
		fscanf(log, "%d\n", &number);
		for(i = 0; i < number; i++){
			Person p;
			fgets(p.name, 50, log);
			fscanf(log, "Age: %d\n", &p.age);
			fscanf(log, "Sex: %c\n", &p.sex);
			list[i] = p;
		}
		fclose(log);
	}
	else{
		printf("ERROR: Could not open the file.\n\n");
	}
}

int main(){
	
	int op;
	
	printf("MENU: \n");
	
	do{
		printf("\n1 - Register\n2 - Print Registers\n3 - Save to file\n4 - Read file\n0 - Exit\n\n");
		printf("Option: ");
		scanf("%d", &op);
		
		switch(op){
			case 0:
				printf("Bye!");
				break;
			case 1:
				register_person();
				break;
			case 2:
				print_array();
				break;
			case 3:
				save_to_file();
				break;
			case 4:
				read_file();
				break;
			default:
				printf("ERROR: Invalid operation.");
		}
	}while(op != 0);
	
	return 0;
}
