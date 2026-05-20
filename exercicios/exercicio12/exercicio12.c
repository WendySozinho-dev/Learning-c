#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	// crie um programa que calcule o indice de massa corporal IMC
	// o IMC pode ser calculado dividindo o peso da pessoa pela altura h(em metros) elevado ao quadrado (IMC=m/h ²)
	/*
	 * IMC			interpretação
	 *
	 * abaixo de 18.5	abaixo do peso
	 * entre 18.5 e 25	peso normal
	 * entre 25 e 30	sobrepeso
	 * entre 30 e 35	obesidade grau 1
	 * entre 35 e 40	obesidade grau 2
	 * maior ou igual 40	obesidade grau 3
	 */

	float altura,peso,IMC;

	printf("\n\tdigite o peso [kg]\n");
	scanf("%f",&peso);
	printf("\n\tdigite a altura\n");
	scanf("%f",&altura);
	IMC=peso/(altura*altura);

	if(IMC<18.5)
		printf("\n\tabaixo do peso\n");
	else if(IMC>=18.5 && IMC<25)
		printf("\n\tpeso normal\n");
	else if(IMC>=25 && IMC<30)
		printf("\n\tsobrepeso\n");
	else if(IMC>=30 && IMC<35)
		printf("\n\tobesidade de grau 1\n");
	else if(IMC>=35 && IMC<40)
		printf("\n\tobesidade de grau 2\n");
	else
		printf("\n\tobesidade de grau 3\n");

	return 0;
}
