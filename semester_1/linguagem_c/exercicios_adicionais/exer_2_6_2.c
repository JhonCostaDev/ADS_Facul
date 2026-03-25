#include <stdio.h>

/* Escreva um programa que leia um número inteiro
e depois o imprima.*/
int main(void){
	//Definir as variáveis
	int numero;
	
	printf("Digite um número inteiro.\n");
	scanf("%d", &numero);

	printf("O número digitado foi: %d\n", numero);
	return 0;
}
