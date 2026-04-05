#include <stdio.h>
#define QUANTIDADE 4
/*==========================================================
Leia quatro valores float. Calcule e exiba a média aritimética
desses valores.
==========================================================*/
int main(){
	float numeros[QUANTIDADE];
	float soma = 0, media;
	printf("===== Média de Notas =====\n");
	
	printf("Digite %d notas\n", QUANTIDADE);
	for(int i = 0; i < sizeof(QUANTIDADE); i++) {
		printf("Digite a %dº nota\n", i + 1);
		scanf("%f", &numeros[i]);

		soma += numeros[i];
	}
	media = soma / QUANTIDADE;


	printf("A média aritimética dos números digitados é: %.2f", media);

	
	return 0;
}
