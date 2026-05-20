#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	//escreva um programa que leia 5 numeros inteiros e conte a quantidade de numeros positivos e negativos
	int a,b,c,d,e,positivo=0,negativo=0,neutro=0;

	printf("\ndigite 5 números inteiros\n\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	//verificando a variavel a
	if(a>0)
		positivo++;
	else if(a==0)
		neutro++;
	else
		negativo++;

	//verificando a variavel b
	if(b>0)
		positivo++;
	else if(b==0)
		neutro++;
	else
		negativo++;

	//verificando a variavel c
	if(c>0)
		positivo++;
	else if(c==0)
		neutro++;
	else
		negativo++;
	//verificando a variavel d
	if(d>0)
		positivo++;
	else if(d==0)
		neutro++;
	else
		negativo++;
	//hah! verivicando a variavel e
	if(e>0)
		positivo++;
	else if(e==0)
		neutro++;
	else
		negativo++;




printf("eis a quantidade de números negativos %d\neis a quantidade de números neutros %d\neis a quantidade de números positivos %d",negativo,neutro,positivo);
//aqui vemos a importância das funções



	return 0;
} 
