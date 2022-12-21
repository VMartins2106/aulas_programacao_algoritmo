#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
int main(){

setlocale(LC_ALL,"Portuguese");
int i, num[5];
printf("\nTeste com Vetores e Laço de Repetição!!!\n\n");
	for(i=0;i<=4;i++){
		printf("\nInforme seu %i vetor: ", i);
		scanf("%i", &num[i]);
	}
	printf("\nOs valores digitados foram: \n\n");
	for(i=0;i<=4;i++){
		printf("%i\n", num[i]);
	}
system("pause");
}
