#include <stdio.h>
#include <stdlib.h>

// esse e um programa qie vai ler o sexo e a idade de um individuo e o peso 

int main()
{
	int idade;
	float peso, altura;
	char sexo='m';

	printf("digite a idade\n");
	scanf("%d",&idade);
	printf("digite o sexo\n");
	scanf(" %c",&sexo);
	printf("digite o peso\n");

	scanf("%f",&peso);
	printf("digite a altura\n");
	scanf("%f",&altura);
	
	printf("o sexo e %c\no peso e %.2f\na altura e %.2f\ne a idade e %d",sexo,peso,altura,idade);


return 0;
}

