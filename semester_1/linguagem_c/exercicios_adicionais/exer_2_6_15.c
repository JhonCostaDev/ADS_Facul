#include <stdio.h>

/*
Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima- as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.
*/
int main(void) {
    char letra;
    int inteiro;
    float real;

    printf("Digite uma letra, um inteiro e um número real separados por espaço :\n");
    scanf("%c %d %f", &letra, &inteiro, &real);

    printf("Foram digitados: \n\t\"%c\"\n\t\"%d\"\t\n\t\"%f\"\t\n", letra, inteiro, real);
    
    return 0;
}