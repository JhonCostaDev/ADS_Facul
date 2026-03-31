#include <stdio.h>
#include <time.h>
/* ================================================================
Faça um programa que calcule o ano de nascimento de uma pessoa a partir
de sua idade.
==================================================================*/

int main(){
	time_t secondsSince1970 = time(NULL);

	struct tm *currentTime = localtime(&secondsSince1970);

	int year = currentTime -> tm_year + 1900;
	int currentAge;

	printf("Digite sua Idade atual:\n");
	scanf("%d", &currentAge);

	printf("Você nasceu em: %d\n", year - currentAge);
	printf("%d\n", year);
	return 0;
}
