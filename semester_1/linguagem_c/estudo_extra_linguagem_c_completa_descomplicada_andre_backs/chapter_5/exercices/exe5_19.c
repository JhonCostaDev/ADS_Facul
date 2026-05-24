#include <stdio.h>
/*19) Faça um programa que calcule e escreva o valor de S:
s = 1/1+ 3/2 + 5/3 + 7/4 + ... 99/55

an=2n−1/n

 */
int main(void) {
    float sumN = 0;
    for (float i = 1; i <= 100; i++) {
        sumN += 2*i - 1 / i;
    }
    printf("\n%f\n", sumN);
}
