#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	float valor, total;
	printf("\nInforme o valor do tênis:");
	scanf("%f", &valor);
		if(valor>=500){
			total=valor*0.85;
			printf("\nO total é = %.2f\n", total);
		}
		else{
			total=valor*0.95;
			printf("\nO total é = %.2f\n", total);
		}
}
