#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int n;
do{
	printf("\nQual número eu estou pensando ?\n");
    printf("\nInforme um valor aleatório: ");
    scanf("%i", &n);
    system("cls");
}while(n!=200);
printf("\nParabéns, você acertou!!!!\n\n");
system("pause");
}
