#include <stdio.h>
/*2) Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.
 */
int main(int argc, char const *argv[])
{
     int number;

    printf("Digite um número: \n");
    scanf("%d", &number);

    for(int i = number; i >= 0; i--) {
        printf("%d\n", i);
    }
    return 0;
}
