#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int valor;
	printf("\nInforme um valor aleat�rio:");
	scanf("%i", &valor);
	if((valor%2==0) && (valor>0)){
		printf("\nEste � um n�mero par e positivo");
	}
	else if((valor%2==0) && (valor<0)){
		printf("\nEste � um n�mero par e negativo");
	}
	else if((valor%2!=0) && (valor>0)){
		printf("\nEste � um n�mero �mpar e positivo"); 
	}
	else{
		printf("\nEste � um n�mero �mpar e negativo");
	}
}
