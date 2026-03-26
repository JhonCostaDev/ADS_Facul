#include <stdio.h>

/* Faça um programa que leia dois números inteiros e depois os imprima na ordem
inversa em que eles foram lidos.
*/
int main(void){
	//Definir as variáveis
	int numero_1, numero_2;
	
	printf("Digite dois números inteiros separados por espaço.\n");
	scanf("%d%d", &numero_1, &numero_2);

	printf("O primeiro número foi %d\nO segundo número foi: %d\n", numero_1, numero_2); 
	printf("%d\n%d\n", numero_2, numero_1);
	return 0;
}
