#include <stdio.h>

/* ==================================================================================
labore um programa que leia dois números inteiros e exiba o resultado das ope-
rações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.
====================================================================================*/
int main() {

	int number_1, number_2, and_result, or_result, xor_result;

	printf("Deslocamento bitwise\n");
	
	printf("Digite o primeiro número:\n");
	scanf("%d", &number_1);	
	
	printf("Digite o segundo número:\n");
	scanf("%d", &number_2);
	
	and_result = number_1 & number_2;
	or_result = number_1 | number_2;
	xor_result = number_1 ^ number_2;

	printf("%d\n%d\n%d\n", and_result, or_result, xor_result);
	return 0;
}