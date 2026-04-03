#include <stdio.h>
/* =====================================================
Faça um programa que leia dois números e mostre qual deles é o maior.
=====================================================  */
int main(void) {
    int number_1, number_2;

    printf("Digite o primeiro número: ");
    scanf("%d", &number_1);
    printf("Digite o segundo número: ");
    scanf("%d", &number_2);

    if (number_1 > number_2) {
        printf("O número %d é maior!\n", number_1);
    } else {
        printf("O número %d é maior!\n", number_2);
    }
    return 0;
}