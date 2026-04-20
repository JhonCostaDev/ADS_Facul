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
int getUserInput(char msg[], int min, int max);

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
    int option = getUserInput("Digite uma das opções acima: \n", 0, 4);
    return option;
}

//
int getUserInput(char msg[], int min, int max) {
    int value;

    while(1) {
        printf("%s", msg);

        if (scanf("%d", &value) == 1 && value >= min && value <= max) {
            while (getchar() != '\n');
            return value;
        }
        printf("Error: Digite apenas números entre %d e %d (inclusos): \n", min, max);
    
        //clean buffer
        while (getchar() != '\n');
    }
    
}
