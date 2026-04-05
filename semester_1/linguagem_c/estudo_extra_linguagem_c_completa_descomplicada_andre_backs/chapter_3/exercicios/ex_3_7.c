#include <stdio.h>
/* =================================================================
TODO: implementar com api: https://economia.awesomeapi.com.br/last/USD-BRL

Faça um programa que leia um valor em reais e a cotação do dolar.
Em seguida imprima o valor correspondente em dólares.
====================================================================*/
int main(){

	float currentDolar, amountReal;
	printf(" ====== Conversor de Real R$ para Dolar US$ =====\n");

	printf("Qual a cotação do dolar hoje?\n");
	scanf("%f", &currentDolar);

	printf("Quantos Reais (R$) você quer converter para Dólar (Us$):\n");
	scanf("%f", &amountReal);

	printf("R$%.2f equivalem à Us$%.2f\n", amountReal, amountReal * currentDolar);
	return 0;
}
