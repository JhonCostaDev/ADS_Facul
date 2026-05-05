#include <stdio.h>
/* =====================================================
Faça um programa que informe o mês de acordo com o número digitado pelo
usuário. Exemplo: Entrada = 4. Saída = Abril.
=====================================================  */
int getUserInput(char prompt[], int min, int max);


int main(void) {
    int number = getUserInput("Digite um número de 1 a 12\nPara ver o mês correspondente\n", 1, 12);
    char *mounth;
    
    switch (number)
    {
    case 1:
        mounth = "Janeiro";
        break;
    case 2:
        mounth = "Fevereiro";
        break;
    case 3:
        mounth = "Março";
        break;
    case 4:
        mounth = "Abril";
        break;
    case 5:
        mounth = "Maio";
        break;
    case 6:
        mounth = "Junho";
        break;
    case 7:
        mounth = "Julho";
        break;
    case 8:
        mounth = "Agosto";
        break;
    case 9:
        mounth = "Setembro";
        break;
    case 10:
        mounth = "Outubro";
        break;
    case 11:
        mounth = "Novembro";
        break;
    case 12:
        mounth = "Dezembro";
        break; 
    
    default:
        break;
    }

    printf("%s\n", mounth);
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