#include <stdio.h>
/* =====================================================
Faça um programa que leia um número inteiro e verifique se esse número é par
ou ímpar.
=====================================================  */
int main(void) {
    int number;

    printf("Digite um número inteiro:\n");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("O número é PAR!\n");
    } else {
         printf("O número é ÍMPAR!\n");
    }
    return 0;
}