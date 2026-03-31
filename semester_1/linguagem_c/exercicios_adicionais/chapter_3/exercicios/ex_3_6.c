#include <stdio.h>
/* ===================================================================
Leia uma velocidade em Km/h (Kilometros) e apresente convertida em m/s
(Metros por segundo).
A fórmula é M = K / 36
=====================================================================*/
int main(){
	float velKm, velMs;

	printf("Digite a velocidade em Km/s\n");
	scanf("%f", &velKm);

	velMs = velKm / 36;

	printf("A velocidade de %2.f Km/s corresponde à %.2f m/s\n", velKm, velMs);
	return 0;
}
