#include <stdio.h>

/* Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação científica.
*/
int main(void){
	//Definir as variáveis
	double numero;
	
	printf("Digite um número inteiro.\n");
	scanf("%f", &numero);

	printf("O valor lido foi: %e\n", numero); //6.952985e-310
	return 0;
}
