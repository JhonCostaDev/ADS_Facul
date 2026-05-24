#include <stdio.h>
#include <unistd.h>
/*11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exem-
plo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
 */
int main(int argc, char const *argv[]) {
  int number, value, i = 1;
  printf("Digite um número para exibir seus divisores: \n");
  scanf("%d", &number);

  printf("Os divisores de %d são: \n", number);

  while (i <= number) {
    if(number % i == 0) {
      printf("%d, ", i);
    }

    i++; 
  }
  

    return 0;
}
