#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<time.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");

	int i, num, NumSort , sorteio=0;

	printf ("\nEscolha um n�mero entre 1 e 20 : ");
	scanf ("%i", &num);

	srand((unsigned) time (NULL));
	for(i=1;i<=10;i++){
	NumSort=1+rand()%20;

	printf("\nN�mero sorteado = %i\n", NumSort);

		if (NumSort==num){
			sorteio++;
		}
	}
	
	printf ("\nO n�mero informado foi sorteado %i vezes!", sorteio);
}
