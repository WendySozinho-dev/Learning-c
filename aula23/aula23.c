#include <stdio.h>
#include <stdlib.h>

int main() {
	//usando o \ com qualquer caracter
	//e especialmente util para imprir caracteres que o compilador considera
	
	short int a,b;
	float c,d;
	
	printf("testando o \\ para imprimir aspas >>\"\"<< e isolar a letra \"a\"");

	// agora vamos esclarecer sobre a impressao de divisoes inteiras
	// e tambem a conversao de tipos
	
	printf("\ndigite o valor da variavel a e b\n");
	scanf("%hd%hd",&a,&b);
	
	printf("vamos dividir dois numeros inteiros\n a e b, nota que se o resultado for decimal,\n o programa ira aredondar automaticamente: %d ",(a/b));

	// agora vamos ver o >>%<< como o operador "resto da divisao"
	printf("\ndigite os valores de c e d\n");
	scanf("%f%f",&c,&d);
	printf("\nvamos obter o resto da divisao de a e b que e: %d\n",a%b);

	// agora vamos converter os tipos primitivls
	
	printf("\na variavel a era inteira e tinha o valor %d\nmas agora tem o valor %.2f\na variaver c tinha o valor %f e passa a ter %d\n",a,(float) a,c,(int) c);







	  return 0;
} 

