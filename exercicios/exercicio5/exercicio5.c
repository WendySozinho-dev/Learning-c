#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	
	float valor_liquido,desconto,salario,dias;

	printf("\nqiantos dias o encanador trabalhou?	");
	scanf("%f",&dias);

	salario=45*dias;

	desconto=(salario*8)/100;
	valor_liquido=salario-desconto;

	printf("\nO salário por dia é $45.00.\nO salário total é %.2f.\nO desconto de renda foi de 8/100.\n O valor líquido do encanador em %.1f dias deu %.2f.\n",salario,dias,valor_liquido);

	return 0;
}
