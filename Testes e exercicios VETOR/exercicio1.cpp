#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
int main(){

	setlocale(LC_ALL,"Portuguese");
	int senha, psswd;
	inicio:
	senha=0;
	psswd=0;
	printf("\nAlterar sua senha ( apenas algarismos )\n\n");
	printf("\nInforme sua nova senha: ");
	scanf("%i", &senha);
	system("cls");
	printf("\nInforme sua senha para login: ");
	scanf("%i", &psswd);
	while(psswd!=senha){
		printf("\nSenha incorreta, tente novamente!");
		system("cls");
		goto inicio;
	}
	printf("\nLogin realizado com sucesso!");
}
