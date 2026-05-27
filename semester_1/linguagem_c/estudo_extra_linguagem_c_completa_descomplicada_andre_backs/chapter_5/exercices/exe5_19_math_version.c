#include <stdio.h>
/*19) Faça um programa que calcule e escreva o valor de S:
s = 1/1+ 3/2 + 5/3 + 7/4 + ... 99/50

Tk = 2 - 1 / k

onde K é a quantidade de termos

 */

int main(void) {
    float sumN = 0;
    int number;

    printf("Digite a quantidade de termos: \n");
    scanf("%d", &number);
    
    for(int i = 0; i < number; i++) {
        sumN += (2 * (i + 1) - 1) / (float)(i + 1);
        printf("%d - %.4f\n", i + 1, sumN);
    }

    printf("A soma dos 55 primeiros termos (Números Ímpares divididos pelos Naturais) é: %.4f\n", sumN);
}
