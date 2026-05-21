#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"portuguese");

//crie programa que leia um valor inteiro N e imprima o quadrado de valores pares de 1 ate N inclusive oN se for o caso

	int n,i;

	printf("\ndigite um numero inteiro\n");
	scanf("%d",&n);

	if(n<=0){
	for(i=0;i>=n;i-=2)
		printf("o quadrado de %d é %d\n",i,i*i);
	}else{
	for(i=0;i<=n;i+=2)
		printf("o quadrado de %d é %d\n",i,i*i);
	}

	return 0;
}
