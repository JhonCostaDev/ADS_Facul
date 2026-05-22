#include <stdio.h>
#include <unistd.h>
/*7) Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
valores e apresente o resultado na tela.
 */
int main(int argc, char const *argv[])
{
    int count = 0, sum = 0;
    int numbers[10];
    
    do{
        printf("Digite o %dº número: \n ", count + 1);
        scanf("%d", &numbers[count]);
        sum += numbers[count];
        
        count++;

    }while(count < 10);

    
    printf("A soma dos números digitados é: %d!\n", sum);
    
    return 0;
}
