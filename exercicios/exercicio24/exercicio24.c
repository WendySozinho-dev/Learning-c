#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"portuguese");
	
	//criando o menu de escolha
	int escolha;
	float valor1,valor2,resultado=0;
	do{
		printf("\neis as escolhas\n0 sair\n1 somar\n2 subtrair\n3 multiplicar\n4 dividir\n\t");
		scanf("%d",&escolha);

//lendo os dados do usuario e tratando a divisao por zero


	do{
		if(escolha==0)
			break;
		
		printf("\ndigita o primeiro valor\n\n");
		scanf("%f",&valor1);
		printf("\ndigite o segundo valor\n\n");
		scanf("%f",&valor2);

		if(valor1==0 && escolha==4)
			printf("\nerro, impossivel dividir %f por 0\n",valor1);
		
	}while(escolha==4 && valor1==0);
	if(escolha==0)
		break;

	//tratando a escolha do usuario
	switch(escolha){

			case 1:
				resultado=valor1+valor2;
				break;
			case 2:
				resultado=valor1-valor2;
				break;
			case 3:
				resultado=valor1*valor2;
				break;
			case 4:
				resultado=valor1-valor2;
				break;
			default:
				printf("erro, opcao inesistente");
		}
	printf("o resultado da operação entre %.2f e %.2f deu %.2f",valor1,valor2,resultado);
	

	}while(escolha!=0);
	

	return 0;
}
