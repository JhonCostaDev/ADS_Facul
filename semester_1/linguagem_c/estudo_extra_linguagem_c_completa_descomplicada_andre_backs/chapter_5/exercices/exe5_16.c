#include <stdio.h>
#include <unistd.h>
/*16) Em matemática, o número harmônico designado por Hn define-se como o enési-
mo termo da série harmônica. Ou seja:

Hn = 1 + 1/2 + 1/3 + 1/4 + ... 1/n

Apresente um programa que calcule o valor de qualquer Hn.
 */
int main(void) {
  int number;
  float hn = 0.0;

  
  printf("Digite a quantidade para calcular o série harmônica:\n");
  scanf("%d", &number);

  for(int i = 1; i <= number; i++) {
    hn += 1.0 / i;
    printf("a série harmônica de %d é: %.3f\n", i, hn);
  }
    return 0;
}
