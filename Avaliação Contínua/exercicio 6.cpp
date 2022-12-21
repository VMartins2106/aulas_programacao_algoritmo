#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	int i, vetor[10];
	
	for(i=0;i<=10;i++){
		printf("\nInforme o seu %i valor: ", i);
		scanf("%i", &vetor[i]);
		
		while(vetor[i]%2!=0){
			printf("\nNão aceitamos valores ímpares! Digite outro valor: ");
			vetor[i]=0;
			scanf("%i", &vetor[i]);
		}
	}
	
	printf("\nSeus valores são : \n");
	
	for(i=0;i<=10;i++){
		printf("\n%i", vetor[i]);
	}
}
