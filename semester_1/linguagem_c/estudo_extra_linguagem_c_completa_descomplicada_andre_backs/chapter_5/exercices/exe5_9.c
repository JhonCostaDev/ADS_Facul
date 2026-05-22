#include <stdio.h>
#include <unistd.h>
/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
valor lido..
 */
int main(int argc, char const *argv[])
{
  int smaller=10000, biggest=0, value=0;

  for(int i = 0; i < 10; i++) {
        printf("Digite um número: \n");
        scanf("%d", &value);

        if(value < smaller) {
            smaller = value;
        } else if(value > biggest) {
            biggest = value;
        }
    }
    printf("O menor número digitado foi: %d\n", smaller);    
    printf("O maior número digitado foi: %d\n", biggest);
    return 0;
}
