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
	printf("\nSeu imc � = %.2f\n", imc);
		if(imc>25){
			printf("\nVoc� est� acima do peso!");
		} 
			else{
				printf("\nVoc� est� no peso adequado!");
		}
}
