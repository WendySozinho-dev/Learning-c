#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"portuguese");
//escreva um programa que valide uma senha
//consudere a senha igual a 123456
	
	int senha;
	
	printf("digite a senha numérica	 ");
	scanf("%d",&senha);
	while(senha!=123456){
		printf("\nsenha inválida, digite novamente\n");
		scanf("%d",&senha);
	}
	printf("acesso liberado");

	return 0;
}
