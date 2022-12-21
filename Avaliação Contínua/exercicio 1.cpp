#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	int consumo, salario, valor;

	printf("\nDesconto na conta de água!!\n");
	printf("\nInforme seu salário : ");
	scanf("%i", &salario);
	printf("\nAgora digite o seu consumo de água em metros cúbicos : ");
	scanf("%i", &consumo);
	
	if((salario<1001) && (consumo<11)){
		printf("\nVocê tem direito a um desconto de 15 por cento na sua conta!");
		valor = consumo*0.85;
		printf("\nSua conta deu : %i", valor);
	}
	
	else{
		printf("\nVocê tem direito a um desconto de 5 por cento na sua conta!");
		valor = consumo*0.95;
		printf("\nSua conta deu : %i", valor);
	}
}
