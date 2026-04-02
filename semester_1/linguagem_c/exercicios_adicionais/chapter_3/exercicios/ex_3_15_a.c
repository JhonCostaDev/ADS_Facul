#include <stdio.h>

/* ==================================================================================
Faça um programa para ler um número inteiro positivo de três dígitos. Em segui-
da, calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido = 123
Número gerado = 321
====================================================================================*/
int main() {
	int number, firstDigit, secondDigit, thirdDigit, reversed;

	printf("Digite um número de 3 dígitos\n");
	scanf("%d", &number);

	thirdDigit = number % 10;
	secondDigit = (number / 10) % 10;
	firstDigit = number / 100;

	reversed = (thirdDigit * 100) + (secondDigit * 10) + firstDigit;

	printf("%d%d%d\n", thirdDigit, secondDigit, firstDigit);
	printf("%d\n", reversed);


	
	
	return 0;
}