#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int v;
	printf("\nVelocidade na qual o carro passou:\n");
	scanf("%i", &v);
		if(v>120){
			printf("\nCarro multado!\n");
		}
			else{
				printf("\nCarro liberado!\n");
			}
}

