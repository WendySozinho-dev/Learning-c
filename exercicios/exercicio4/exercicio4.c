#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	float despesa,gorjeta,valor_total,gorjeta_decimal;
	int pessoas;

	printf("qual é a despesa	");
	scanf("%f",&despesa);
	printf("\n\nem percentagem, qual é a gorgeta		");
	scanf("%f",&gorjeta);
	printf("\n\nquantas pessoas para dividir a conta	");
	scanf("%d",&pessoas);

	gorjeta_decimal=(despesa*gorjeta)/100;

	valor_total=despesa/pessoas;

	printf("o valor real da gorgeta foi %.2f\n\n",gorjeta_decimal);
	printf("a despesa de cada indivíduo foi %.2f",valor_total);




	return 0;
}
