#include <stdio.h>
/*
Em uma operação utilizando o operador de quociente /, se o numerador
e o  denominador forem números inteiros, por padrão o compilador retornará apenas a parte inteira da divisão.
*/
int main(void) {
    float x, y;

    x = 5 / 4;
    printf("Dividindo inteiros: %f\n", x);

    x = 5 / 4.0;
    printf("Dividindo inteiro por denominador float: %f\n", x);
    
    y = (float)5 / 4;
    printf("Dividindo inteiros com casting explícito: %f\n", x);
    return 0;
}