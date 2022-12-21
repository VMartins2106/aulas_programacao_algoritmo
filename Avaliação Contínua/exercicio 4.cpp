#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");

	int contador1 = 1, contador2 = 6, contador3 = 11, contador4 = 16, contador5 = 21, contador6 = 26, contador7 = 31, contador8 = 36;
	
	do {
		printf ("%i.", contador1);
		contador1++;
	} while (contador1 <=4);
	
	printf("PAM");
	printf ("\n");
	
	do {
		printf ("%i.", contador2);
		contador2++;
	} while (contador2 <=9);
	
	printf("PAM");
	printf ("\n");
	
	do {
		printf ("%i.", contador3);
		contador3++;
	} while (contador3 <=14);
	
	printf("PAM");
	printf ("\n");
	
	do {
		printf ("%i.", contador4);
		contador4++;
	} while (contador4 <=19);
	
	printf("PAM");
	printf ("\n");
	
	do {
		printf ("%i.", contador5);
		contador5++;
	} while (contador5 <=24);
	
	printf("PAM");
	printf ("\n");
	
	do {
		printf ("%i.", contador6);
		contador6++;
	} while (contador6 <=29);
	
	printf("PAM");
	printf ("\n");
	
	do {
		printf ("%i.", contador7);
		contador7++;
	} while (contador7 <=34);
	
	printf("PAM");
	printf ("\n");
	
	do {
		printf ("%i.", contador8);
		contador8++;
	} while (contador8 <=39);
	
	printf("PAM");
}
