#include <stdio.h>
/*21) Escreva um programa que leia certa quantidade de números, imprima o maior
deles e quantas vezes o maior número foi lido. A quantidade de números a serem
lidos deve ser fornecida pelo usuário.
 */
int main(void) {
    int count = 0, biggest = 0, quant = 0, number;

    printf("Digite a quantidade de números a serem lidos: \n");
    scanf("%d", &count);

    for(int i = 0; i < count; i++){
        
        printf("Digite o  %dº número: \n", i + 1);
        scanf("%d", &number);
        
        if(i == 0) {
            biggest = number;
            quant = 1;
        } else {
            if(number > biggest) {
                biggest = number;
                quant = 1;
            } else if(number == biggest) {
                quant++;
            }
        }
    }
    
    printf("O maior número lido foi: %d, e ele foi lido %d vezes", biggest, quant);

    return 0;
}
