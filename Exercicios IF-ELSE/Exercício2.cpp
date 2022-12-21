#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	float imc, p, h;
	printf("\nInforme seu peso:");
	scanf("%f", &p);
	printf("\nInforme sua altura:");
	scanf("%f", &h);
	imc = p / (h*h);
	printf("\nSeu imc é = %.2f\n", imc);
		if(imc>25){
			printf("\nVocê está acima do peso!");
		} 
			else{
				printf("\nVocê está no peso adequado!");
		}
}
