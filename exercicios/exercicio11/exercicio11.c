#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	//crie um programa que permita fazer a conversao de real para dolar e vice-versa sabendo que $1==5.30reais
	
	float entrada;
	
	printf("1 :conversao real-dólar\n2 :conversão dólar-real\n\ndigite a opção [1/2]  ");
	scanf("%f",&entrada);

	if(entrada==1.0)
	{
		printf("quantos reais para converter?    ");
		scanf("%f",&entrada);
		printf("\npara %.2f reais, tens %.2f dólares",entrada,entrada/5.30);

}
	else if(entrada==2)
	{
		printf("quantos dólares para converter em reais?    ");
		scanf("%f",&entrada);
		printf("para %.2f dólares, tens %.2f reais",entrada,entrada*5.30);
		

}
	else
		printf("opção inválida");
	

	return 0;
}
