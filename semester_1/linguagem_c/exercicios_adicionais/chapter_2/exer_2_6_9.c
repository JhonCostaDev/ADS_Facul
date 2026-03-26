#include <stdio.h>

/* Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
foram lidos.
*/
int main(void){
	//Definir as variáveis
	float numero_1, numero_2;
	
	printf("Digite dois números inteiros separados por espaço.\n");
	scanf("%f%f", &numero_1, &numero_2);

	printf("O primeiro número foi %f\nO segundo número foi: %f\n", numero_1, numero_2); 
	printf("%f\n%f\n", numero_2, numero_1);
	return 0;
}
