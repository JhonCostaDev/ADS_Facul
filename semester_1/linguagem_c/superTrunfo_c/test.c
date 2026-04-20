#include <stdio.h>
//TODO: implement clean screen function
//molde das cartas
struct cityCard {
    int carNumber;
    char state;
    char cityName[20];
    char cardCod[3];
    //attributes
    int touristAttractions;
    unsigned int long population;
    float area;
    float pib;
    float pibPerCapita;
    float populationDensity;
};

//prototypes
int mainMenu();
int getUserInput();

//main
int main(int argc, char const *argv[])
{
    int test = mainMenu();
    printf("%d\n", test);
    return 0;
}

//criar menu
/*
1 - novo jogo
    - Inicia um novo jogo contra a maquina
2 - ver regras do jogo
    - Exibir as regras do jogo
3 - cadastrar cartas
    - Inserir novas castas no baralho
4 - ver cartas cadastradas
- Exibir a quantidades de cartas        cadastradas e poder ver carta a carta
0 - sair
    - Sair do programa
*/
int mainMenu() {
    printf("\t===== Super Trunfo Cidades =====\n");
    printf("\t\t1 - Novo Jogo\n\t\t2 - Ver regras do Jogo\n\t\t3 - Cadastrar Nova Carta\n\t\t4 - Ver Cartas Cadastradas\n\t\t0 - Sair do Game\n");
    int option = getUserInput();
    return option;
}

int getUserInput() {
    int value;
    printf("Escolha uma das opções acima:\n");

    //loop
    while (scanf("%d", &value) != 1 || value < 0 || value > 4) {
        printf("Error: Digite apenas números entre 0 e 4 (inclusos): \n");

        //clean buffer
        while (getchar() != '\n');
    }

    return value;
}
