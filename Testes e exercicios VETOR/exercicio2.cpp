#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int n;
do{
	printf("\nQual n�mero eu estou pensando ?\n");
    printf("\nInforme um valor aleat�rio: ");
    scanf("%i", &n);
    system("cls");
}while(n!=200);
printf("\nParab�ns, voc� acertou!!!!\n\n");
system("pause");
}
