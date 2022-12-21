#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int valor;
	printf("\nInforme um valor aleatório:");
	scanf("%i", &valor);
	if((valor%2==0) && (valor>0)){
		printf("\nEste é um número par e positivo");
	}
	else if((valor%2==0) && (valor<0)){
		printf("\nEste é um número par e negativo");
	}
	else if((valor%2!=0) && (valor>0)){
		printf("\nEste é um número ímpar e positivo"); 
	}
	else{
		printf("\nEste é um número ímpar e negativo");
	}
}
