#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");
	
	//crie um programa que leia um numero e diga se ele e divisivel por 2,por 3,por 5 ou nenhum dos numeros
	int entrada;

	printf("\ndigite um  número inteiro\n\t");
	scanf("%d",&entrada);

	if(entrada%2==0)
		printf("o numero %d é divisível por 2\n",entrada);
	if(entrada%3==0)
		printf("o número %d é divisível por 3\n",entrada);
	if(entrada%5==0)
		printf("o número %d é divisível por 5\n",entrada);
	if(entrada%2!=0 && entrada%3!=0 && entrada%5!=0)
		printf("o número %d é indivisível por 2,3 e 5\n",entrada);

	return 0;
}
