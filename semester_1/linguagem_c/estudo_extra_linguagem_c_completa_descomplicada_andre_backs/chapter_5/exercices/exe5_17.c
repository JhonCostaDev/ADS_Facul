#include <stdio.h>
#include <unistd.h>
/*17) Escreva um programa que leia um número inteiro positivo N e em seguida impri-
ma N linhas do chamado triângulo de Floyd:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
 */
int main(void) {
  int number;

  printf("Digite a quantidade para calcular o série harmônica:\n");
  scanf("%d", &number);
  
  for(int i = 0; i < number; i++) {
    for(int j = 1; j <= number; j++)  {
      if(j == i) {
        printf("%d ", j);
      }
      printf(" ");
    }
    printf("\n");
  }
  
    return 0;
}
