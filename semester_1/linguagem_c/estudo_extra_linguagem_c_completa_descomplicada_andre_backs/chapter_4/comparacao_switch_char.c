#include <stdio.h>
#include <stdlib.h>
//TODO: Validação do caractere maiúsculo
int main() {
    char opcao;

    printf("Qual é a capital do Brasil?\n");
    printf("(A) - Rio de Janeiro\n(B) - São Paulo\n(C) - Brasília\n(D) - Salvador\n");
    opcao = getchar();

    switch (opcao)
    {
    case 'A':
        printf("Resposta Errada\nEmbora já tenha sido a capital, desde 1960 o rio de janeiro não é mais a capital do Brasil\n");
        break;
    case 'B':
        printf("Resposta Errada\nSão Paulo é a maior econômia e a cidade mais populosa do Brasil, mas não é a capital\n");
        break;
    case 'C':
        printf("Resposta Correta\nA cidade de Brasília se tornou a capital federal no ano de 1960\n");
        break;
    case 'D':
        printf("Resposta Errada\nSalvador foi a primeira capital da colonia brasileira, mas nunca a capital do empério ou da república brasileira\n");
        break;
    
    default:
        break;
    }
    return 0;
}
