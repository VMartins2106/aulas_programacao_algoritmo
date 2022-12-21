#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
int main(){

setlocale(LC_ALL,"Portuguese");
int i, numA[5], numB[5], numC[5];
printf("\nTeste com Vetores!!!\n\n");
	for(i=0;i<=4;i++){
		printf("\nVETOR A: Informe seu %i vetor: ", i);
		scanf("%i", &numA[i]);
	}
	printf("\n");
	for(i=0;i<=4;i++){
		printf("\nVETOR B: Informe seu %i vetor: ", i);
		scanf("%i", &numB[i]);
	}
	for(i=0;i<=4;i++){
	numC[i]=numA[i] + numB[i];
	}
	printf("\nVETOR C: Os valores somados foram: \n\n");
	for(i=0;i<=4;i++){
		printf("%i\n", numC[i]);
	}
system("pause");
}
