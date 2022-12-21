#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
int main(){

	setlocale(LC_ALL,"Portuguese");
	int i;
	float x;
	i = 1;
	while(i<=100){
		printf("%i \n",i);
		i++;
	}	
	system("pause");
}
