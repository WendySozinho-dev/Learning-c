#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	

	// alistamento no exercito
	
	int idade;
	char sexo;

	printf("\ndigite a idade e o sexo [m/f]\t");
	scanf("%d %c",&idade,&sexo);
	
	// usei o operador e >> && << para encurtar o codigo
		
	if(idade == 18 &&  sexo == 'm')
	
		printf("alistamento obrigatório");
	else
		printf("dispensado!");

	// gratuidade no transporte publico
	// usei o operador ou >> || << para decidir se uma das expressoes é verdadeira
	
	if(idade <=5 || idade >= 60 )
		printf("\ntem direito a gratuidade no transporte  público\n");
	
	else
		printf("\nsem direito a gratuidade no transporte público\n");

	
	
	


	return 0;
} 
