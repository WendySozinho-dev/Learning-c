#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

//escreva um programa onde sera dado o comprimento de 3 lados de um trangulo, o programa devera ser capaz de informar se  e um triangulo valido ou nao e informar o tipo de triangulo

	float a,b,c;

	printf("\ndigite os comprimentos do triangulo\n");
	scanf("%f%f%f",&a,&b,&c);

//verificando a validade do triangulo
	if(a+b>c && b+c>a && a+c>b){
	
		printf("\no triângulo é válido\n");
	//verifivando o tipo do triangulo
	if(a==b&&b==c)
		printf("\no triangulo é equilátero\n");
	else if(a!=b && b!=c && c!=a)
		printf("\no triangulo é escaleno\n");
	else
		printf("\no triangulo é isósceles\n");
	}
	else
		printf("\ntriângulo inválido\n");

	return 0;
}
