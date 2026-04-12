#include <stdio.h>

/* =====================================================
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas

    * Homem: (72,7 * altura) - 58
    * Mulher: (62,1 * altura) - 44,7
=====================================================  */
int main(void) {
    //Declare variables
    float height, targetWeight; //height -> altura | targetWeight -> peso ideal 
    char genre;                 // Sexo
    
    //get gende
    printf("Digite (M) para Masculino\nDigite (F) para Feminino\nVocê é: ");
    scanf("%c", &genre);

    if (genre == 'M' || genre =='m' || genre =='F'|| genre =='f') {
        //Get height
        printf("Digite sua Altura\n");
        scanf("%f", &height);

        switch (genre) {
        case 'M':
        case 'm':
            targetWeight = (72.7 * height) - 58;
            break;
        case 'F':
        case 'f':
            targetWeight = (62.1 * height) - 44.7;
            break;
        
        default:
        printf("\n");
            break;
        }

        printf("Seu peso ideal é de %.2f kg\n", targetWeight);
    } else {
        printf("Entrada inválida\n");
    }

    
    return 0;
}