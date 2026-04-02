#include <stdio.h>

void printBinario(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 8 == 0) printf(" ");   // separa bytes
    }
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Numero: %d\n", numero);
    printf("Binario:  ");
    printBinario(numero);
    printf("\n");

    printf("Complemento bit a bit (~%d):\n", numero);
    printf("Valor:   %d\n", ~numero);
    printf("Binario: ");
    printBinario(~numero);
    printf("\n");

    return 0;
}