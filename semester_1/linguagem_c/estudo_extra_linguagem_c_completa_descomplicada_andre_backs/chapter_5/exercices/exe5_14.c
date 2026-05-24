#include <stdio.h>
#include <unistd.h>
/*14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuá-
rio. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa

no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8,
13, 21, 34.
 */
int main(void) {
  int value, first = 0, second = 1, next;
    printf("Digite a quantidade de termos da sequência Fibonacci você quer ver: \n");
    scanf("%d", &value);

    for(int i = 0; i < value; i++) {
      if (i == 0) {
        printf("%d, ", first);
      } else if(i == 1) {
        printf("%d, ", second);
      } else {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
      }
      
    }
    return 0;
}
