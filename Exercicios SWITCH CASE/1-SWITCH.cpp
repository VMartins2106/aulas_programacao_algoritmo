#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int dia;
	la:
	printf("\nInforme um número de 1 à 7: \n");
	scanf("%i", &dia);
	switch(dia){
		case 1:
			printf("\nHoje é Domingo!\n");
			break;
		case 2:
			printf("\nHoje é segunda-feira!\n");
			break;
	    case 3:
			printf("\nHoje é Terça-feira!\n");
			break;
		case 4:
			printf("\nHoje é Quarta-feira!\n");
			break;
		case 5:
			printf("\nHoje é Quinta-feira!\n");
			break;
		case 6:
			printf("\nHoje é Sexta-feira!\n");
			break;
		case 7:
			printf("\nHoje é Sabádo!\n");
			break;
		default:
			printf("\nOpção inválida. Escolha novamente.\n");
		goto la;		
	}
}
