#include <stdio.h>
#include <unistd.h>
/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e im-
prima sua média.
 */
int main(int argc, char const *argv[])
{
  int value = 0, sum = 0, i = 0; 
  float mean = 0;

  while(i < 10) {
    printf("Digite o %dº número: \n", i + 1);
    scanf("%d", &value);

    if (value < 0) {
        continue;
    }
    sum += value;
    i++;
  }
  mean = sum / 10;

  printf("A média dos números digitados é: %d\n", mean);

    return 0;
}
