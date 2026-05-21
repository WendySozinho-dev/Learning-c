#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"portuguese");

//crie um programa que imprima todos os multiplos de7 entre 1 a 9999
	
	int i;

	printf("1 ");
	for(i=7; i<=9999;i+=7){
		printf("%4d ",i);

	}

	return 0;
}
