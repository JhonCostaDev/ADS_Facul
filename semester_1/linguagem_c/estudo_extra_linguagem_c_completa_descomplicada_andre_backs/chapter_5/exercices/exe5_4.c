#include <stdio.h>
/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
considerando números maiores que 0.
 */
int main(int argc, char const *argv[])
{
    for(int i = 1;i <= 5; i++) {
        printf("%d\n", i * 3);
    }
    
    return 0;
}
