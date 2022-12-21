#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int mes;
	la:
	printf("\nInforme um número de 1 à 12: \n");
	scanf("%i", &mes);
	switch(mes){
		case 1:
			printf("\nEstamos em Janeiro!\n");
			break;
		case 2:
			printf("\nEstamos em Fevereiro!\n");
			break;
	    case 3:
			printf("\nEstamos em Março!\n");
			break;
		case 4:
			printf("\nEstamos em Abril!\n");
			break;
		case 5:
			printf("\nEstamos em Maio!\n");
			break;
		case 6:
			printf("\nEstamos em Junho!\n");
			break;
		case 7:
			printf("\nEstamos em Julho!\n");
			break;
		case 8:
			printf("\nEstamos em Agosto!\n");
			break;
		case 9:
			printf("\nEstamos em Setembro!\n");
			break;
		case 10:
			printf("\nEstamos em Outubro!\n");
			break;
		case 11:
			printf("\nEstamos em Novembro!\n");
			break;
		case 12:
			printf("\nEstamos em Dezembro!\n");
			break;
		default:
			printf("\nOpção inválida. Escolha novamente.\n");
		goto la;		
	}
}
