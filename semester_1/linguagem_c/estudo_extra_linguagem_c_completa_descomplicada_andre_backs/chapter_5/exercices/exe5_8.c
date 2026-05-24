#include <stdio.h>
#include <unistd.h>
/*8) Faça um programa que leia 10 inteiros e imprima sua média.
 */
int main(int argc, char const *argv[])
{
    int count = 0, value = 0, sum = 0;
    float mean = 0;
    
    
    do{
        printf("Digite o %dº número: \n ", count + 1);
        scanf("%d", &value);
        sum += value;
        
        count++;

    }while(count < 10);

    mean = (float)sum / 10;

    
    printf("A soma dos números digitados é: %d!\n", sum);
    printf("A média dos números digitados é: %.2f!\n", mean);
    
    return 0;
}
