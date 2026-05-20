#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {	
	setlocale(LC_ALL,"portuguese");

	float minutos,horas;

	printf("quantos minutos a converter em horas?	");
	scanf("%f",&minutos);

	horas=minutos/60;

	printf("\n%.2f minutos são %.1f horas",minutos,horas);


	return 0;
}
