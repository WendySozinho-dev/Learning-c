#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"portuguese");
	
	//criando o menu de escolha
	int escolha;
	float valor1,valor2,resultado=0;
	while(1)
	{
		printf("\neis as escolhas\n0 sair\n1 somar\n2 subtrair\n3 multiplicar\n4 dividir\n\t");
		scanf("%d",&escolha);

//lendo os dados do usuario e tratando a divisao por zero

	while(escolha<0 || escolha>4){
	
		printf("erro escolha inválida escolha um valor válido de 0 a 4\n\t");
		scanf("%d",&escolha);
	}
	if(escolha==0)
		break;
	do{
		
		printf("\ndigita o primeiro valor\n\n");
		scanf("%f",&valor1);
		printf("\ndigite o segundo valor\n\n");
		scanf("%f",&valor2);

		if(valor1==0 && escolha==4)
			printf("\nerro, impossivel dividir %.2f por 0\n",valor2);
		
	}while(escolha==4 && valor1==0);
	
	

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
				resultado=valor1/valor2;
				break;
		}
	printf("o resultado da operação entre %.2f e %.2f deu %.2f",valor1,valor2,resultado);
	

	}
	

	return 0;
}
