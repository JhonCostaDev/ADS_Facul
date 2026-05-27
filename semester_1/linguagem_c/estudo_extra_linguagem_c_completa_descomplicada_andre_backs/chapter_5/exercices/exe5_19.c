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
            //printf("Impar: %d, \n", i);
            numerador[idx] = count;
            idx++;
        }

        if(idx >= 55) break;

        count++;
    }
    

    printf("Naturais\n");
    for(int i = 0; i < 55; i++) {
        printf("%d, ", denominador[i]);
    }

    printf("\nÍmpares\n");
    for(int i = 0; i < 55; i++) {
        printf("%d, ", numerador[i]);
    }

    printf("\nLenght impares: %d\n", sizeof(numerador) / sizeof(numerador[0]));
    printf("\nLenght Naturais: %d\n", sizeof(denominador) / sizeof(denominador[0]));

    for (int i = 0 ; i <sizeof(denominador) / sizeof(denominador[0]); i++) {
        sumN += (float) numerador[i] / (float)denominador[i];
        printf("%d: %.2f\n", i, (float) numerador[i] / (float)denominador[i]);
        printf("%d: %d\n", i, numerador[i]);
        
    }

    printf("\nSum: %f\n", sumN);
}
