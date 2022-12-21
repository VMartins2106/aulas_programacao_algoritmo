#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	la:
	system("cls");
	int i=0;
	char senha[20];
	
	printf("\nGerador de senha com, no mínimo, 6 digitos!!\n\n");
	printf("\nDigite sua senha para cadastro: ");
	gets(senha);
	
	if(strlen(senha)>=6){
	
		printf("\nSua senha é: ");
	
		for(i=0;i<=20;i++){
			printf("%c", senha[i]);
		}
		
	}
	
	else{
			printf("\nA senha deve ter no mínimo 6 digitos! Digite outra senha: ");
			goto la;
	}
	
	return 0;
}
