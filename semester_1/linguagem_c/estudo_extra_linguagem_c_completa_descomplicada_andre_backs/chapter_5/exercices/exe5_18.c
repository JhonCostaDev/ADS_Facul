#include <stdio.h>
#include <unistd.h>
/*18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o
número fornecido é primo ou não.
 */

int main(void) {
    int number, divisors = 0;
    
    do {
        printf("Digite um número para verificar se é primo:\n");
        scanf("%d", &number);

        if (number > 0) break;

        printf("O número deve ser maior que zero\n");

    } while(1);

    for(int i = 1; i <= number; i++) {
        if (number % i == 0) {
            divisors ++;
        }
    }

    if(divisors > 2) {
        printf("Não é primo, ");
        printf("o número %d tem %d divisores\n", number, divisors);
    } else {
        printf("É primo ");
    }
    return 0;
}

