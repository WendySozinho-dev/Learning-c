#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");
	
	int a,b,trabalho;

	// tomada de decisao if/else
	printf("\n\n\tprimeiro if/else\n\n");
	
	printf("digite um numero inteiro\t");
	scanf("%d",&a);

	if(a>0)
		printf("valor positivo\n");
	// so podes executar uma unica instrucao sem as chave
	else
		printf("valor negativo ou igual a zero\n");
	printf("\n\n\toperador ternario\n\n");

	
	// operador ternario
	
	printf("\ndigite um valor inteiro\t");
	scanf("%d",&b);

	b>0 ? printf("valor positivo\n") : printf("valor negativo ou igual a zero\n");

	printf("\n\n\tcondicoes aninhadas\n\n");

	// condicoes aninhadas
	
	printf("\ndigite um valor inteiro\n");
	scanf("%d",&trabalho);

	// aqui, as chaves sao opcionais

	if(trabalho>0){
		printf("numero positivo!");
	}
	//aqui as chaves sao obrigatorias por ter mais de uma instrucao
	else{
		if(trabalho<0)
			printf("valor negativo!");
		else
			printf("valor igual a zero");
	}

	printf("\n\n\tessa  é a segunda via das condições aninhadas, o resultado deve ser igual a primeira via\n\n");

	// segunda via
	
	if(trabalho>0)
		printf("valor positivo");
	else if(trabalho==0)
		printf("valor igual a zero");
	else
		printf("valor negativo");

	// licao de moral, nunca declare uma variavel com a letra c, para boas praticas use nomes claros


	return 0;
} 
