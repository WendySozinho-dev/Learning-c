#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"portuguese");

//crie um programa que duas notas de avaliacao
//o programa deve ser capaz de calculare imprimir a media
//o programa so deve aceitar notas de 0 a 10
//o programa deve validar cada nota separadamente

	float nota1,nota2;
	do{
	printf("\ndigite a primeira nota  ");
	scanf("%f",&nota1);
	printf("\ndigite a segunda nota  ");
	scanf("%f",&nota2);
	if(nota1>10 || nota1<0 || nota2>10|| nota2<0)
		printf("\nerro tente novamente, notas válidas entre [0 a 10]\n");
	else
		printf("\neis a media %.2f",(nota1+nota2)/2);
	}while(nota1>10 || nota1<0 || nota2>10|| nota2<0);

	return 0;
}
