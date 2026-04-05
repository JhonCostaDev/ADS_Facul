#include <stdio.h>

int main() {
    int opcao;
    

    printf("Digite um número para comparar à 10\n");
    scanf("%d", &opcao);

    (opcao == 10)? printf("%d é igual a 10\n", opcao): printf("%d é diferente de 10\n", opcao);
    return 0;
}
