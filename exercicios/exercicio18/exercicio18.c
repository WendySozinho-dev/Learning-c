#include <stdio.h>
#include <stdlib.h>

int main() {

//crie um programa em c que leia um numero inteiro entre 1 e 10
//e apresente uma tabuada de 1 a 10
	
	int entrada,i;
	do{
	printf("\ndigite um valor inteiro\n");
	scanf("%d",&entrada);
	}while(entrada<1 || entrada>10);


	for(i=1;i<=10;i++)
		printf("%d x %d = %d\n",i,entrada,i*entrada);

	return 0;
} 
