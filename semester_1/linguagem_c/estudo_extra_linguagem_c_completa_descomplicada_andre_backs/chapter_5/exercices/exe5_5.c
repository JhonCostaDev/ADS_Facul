#include <stdio.h>
/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
 */
int main(int argc, char const *argv[])
{
    int sum = 0;
    for(int i = 1;i <= 100; i++) {
        if(i % 2 == 0) {
            sum += i;
            //printf("%d,", i);
        }
    }
    printf("A soma dos 50 primeiros números pares é: %d\n", sum);
    
    return 0;
}
