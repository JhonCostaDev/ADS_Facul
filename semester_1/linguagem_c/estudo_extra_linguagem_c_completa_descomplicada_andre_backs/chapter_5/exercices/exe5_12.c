#include <stdio.h>
#include <unistd.h>
/*12) Escreva um programa que leia um número inteiro e calcule a soma de todos os
divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores
do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
 */
int main(int argc, char const *argv[]) {
   
  int number, i = 1, sum = 0;
  printf("Digite um número para exibir seus divisores: \n");
  scanf("%d", &number);

  printf("Os divisores de %d são: \n", number);

  while (i < number) {
    if(number % i == 0) {
      //printf("%d, ", i);
      sum += i;
    }

    i++; 
  }

  printf("A soma de todos os divisores de %d é: %d\n", number, sum);
    return 0;
}
