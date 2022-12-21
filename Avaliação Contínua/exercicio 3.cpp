#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char palavra[10];
	
	printf("\nDigite uma palavra para realizar sua decomposição: ");
	gets(palavra);

	for(int i=0; i<strlen(palavra);i++){
		for(int r=0; r<=i; r++){
			printf("%c", palavra[r]);
		}
		
	printf("\n");
	
	}
	
	return 0;
}


