#include <stdio.h>

/* ==================================================================================
Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits).
====================================================================================*/
int main() {
	int number, mult, divb;
	printf("Digite um número inteiro\n");
	scanf("%d", &number);
	
	mult = number << 1;
	divb = number >> 1;

	printf("Multiplicação: %d\nDivisão: %d\n", mult, divb);
	return 0;
}