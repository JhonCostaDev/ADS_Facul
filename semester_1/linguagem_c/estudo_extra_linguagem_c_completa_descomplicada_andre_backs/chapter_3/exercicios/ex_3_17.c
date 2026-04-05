#include <stdio.h>

/* ==================================================================================
Escreva um programa que leia um número inteiro e mostre o seu complemento
bit a bit.
====================================================================================*/
int main() {
	int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Numero digitado: %d\n", numero);
    printf("Complemento bit a bit (~%d): %d\n", numero, ~numero);
	
	
	return 0;
}