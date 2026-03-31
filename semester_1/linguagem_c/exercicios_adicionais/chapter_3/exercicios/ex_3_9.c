#include <stdio.h>
#define PI 3.14592
/* ==================================================================
Leia um ângulo em graus  apresente-o convertido em radianos.
A fórmula de conversão é:
R = G * PI / 180
Sendo G o ângulo em graus e R em radianos
===================================================================*/
int main(){
	float angleValue, radianus;

	printf("Digite o valor do ângulo:\n");
	scanf("%f", &angleValue);

	radianus = angleValue * PI / 180;

	printf("%.2f graus correspondem à %.2f º radianos\n", angleValue, radianus);
	return 0;
}
