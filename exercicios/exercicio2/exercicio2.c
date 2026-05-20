#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

	 short int a,b,temp;
	
	setlocale(LC_ALL,"portuguese");




	printf("digite dois numeros de -127 a 127\n");
	scanf("%hd%hd",&a,&b);

	temp=a;
	a=b;
	b=temp;

	printf("a variavel a, que antes tinha o valor %d, agora possui o valor %d\n\na variavel b, que antes tinha o valor %d, agora possui o valor %d\n\n",temp,a,a,b);




	return 0;
}
