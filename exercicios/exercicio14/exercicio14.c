#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	char letra;

	printf("\ndigite uma letra\t");
	scanf("%c",&letra);

	if(letra=='a' || letra=="A" || letra=='e' || letra=='E' || letra=='i' || letra=='I' || letra=='o' || letra=='O' || letra=='U' || letra=='u')
		printf("o caracterre %c é uma vogal",letra);
	else
		printf("o caractere %c não é uma vogal",letra);;


	return 0;
}
