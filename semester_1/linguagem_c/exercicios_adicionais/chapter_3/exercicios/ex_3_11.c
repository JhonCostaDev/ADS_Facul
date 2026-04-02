#include <stdio.h>
const float PI = 3.14592;
/* ==================================================================================
Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
 V = PI * R ** 2 * altura
====================================================================================*/
int main() {
	float raio, altura, volume;
	printf("Calculo do Volume de um Cilindro\n");

	printf("Digite o Raio\n");
	scanf("%f", &raio);

	printf("Digite a altura\n");
	scanf("%f", &altura);

	volume = PI * (raio * raio) * altura;

	printf("O volume é de aproximadamente: %.2fcm³\n", volume);
	
	return 0;
}