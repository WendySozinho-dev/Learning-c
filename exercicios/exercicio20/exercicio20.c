#include <stdio.h>
#include <stdlib.h>
int main() {

//escreva um prograda que soma numeros impares entre 1 a 1000 e imprima a resposta

	int i=0,resultado=0;
	for(i=1;i<=999;i+=2)
	{
		resultado+=i;
	}
	printf("resultado da soma %d\n",resultado);
	printf("onde a variavel i parou %d\n",i);

	return 0;
}
