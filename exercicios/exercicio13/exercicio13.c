#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	//crie um programa que leia um nuero inteiro e verifique se e um mes valido no calendario
	//caso seja valido, o programa devera imprimir na tela o nome do mes
	
	int entrada;

	printf("\ndigite um número corespondente a um mês válido no calendário\n\n");
	scanf("%d",&entrada);

	switch(entrada){

	case 1:
		printf("\no número %d corresponde ao mês de janeiro",entrada);
		break;
	case 2:
		printf("\no número %d corresponde ao mês de fevereiro",entrada);
		break;
	case 3:
		printf("\no número %d corresponde ao mês de março",entrada);
		break;
	case 4:
		printf("\no número %d corresponde ao mês de abril",entrada);
		break;
	case 5:
		printf("\no número %d corresponde ao mês de maio",entrada);
		break;
	case 6:
		printf("\no número %d corresponde ao mês de junho",entrada);
		break;
	case 7:
		printf("\no número %d corresponde ao mês de julho",entrada);
		break;
	case 8:
		printf("\no número %d corresponde ao mês de agosto",entrada);
		break;
	case 9:
		printf("\no número %d corresponde ao mês de setembro",entrada);
		break;
	case 10:
		printf("\no número %d corresponde ao mês de otubro",entrada);
		break;
	case 11:
		printf("\no número %d corresponde ao mês de novembro",entrada);
		break;
	case 12:
		printf("\no número %d corresponde ao mês de dezembro",entrada);
		break;
	default:
		printf("não existe tal mês %d no calendário",entrada);
		break;
}


	return 0;
}
