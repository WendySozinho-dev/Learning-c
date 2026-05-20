#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	float constante_RD=5.30,dolares,reais;

	printf("quantos reais a concerter para dólares?	  ");
	scanf("%f",&reais);
	
	dolares=constante_RD*reais;

	printf("\n\n\t\t%.2f reais são %.2f dólares\n",reais,dolares);


	return 0;
}
