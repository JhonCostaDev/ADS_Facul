#include <stdio.h>

/* Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
*/
int main(void){
	//Definir as variáveis
	int dia, mes, ano;
	
	printf("Digite dia, mes e ano separados por espaço.\n");
	scanf("%d%d%d", &dia, &mes, &ano);

	printf("%d/%d/%d\n", dia, mes, ano);
	return 0;
}
