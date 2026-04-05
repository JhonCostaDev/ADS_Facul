#include <stdio.h>
#include <math.h>
/* =====================================================
Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
O número digitado ao quadrado.•
A raiz quadrada do número digitado.
=====================================================  */
int main(void) {
    int number;
    float squareNumber, squareRoot;

    printf("Digite um número inteiro:\n");
    scanf("%d", &number);

    if (number > 0) {
        squareNumber = pow(number, 2);
        squareRoot = sqrt(number);
        printf("Raiz Quadrada: %.2f\n", squareRoot);
        printf("Potencia: %.2f\n", squareNumber);
    }

    
    return 0;
}