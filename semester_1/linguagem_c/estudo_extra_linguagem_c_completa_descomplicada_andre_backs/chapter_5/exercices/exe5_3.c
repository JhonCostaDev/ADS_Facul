#include <stdio.h>
/*3) Faça um programa que leia um número inteiro N e depois imprima os N primei-
ros números naturais ímpares.
 */
int main(int argc, char const *argv[])
{
     int number, count;

    printf("Digite um número: \n");
    scanf("%d", &number);
    count = 0;
    while(count < number * 2) {
        if(count % 2 != 0) {
            printf("%d\n", count);
        }
        count++;
    }
    return 0;
}
