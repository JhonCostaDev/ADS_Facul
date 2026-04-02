#include <stdio.h>

/* ==================================================================================
Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo
====================================================================================*/
int main() {
	int number_1, number_2, left_result, right_result;

	printf("Deslocamento bitwise\n");
	
	printf("Digite o primeiro número:\n");
	scanf("%d", &number_1);	
	
	printf("Digite o segundo número:\n");
	scanf("%d", &number_2);

	left_result = number_1 << number_2;
	right_result = number_1 >> number_2;

	//exibindo binários dos números digitados
	printf("%08b\n", number_1);
	printf("%08b\n", number_2);

	printf("Deslocamento à esquerda: %d\n", left_result);
	printf("Deslocamento à esquerda: %08b\n", left_result);
	printf("Deslocamento à direita: %d\n", right_result);
	printf("Deslocamento à direita: %08b\n", right_result);
	return 0;
}