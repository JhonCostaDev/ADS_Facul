#include <stdio.h>

//Faça um programa que leia um número e retorne seu antecessor e seu sucessor.
int main(){

	int numero;
	printf("======= Antecessor / Sucessor =======\n");

	printf("Digite um número inteiro:\n");
	scanf("%d", &numero);
 
	printf("Antecessor: %d\nSucessor: %d\n", numero -1, numero + 1);

return 0;
}
