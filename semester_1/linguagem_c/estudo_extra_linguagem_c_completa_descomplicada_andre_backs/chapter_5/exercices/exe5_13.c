#include <stdio.h>
#include <unistd.h>
/*Faça um programa que exiba a soma de todos os números naturais abaixo de
1.000 que são múltiplos de 3 ou 5.
 */
int main(int argc, char const *argv[]) {
   
  int limit = 1000, i = 1, sum = 0;
  

  while (i < limit) {
    
  if(i % 3 == 0 || i % 5 == 0) {
    sum += i;
  }
    i++; 
  }

  printf("A soma de todos os naturais de 1 à 1000 que são multiplos de 3 ou 5 é de %d\n",sum);
    return 0;
}
