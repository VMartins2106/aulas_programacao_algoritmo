#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
int main(){

	setlocale(LC_ALL,"Portuguese");
	int i;
	float x;
	printf("\nInforme um valor\n");
	scanf("%f", &x);
	while(i!=987){
		printf("\nERROUUUU\n");
		printf("\nInforme um valor\n");
		scanf("%f", &x);
		Sleep(500);
		system("cls");
	}
	printf("\nAcertou\n");
	system("pause");
}
