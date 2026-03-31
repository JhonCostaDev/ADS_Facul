#include <stdio.h>

//===============================================================
/*Faça um programa que leia três valores inteiros e mostre a sua
soma */

//===============================================================
int main(){
	int numero_1, numero_2, numero_3;

	printf("============ Soma de Três ==============\n");

	printf("Digite o primeiro número:\n");
	scanf("%d", &numero_1);

	printf("Digite o primeiro número:\n");
	scanf("%d", &numero_2);

	printf("Digite o primeiro número:\n");
	scanf("%d", &numero_3);

	printf("A soma de %d + %d + %d é: %d\n", numero_1, numero_2, numero_3, numero_1 + numero_2 + numero_3) ;

	return 0;
}
