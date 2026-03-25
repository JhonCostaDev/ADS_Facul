#include <stdio.h>

/* Escreva um programa que leia um número inteiro e depois imprima a mensagem:
'Valor lido', seguido do valor inteiro. Use apenas um comando printf().
*/
int main(void){
	//Definir as variáveis
	int numero;
	
	printf("Digite um número inteiro.\n");
	scanf("%d", &numero);

	printf("O valor lido foi: %d\n", numero);
	return 0;
}
