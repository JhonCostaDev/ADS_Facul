#include <stdio.h>
/* ===================================================================
Leia um valor que representa uma temperatura em graus Celsius ºC e
apresente-a convertida em graus    Fahrenheit ºF

A fórmula de conversão é:

F = C * (9.0 / 5.0) + 32.0
====================================================================*/
int main(){
	float celsius, fahrenheit;

	printf(" ===== Celsius para Fahrenheit =====\n");
	printf("Digite a temperatura em graus Celsius ºC:\n");
	scanf("%f", &celsius);

	fahrenheit = celsius * (9.0 / 5.0) + 32;

	printf(" %.2f ºC correspondem à %.2fºF\n", celsius, fahrenheit);
	return 0;
}
