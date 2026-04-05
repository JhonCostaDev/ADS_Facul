#include <stdio.h>

int main() {
    int num;

    printf("Digite um número\n");
    scanf("%d", &num);
    

    if(num == 10) {
        printf("O número é igual que 10\n");
    } else if (num < 10) {
        printf("O número é menor que 10\n");
    } else {
        printf("O número é maior que 10\n");
    }
    return 0;
}
