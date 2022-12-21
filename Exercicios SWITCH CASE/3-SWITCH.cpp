#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

int op, t=0, te=0, tg=0, tl;
float g=0, e=0, total, valorg=5.847, valore=4.529, ve, vg;

resetvg:
vg=0;
resetg:
tg=0;
resete:
te=0;
menu:
system("cls");
total=0;
t=0;
tl=0;
reset:

printf("\nPosto água no tanque!\n");
printf("\n1) Etanol - R$ 4,529 por litro\n");
printf("\n2) Gasolina - R$ 5,847 por litro\n");
printf("\n3) Total a pagar\n");
printf("\n4) Sair\n");
printf("\nOpção: ");
scanf("%i", &op);

	switch(op){
		case 1:
			printf("\n***Etanol***\n");
			printf("\nDigite a quantidade desejada de etanol: \n");
			scanf("%f", &e);
			te=t+e;
			ve=te*4.529;
				if(te<=40){
					printf("\nVocê encheu %i litros de etanol no tanque.\n", te);
					printf("\nO valor individual do seu etanol = %.3f\n\n", ve);
			}
				else if(te>40){
					printf("\nLimite excedido, escolha no máximo 40 Litros.\n\n");
					system("pause");
					system("cls");
					goto resete;
			}
			system("pause");
			system("cls");
			goto menu;
			break;

		case 2:
			printf("\n***Gasolina***\n");
			printf("\nDigite a quantidade desejada de gasolina: \n");
			scanf("%f", &g);
			tg=t+g;
			vg=tg*5.847;
				if(tg<=40){
					printf("\nVocê encheu %i litros de gasolina no tanque.\n", tg);
					printf("\nO valor individual do sua gasolina = %.3f\n\n", vg);
			}
				else if(tg>40){
					printf("\nLimite excedido, escolha no máximo 40 Litros.\n\n");
					system("pause");
					system("cls");
					goto resetg;
			}
			system("pause");
			system("cls");
			goto menu;
			break;

		case 3:
			printf("\n***Total***");
			tl=tg+te;
				if(tl>40){
					printf("\nTanque excedido, capacidade máxima : 40 litros. Escolha outro valor no menu.\n\n");
					system("pause");
					system("cls");
					goto resetvg;
			}
				else{
					total=((te*valore)+(tg*valorg));
					printf("\nSeu tanque possui %i litros de etanol", te);
					printf(" e %i litros de gasolina.\n", tg);
					printf("\nO valor total é %.3f", total);
			}
			goto saida;
			break;

		case 4:
			saida:
			printf("\nObrigado por usar nosso posto, volte sempre!");
			break;

		default:
			printf("\nVocê não escolheu uma opção válida. Escolha novamente. ");
			printf("\nDigite qualquer número para voltar ao menu:");
			scanf("%d",&op);
			goto menu;
	}
}

