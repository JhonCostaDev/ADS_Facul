#include <stdio.h>
/*19) Faça um programa que calcule e escreva o valor de S:
s = 1/1+ 3/2 + 5/3 + 7/4 + ... 99/55

an=2n−1/n

s = 2 - 1/n

 */
//TODO: melhorar esse cod
int main(void) {
    float sumN = 0;
    int numerador[55] ={0};
    int denominador[55]={0};
    
    for(int i = 0; i < 55; i++) {
        denominador[i] = i + 1;
    }

    int count = 0;
    int idx = 0;
    while (count < 110) {
        if(count % 2 != 0){
            numerador[idx] = count;
            idx++;
        }

        if(idx >= 55) break;

        count++;
    }

    for (int i = 0 ; i <sizeof(denominador) / sizeof(denominador[0]); i++) {
        sumN += (float) numerador[i] / (float)denominador[i]; 
    }

    printf("A soma dos 55 primeiros termos (Números Ímpares divididos pelos Naturais) é: %.4f\n", sumN);
}
