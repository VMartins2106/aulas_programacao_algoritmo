#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int num;
	printf("\nInforme um valor aleat�rio:");
	scanf("%i", &num);
		if(num>1000){
			printf("\nEste valor � maior que 1000");
		}
		else if(num<1000){
			printf("\nEste valor � menor que 1000");
		}
			else{
				printf("\nEste valor � igual a 1000");
			}
}
