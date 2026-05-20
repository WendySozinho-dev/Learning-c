#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

//crie um programa que leia 3 notas e dê ao usuário
//a escolha de calcular a média aritmética ou ponderada
// para a media ponderada, consudere os pesos 3 3 4
	
	float nota1,nota2,nota3,media;
	char opcao;

	printf("digite as três notas\n\n\t");
	scanf("%f%f%f",&nota1,&nota2,&nota3);

	printf("\ndigite:\n [a] para média aritmética\n [p] para média ponderada\n\n\t");
	scanf(" %c",&opcao);

	switch(opcao){
	
		case 'a':
		case'A':
			media=(nota1+nota2+nota3)/3;
			printf("a média foi %.1f\n",media);
			break;
		case 'p':
		case 'P':
			media=(nota1*3+nota2*3+nota3*4)/10;
			printf("a média foi %.1f\n",media);
			break;
		default:
			printf("opção inválida\n");

	}

	return 0;
}
