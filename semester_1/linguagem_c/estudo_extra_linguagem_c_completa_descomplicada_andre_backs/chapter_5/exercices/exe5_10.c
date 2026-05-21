#include <stdio.h>
#include <unistd.h>
/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e im-
prima sua média.
 */
int main(int argc, char const *argv[])
{
  int value = 0, int sum = 0;

  for(int i = 0; i < 10; i++) {
     printf("Digite o %dº número: \n");
        scanf("%d", &value);
        if (value >= 0) {
             sum += value;
        }
  }
    return 0;
}
