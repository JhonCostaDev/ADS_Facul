#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite a data de hoje no formato dd mm AA\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    switch (mes) {
    case 1:
        printf("Data de Hoje: %d de Janeiro de %d\n", dia, ano);
        break;
    
    case 2:
        printf("Data de Hoje: %d de Fevereiro de %d", dia, ano);
        break;
    case 3:
        printf("Data de Hoje: %d de Março de %d\n", dia, ano);
        break;
    case 4:
        printf("Data de Hoje: %d de Abril de %d\n", dia, ano);
        break;
    case 5:
        printf("Data de Hoje: %d de Maio de %d\n", dia, ano);
        break;
    case 6:
        printf("Data de Hoje: %d de Junho de %d\n", dia, ano);
        break;
    case 7:
        printf("Data de Hoje: %d de Julho de %d\n", dia, ano);
        break;
    case 8:
        printf("Data de Hoje: %d de Agosto de %d\n", dia, ano);
        break;
    case 9:
        printf("Data de Hoje: %d de Setembro de %d\n", dia, ano);
        break;
    case 10:
        printf("Data de Hoje: %d de Outubro de %d\n", dia, ano);
        break;
    case 11:
        printf("Data de Hoje: %d de Novembro de %d\n", dia, ano);
        break;
    case 12:
        printf("Data de Hoje: %d de Dezembro de %d\n", dia, ano);
        break;
    default:
        break;
    }
    return 0;
}
