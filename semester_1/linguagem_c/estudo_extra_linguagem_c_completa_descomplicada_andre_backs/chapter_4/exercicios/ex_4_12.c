#include <stdio.h>
/* =====================================================
Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante.
=====================================================  */
int getUserInput(char prompt[], int min, int max);


int main(void) {
    
    int number = getUserInput("Digite um número de 1 a 7 para ber o dia da semana:\n", 1, 7);
    char *dayweek;
    switch (number)
    {
    case 1:
        dayweek = "Domingo";
        break;
    case 2:
        dayweek = "Segunda-feira";
        break;
    case 3:
        dayweek = "Terça-feira";
        break;
    case 4:
        dayweek = "Quarta-feira";
        break;
    case 5:
        dayweek = "Quinta-feira";
        break;
    case 6:
        dayweek = "Sexta-feira";
        break;
    case 7:
        dayweek= "Sábado";
        break;
    
    default:
        break;  
    }
    printf("%s\n", dayweek);
    return 0;
}

int getUserInput(char prompt[], int min, int max) {
    int value;
    printf("%s", prompt);

    while (scanf("%d", &value) != 1 || value < min || value > max) { //Looping until scanf don't read number 1
        printf("Error: Digite apenas números no intervalo de  %d à %d\n", min, max);

        while (getchar() != '\n');      //clean buffer
        
    }
    return value;
}