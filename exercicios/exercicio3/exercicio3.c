#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	int a,b;


	printf("digite dois valores inteiros\n\n");
	scanf("%d%d",&a,&b);

	a+=b;
	b=a-b;
	a=a-b;

	printf("\n\na variável a tinha o valor %d e agora possui %d.\n\na variável b tinha o valor %d e agora possui %d.\n\n E tudo isso usando apenas duas variáveis e matemática",b,a,a,b);



	return 0;
}
