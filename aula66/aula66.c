#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

//aprendendo sobre estrutura de repeticao for
	
	int i;//variavel contadora
	//estrutura do laco for()
//for(condicaoInicial,condicaoFinal,incremento )

	printf("eis uma lista de 1 a 10\n");

	for(i=0;/*condicaoInicial*/i<=10;/*condicaoFinal*/i++/*incremento*/)
		printf("%d ",i);
	// invertendo a contagem
	printf("\n\neis a lista invertida\n");

	for(i=10;i>=0;i--)
		printf("%d ",i);



	return 0;
}
