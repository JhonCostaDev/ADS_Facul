#include <stdio.h>

/* ==================================================================================
Faça um programa para ler um número inteiro positivo de três dígitos. Em segui-
da, calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido = 123
Número gerado = 321
====================================================================================*/
int main() {
	//char numbers[4];
	int first, second, third;

	printf("Digite um número positivo de 3 dígitos separado por espaços\n");
	//fgets(numbers, sizeof(numbers), stdin);
	scanf("%d %d %d", &first, &second, &third);

	printf("%d%d%d\n", third, second, first);
	//printf("%d\n", sizeof(numbers));
	
	return 0;
}