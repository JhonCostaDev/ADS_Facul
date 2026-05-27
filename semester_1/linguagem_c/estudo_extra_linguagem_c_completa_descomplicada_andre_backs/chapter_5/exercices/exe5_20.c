#include <stdio.h>
/*20) Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor
E, conforme a fórmula a seguir:

s = 1/1! + 1/2! + 1/3! + 1/4! + ... 1/N!
 */

int calcFactorial(int value);

int main(void)
{
    int number;
    float sum;

    printf("Digite um número: \n");
    scanf("%d", &number);

    int factorial = calcFactorial(number);
    printf("%d\n", factorial);

    for (int i = 0; i < number; i++) {
        sum += 1 / (float) calcFactorial(i + 1);
    }
    printf("%.2f\n", sum);
    return 0;
}

int calcFactorial(int value) {
    int factorial = 1;
    
    while (value > 0)
    {
        factorial *= value;
        value --;
    }
    return factorial;
}
