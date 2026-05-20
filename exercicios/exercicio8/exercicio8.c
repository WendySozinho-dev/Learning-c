#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	//crie um programa que leia tres numeros e compare qual e o maior e qual e o menor
	
	float a,b,c;

	printf("\n\tdigite  três números reais\n\n\t");
	scanf("%f%f%f",&a,&b,&c);


	if(a<b && a>c)
	{
		printf("o número %.1f é o que está no centro\no numero %.1f é o maior de todos\no número %.1f é o menor de todos",a,b,c);
	}
	else if(a>b && a<c)
	{
		printf("o número %.1f é o que está no centro\no numero %.1f é o maior de todos\no númer %.1f é o menor de todos",a,c,b);
	}
	else if(b>a && b<c)
	{
		printf("o número %.1f é o que está no centro\no numero %.1f é o maior de todos\no número  %.1f é o menor de todos",b,c,a);
	}
	else if(b<a && b>c)
	{
		printf("o número %.1f é o que está no centro\no numero %.1f é o maior de todos\no número %.1f é o menor de todos",b,a,c);
	}
	else if(c>a && c<b)
	{
		printf("o número %.1f é o que está no centro\no numero %.1f é o maior de todos\no número  %.1f é o menor de todos",c,b,a);
	}
	else if(c<a && c>b)
	{
		printf("o número %.1f é o que está n o centro\no numero %.1f é o maior de todos\no número %.1f é o menor de todos",c,a,b);
	}
	
	else if(a==b && a>c)
	{
		printf("os números %.1f e %.1f são iguais e maiores que %.1f",a,b,c);
	}
	else if(a==c && a>b)
	{
		printf("os números %.1f e %.1f são iguais e maiores que %.1f",a,c,b);
	}
	else if(a==b && a<c)
	{
		printf("os números %.1f e %.1f são i    guais e menores que %.1f",a,b,c);
	}
	else if(a==c && a<b)
	{
		printf("os números %.1f e %.1f são iguais e menlores que %.1f",a,c,b);
	}
	else if(c==b && c<a)
	{
		printf("os números %.1f e %.1f são iguais e menores que %.1f",b,c,a);
	}
	else if(c==b && c>a)
	{
		printf("os números %.1f e %.1f são iguais e maiores que %.1f",b,c,a);
	}
	else
		printf("todos  os números são iguais");

	return 0;
}
