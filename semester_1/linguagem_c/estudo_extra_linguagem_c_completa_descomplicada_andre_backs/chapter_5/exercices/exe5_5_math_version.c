#include <stdio.h>
/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
 */
int main(int argc, char const *argv[])
{
    int sum = 0, number = 50;
    // printf("Digite quantos números pares, você quer saber a soma de todos eles?\n");
    // scanf("%d", &number);

    sum = number  * (number + 1);
    printf("A soma dos 50 primeiros números pares é: %d\n", sum);
    
    return 0;
}
