#include <stdio.h>
const float PI = 3.14592;
/* ==================================================================================
Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspon-
dente. 
A área do círculo é A = π * raio2, sendo π = 3.141592
====================================================================================*/
int main() {
	float raio, area;
	printf("Calculo da Área de um Circulo\n");

	printf("Digite o Raio\n");
	scanf("%f", &raio);

	

	area = PI * (raio * raio);

	printf("O Área do Circulo é de: %.2fcm³\n", area);
	
	return 0;
}