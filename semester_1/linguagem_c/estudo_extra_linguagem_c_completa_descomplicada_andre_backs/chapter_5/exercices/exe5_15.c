#include <stdio.h>
#include <unistd.h>
/*15) Elabore um programa que faça a leitura de vários números inteiros até que se digi-
te um número negativo. O programa tem de retornar o maior e o menor número lido.
 */
int main(void) {
  int number, smaller = 0, biggest = 0;
  while (1) {
    printf("Digite um número:\n");
    scanf("%d", &number);

    if (number < 0) break;

    if(number < smaller) {
      smaller = number;
    } else if(number > biggest) {
      biggest = number;
    }
    
  }
    printf("O menor número lido: %d. \n", smaller);
    printf("O maior número lido: %d. \n", biggest);
    return 0;
}
