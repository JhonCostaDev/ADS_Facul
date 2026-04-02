#include <stdio.h>
#include <math.h>

/* ==================================================================================
Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:

h = raiz quadrada de a² + b²
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado
====================================================================================*/
int main() {
	float cateto_1, cateto_2, hipotenusa;

	printf("===== Calculo da Hipotenusa =====\n");
	printf("Digite o primeiro cateto\n");
	scanf("%f", &cateto_1);

	printf("Digite o segundo cateto\n");
	scanf("%f", &cateto_2);

	hipotenusa = sqrt(pow(cateto_1, 2) + pow(cateto_2, 2));



	printf("A hipotenusa vale:  %.2f\n", hipotenusa);
	return 0;
}