#include <stdio.h>

/*
Faça um programa que leia três caracteres do tipo char e depois os imprima um
em cada linha. Use um único comando printf() para isso.
*/
int main(void) {
    char letra_1, letra_2, letra_3;
    printf("Digite três letras separadas por espaço:\n");
    scanf("%c %c %c", &letra_1, &letra_2, &letra_3);

    printf("As letras digitadas foram: \n\"%c\"\n\"%c\"\n\"%c\"\n", letra_1, letra_2, letra_3);
    
    return 0;
}