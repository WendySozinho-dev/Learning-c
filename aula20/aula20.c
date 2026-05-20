#include <stdio.h>
#include <stdlib.h>

int main() {

	// aula sobre o operador long
	// e sobre o tipo primitivo double
	
	

	printf("\n\na variavel do tipo long int oucupa %lu bytes",sizeof(long int));
	//aqui imprimimos o tamanho do tipo long int
	//acima^^^^
	
	printf("\n\no tamanho do lomg long int e %lu bytes",sizeof(long  long int));
	// aqui imprimimos o tamanho do long long int
	// acima^^^
	
	printf("\n\no tamanho do tipo float e %lu bytes",sizeof(float));
	// aqui imprimimos o tipo tipo float^^^
	
	printf("\n\nprint o tamanho do tipo double e %lu bytes",sizeof(double));
	// aqui imprimimos o tamanho do double
	// a cima^^^
	
	printf("\n\no tamanho do long double e %lu bytes",sizeof(long double));

	// em windows, a impresssao de tipos como long double usa se uma funcao especial do proprio compilador
	// em mac e distribuivoes linux, usa se Lf
	
	
	


	return 0;
} 

