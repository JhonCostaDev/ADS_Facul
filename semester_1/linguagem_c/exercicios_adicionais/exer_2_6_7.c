#include <stdio.h>

/* Elabore um programa que leia um caractere e depois o imprima como um valor
inteiro.
*/
int main(void){
	//Definir as variáveis
	char numero;
	
	printf("Digite um número inteiro.\n");
	scanf("%c", &numero);

	printf("O valor lido foi: %d\n", numero); //54
	return 0;
}
