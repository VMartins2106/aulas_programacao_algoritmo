#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int dia;
	la:
	printf("\nInforme um n�mero de 1 � 7: \n");
	scanf("%i", &dia);
	switch(dia){
		case 1:
			printf("\nHoje � Domingo!\n");
			break;
		case 2:
			printf("\nHoje � segunda-feira!\n");
			break;
	    case 3:
			printf("\nHoje � Ter�a-feira!\n");
			break;
		case 4:
			printf("\nHoje � Quarta-feira!\n");
			break;
		case 5:
			printf("\nHoje � Quinta-feira!\n");
			break;
		case 6:
			printf("\nHoje � Sexta-feira!\n");
			break;
		case 7:
			printf("\nHoje � Sab�do!\n");
			break;
		default:
			printf("\nOp��o inv�lida. Escolha novamente.\n");
		goto la;		
	}
}
