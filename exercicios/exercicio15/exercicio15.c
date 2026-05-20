#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

//crie um programa que, dado o numero do mes, o programa deve imprimir a quantidade de dias desse mes
	int mes;

	printf("\ndigite o numero de um mes válido\n\t");
	
	scanf("%d",&mes);

	printf("de acordo com o ano 2023, eis o resultado\n\t");

	switch(mes){

		case 1:
			printf("o mês de janeiro tem 31 dias\n");
			break;


		case 2:
			printf("o mês de fevereiro tem 28 dias\n");
			break;
		case 3:
			printf("o mês de março tem 31 dias\n");
			break;
		case 4:
			printf("o mês de abril tem 29 dias\n");
			break;
		case 5:
			printf("o mês de maio tem 31 dias\n");
			break;
		case 6:
			printf("o mês de junho tem 30 dias\n");
			break;
		case 7:
			printf("o mês de julho tem 29 dias\n");
			break;
		case 8:
			printf("o mês de agosto tem 31 dias\n");
			break;
		case 9:
			printf("o mês de setembro tem 30 dias\n");
			break;
		case 10:
			printf("o mês de otubro tem 31 dias\n");
			break;
		case 11:
			printf("o mês de novembro tem 30 dias\n");
			break;
		case 12:
			printf("o mês de dezembro tem 31 dias\n");
			break;
		default:
			printf("não existe tal mês no calendário romano\n");
			break;
	}


	return 0;
} 
