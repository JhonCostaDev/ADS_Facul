#include <stdio.h>
/* =====================================================
Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuá-
rio e mostrado na tabela a seguir:

Número digitado     |       Média
1                   |   media = x * y * z
2                   |   media = (x + 2 * y + 3 * z) / 3
3                   |   media = 1 (1/x + 1/y + 1/z)
4                   |   media = x + y + z / 3
=====================================================  */
int getUserInput(char prompt[], int min, int max);
int askMean();
float calcMean(int numbers[], int option);

int main(void) {
    int numbers[3], option;
    char *meanType[] = {"Geométrica","Ponderada", "Harmônica", "Aritmética"};
    float mean;
    

    option = askMean();

    for (int i = 0; i < 3; i++) {
        printf("Digite o %dº número :\n", i + 1);
        numbers[i] = getUserInput("", 0, 9999);
    }

    mean = calcMean(numbers, option);
    printf("A média %s dos números digitados é: %.2f\n", meanType[option -1],mean);
    
    return 0;
}

int getUserInput(char prompt[], int min, int max) {
    int value;
    printf("%s", prompt);

    while (scanf("%d", &value) != 1 || value < min || value > max) { //Looping until scanf don't read number 1
        printf("Error: Digite apenas números no intervalo de  %d à %d", min, max);

        while (getchar() != '\n');      //clean buffer
        
    }
    return value;
}

int askMean() {
    printf("===== Calculando médias de três números =====\nQual média você quer calcular?\nDigite:\n");
    int option = getUserInput("(1) - Média Geométrica\n(2) - Média Ponderada\n(3) - Média Harmônica\n(4) - Média Aritimética\n", 1, 4);
    return option;
}

float calcMean(int numbers[], int option) {
    int x, y, z;
    float mean;
    x = numbers[0];
    y = numbers[1];
    z = numbers[2];

    switch (option)
    {
    case 1: //Geometrica
        mean = x * y * z;
        break;
    case 2: //ponderada
        mean = ((x + 2) * (y + 3) * z) / 6;
        break;
    case 3: // harmonica
        mean = 1 /(1/x) + (1/y) + (1/z);
        break;
    case 4: // aritimetica
        mean = (x + y + z) / 3;
        break;
    
    default:
        break;
    }

    return mean;
}