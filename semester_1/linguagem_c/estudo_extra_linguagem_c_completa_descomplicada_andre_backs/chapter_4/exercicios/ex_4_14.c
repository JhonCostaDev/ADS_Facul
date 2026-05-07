#include <stdio.h>
#include <string.h>
/* =====================================================
Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.

=====================================================  */


int main(void) {
    int number = 15;


    if(number % 3 == 0 && number % 5 != 0) {
        printf("É divisível por 3");
    } else if(number % 3 != 0 && number % 5 == 0) {
        printf("É divisível por 5");
    } else if(number % 3 == 0 && number % 5 == 0) {
        printf("É divisível por ambos");
    }
    return 0;
}



float getNumbers() {
    float number;
    do {
        printf("Digite o número\n");
        if(scanf("%f", &number) == 1) {
            return number;
        }
        printf("Entrada inválida! Digite novamente.\n");
        while (getchar() != '\n');
    }while(1);
}

