#include <stdio.h>
int main() {
    //Declarar as variáveis
    char produto_a[30] = "Produto A";
    char produto_b[30] = "Produto B";

    unsigned int estoque_a = 1000;
    unsigned int estoque_b = 500;

    float valor_a = 10.50;
    float valor_b = 20.40;

    unsigned int estoque_min_a = 500;
    unsigned int estoque_min_b = 1000;

    double valor_total_a;
    double valor_total_b;

    // Exibir as informações dos produtos

    printf("Produto %s tem em estoque %u e o valor unitário é R$%.2f\n", produto_a, estoque_a,valor_a);
    printf("Produto %s tem em estoque %u e o valor unitário é R$%.2f\n", produto_b, estoque_b,valor_b);

    //Comparação

    int resultado_a, resultado_b;
    resultado_a = estoque_a > estoque_min_a;
    resultado_b = estoque_b > estoque_min_b;

    // Usando operadores ternários para mensagens personalizadas
    printf("O produto %s tem estoque acima do mínimo: %s\n", produto_a, (resultado_a != 0)? "Verdadeiro": "Falso");
    printf("O produto %s tem estoque acima do mínimo: %s\n", produto_b, (resultado_b != 0)? "Verdadeiro": "Falso");

    //Comparação entre os valores totais dos produtos

    
    return 0;
}