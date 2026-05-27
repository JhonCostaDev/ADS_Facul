#include <stdio.h>
/*20) Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor
E, conforme a fórmula a seguir:

s = 1/1! + 1/2! + 1/3! + 1/4! + ... 1/N!
 */
int main(void)
{
    int number;

    printf("Digite um número: \n");
    scanf("%d", &number);

    for(int i = 0; i <= number; i++) {
        printf("%d\n", i);
    }
    return 0;
}
