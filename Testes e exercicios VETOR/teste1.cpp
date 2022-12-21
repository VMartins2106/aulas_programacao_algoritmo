#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
int main(){
int i;
float soma=0, entrada;
setlocale (LC_ALL, "portuguese");
for(i=1;i<=5;i++){
	
	printf("\n Informe o %i valor\n", i);
	scanf ("%f", &entrada);
	soma=soma+entrada;
	
	if(soma>=50){
		i=6;
	}
}
printf("\nValor final: %.2f\n",soma);
system ("pause");		
}
