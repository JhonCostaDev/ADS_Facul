#include <stdio.h>
#include <ctype.h> // biblioteca da função toLower
/* ==================================================================================
Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.
====================================================================================*/
int main() {
	char userChar;
	int lower;
	printf("Maiúscula para Minúscula\n");

	printf("Digite uma letra Maiúscula\n");
	scanf("%c", &userChar);
	if (isupper(userChar) == 0) {
		userChar = (char)toupper(userChar);
	}
	
	
	lower = tolower((int)userChar);
	
	printf("Maiúscula: %c\nMinúscula: %c\n", userChar,lower);
	printf("%c\n", userChar);
	return 0;
}