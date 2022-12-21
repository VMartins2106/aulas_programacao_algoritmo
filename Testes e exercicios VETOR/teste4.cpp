#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
int main(){

setlocale(LC_ALL,"Portuguese");
int num[5];	

printf("\nTeste com vetores\n\n");

printf("\nInforme o primeiro valor: ");
scanf("%i", &num[0]);
printf("\nInforme o segundo valor: ");
scanf("%i", &num[1]);
printf("\nInforme o terceiro valor: ");
scanf("%i", &num[2]);
printf("\nInforme o quarto valor: ");
scanf("%i", &num[3]);
printf("\nInforme o quinto valor: ");
scanf("%i", &num[4]);

printf("\nOs valores informados foram: \n\n%i\n%i\n%i\n%i\n%i\n\n", num[0], num[1], num[2], num[3], num[4]);
system("pause");
}
