#include <stdio.h>
#define BALANCE 780000.00
/*====================================================================
A importância de R$ 780.000,00 será dividida entre três ganhadores
sendo que:
	* O primeiro receberá 46% do total
	* O segundo receberá 32%
	* O terceiro receberá o restante
Calcule e imprima a quantia recebida por cada um dos ganhadores.
======================================================================*/

int main(){
	//float balance = 780000.00;
	float percentageFirstPerson = 46;
	float percentageSecondPerson = 32;
	float percentageThirdPerson = 100 - (percentageFirstPerson + percentageSecondPerson);

	float firstPerson, secondPerson, thirdPerson;

	firstPerson = BALANCE * (percentageFirstPerson / 100);
	secondPerson = BALANCE * (percentageSecondPerson / 100);
	thirdPerson = BALANCE * (percentageThirdPerson / 100);

	
	
	printf("R$%.2f\n", firstPerson);
	printf("R$%.2f\n", secondPerson);
	printf("R$%.2f\n", thirdPerson);
	printf("%.2f\n", firstPerson + secondPerson + thirdPerson);
	return 0;
}
