#include <stdio.h>

/* Faça um programa que leia um número inteiro e depois o imprima usando o operador %f.
*/
int main(void){
	//Definir as variáveis
	int numero;
	
	printf("Digite um número inteiro.\n");
	scanf("%d", &numero);

	printf("O valor lido foi: %f\n", numero);
	return 0;
}
