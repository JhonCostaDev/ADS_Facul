#include <stdio.h>
#include <string.h>
/* =====================================================
Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas
O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado

=====================================================  */

char menuOperators();
float getNumbers(int position);
float calculate(float arr[], char operator);

int main(void) {
    float numbers[2];
    //menu
    char operator = menuOperators();

    //asking numbers
    for(int i = 0; i < 2; i++) {
        numbers[i] = getNumbers(i);
    }
    
    //calculating
    float result = calculate(numbers, operator);
    
    //Show result
    if(operator == '/' && numbers[1] == 0) {
        printf("Não é possível dividir por Zero!");
    } else {
        printf("%.2f %c %.2f = %.2f", numbers[0], operator, numbers[1], result);
    }
    return 0;
}

char menuOperators() {
    char mathSimbols[] = {'+', '-', '*', '/'};
    char userChoice;

    printf("===== Calculadora Matemática =====\n");
    do
    {
        printf("Escolha uma das 4 operações básicas para calcular\nSoma \t\t(+)\nSubtração \t(-)\nMultiplicação \t(*)\nDivisão \t(/)\n");
        scanf("%c", &userChoice);
        while (getchar() != '\n'); // clean buffer

        if(strchr(mathSimbols, userChoice) !=  NULL) {
            return userChoice;
        }

        printf("Entrada inválida\n");
    } while (1);
}

float getNumbers(int position) {
    float number;
    do {
        printf("Digite o %dº número\n", position + 1);
        if(scanf("%f", &number) == 1) {
            return number;
        }
        printf("Entrada inválida! Digite novamente.\n");
        while (getchar() != '\n');
    }while(1);
    
    
}

float calculate(float arr[], char operator) {
    switch (operator)
    {
    case '+':
        return arr[0] + arr[1];
        break;
    case '-':
        return arr[0] - arr[1];
        break;
    case '*':
        return arr[0] * arr[1];
        break;
    case '/':
        if (arr[1] == 0) {
            printf("Error: Divisão por Zero\n");
            return 0;
        }
        return arr[0] / arr[1];
        break;
    default:
        break;
    }
}

