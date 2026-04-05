#include <stdio.h>

//=================================================================
//Faça um programa que leia um número real e imprima a quinta parte
//desse número.
//=================================================================
int main(){
	float numero;

	printf("A quinta parte\n");

	printf("Digite um número real\n");
	scanf("%f", &numero);

	printf("A quinta parte de %.2f é: %.2f\n", numero, numero / 5);
	return 0;
}
