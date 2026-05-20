#include <stdio.h>

int main() {
	//usando o operador siseof
	//e usando o operador short para diminuir o consumo da ram
	
	int idade=7;
	short int altura=14;

	printf("\na variavel idade %d  consumiu %d bytes\n\n",idade,sizeof idade);

	printf("a variavel altura %d consumiu %d bytes\n",altura,sizeof altura);

	printf("uma variavel do tipo int consome normalmente %d bytes,\n\n mas com o operador short, passa a oucupar %d bytes ", sizeof(int),sizeof(short int));





	return 0;
} 

