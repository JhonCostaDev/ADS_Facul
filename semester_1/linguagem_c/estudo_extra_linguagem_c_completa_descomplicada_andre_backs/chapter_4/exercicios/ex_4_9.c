#include <stdio.h>

/* =====================================================
Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

Altura (a) |                Peso(p)
                | p < 60   |  60 < p <=90    | p > 90
< 1.20          |    A     |        D        |   G   |
1.20 < a < 1.70 |    B     |        E        |   H   |
a > 1.7         |    C     |        F        |   I   |

=====================================================  */
//TODO:

int getUserInput();
int main(void) {
    //get input
    int number = getUserInput('Digite um número');
    printf("%d", number);
    //classify

    //Show results
    return 0;
}

int getUserInput(char prompt[]) {
    int value;
    printf("%s: \n", prompt);

    while (scanf("%d", &value) != 1) { //Looping until scanf don't read number 1
        printf("Error: Type only numbers!\n");

        while (getchar() != '\n');      //clean buffer
        
    }
    return value;
}

