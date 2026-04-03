#include <stdio.h>
/* =====================================================
Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
For maior que 20% do salário, imprima: “Empréstimo não concedido.”•
Caso contrário, imprima: “Empréstimo concedido.”
=====================================================  */
int main(void) {
    float salary, loan;

    printf("Digite o valor do salário R$:\n");
    scanf("%f", &salary);

    printf("Digite o valor da parcela do empréstimo R$:\n");
    scanf("%f", &loan);

    
    if (loan > salary * 0.2) {
        printf("Empréstimo não concedido.\n");
    } else {
        printf("Empréstimo concedido.\n");
    }
    return 0;
}