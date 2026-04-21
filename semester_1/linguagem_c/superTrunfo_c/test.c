#include <stdio.h>
//TODO: corrigir erros nas funções cadastrar nova carta e exibir cartas
//Salvar cartas cadastradas em arquivo

//Consts
#define MAX_CARDS 100
//molde das cartas
struct cityCard {
    int cardNumber;
    char state[3];
    char cityName[20];
    char cardCod[10];
    //attributes
    int touristAttractions;
    unsigned long int population;
    float area;
    float pib;
    float pibPerCapita;
    float populationDensity;
    //superPower
    long double superPower;

};

//prototypes
int mainMenu();
int getUserInput(char msg[], int min, int max);
void cleanScreen();
void createNewCard(struct cityCard card[], int *numberOfCards);
void listCards(struct cityCard card[], int arraysize);
void pauseEnter();

//main
int main(int argc, char const *argv[]) {
    struct cityCard cityCards[MAX_CARDS]; // Array de cartas
    int numberOfCards = 0;
    int option = 0;
    do
    {
        
        option = mainMenu();
    
        switch (option) {
        case 1:
            printf("New Game%d\n", option);
            break;
        case 2:
            printf("Rules%d\n", option);
            break;
        case 3:
            printf("New card%d\n", option);
            createNewCard(cityCards, &numberOfCards);
            break;
        
        case 4:
            printf("Listar cartas%d\n", option);
            listCards(cityCards, numberOfCards);
            pauseEnter();
            break;
        default:
            break;
        }
    } while (option != 0);
    
    
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
    cleanScreen();
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

void cleanScreen() {
    printf("\033[H\033[J");
    fflush(stdout); // Flush the output buffer to ensure the screen is cleared immediately
}

//This function create a new card
//TODO: exibir mensagem de inserção success
//TODO: super power está exibindo os valores de área
void createNewCard(struct cityCard card[], int *numberOfCards){
    //int cardNumber = numberOfCards;
    if(*numberOfCards < MAX_CARDS) {
        card[*numberOfCards].cardNumber = (*numberOfCards) + 1;
        printf("Digite o Estado da federação da carta: (EX: São Paulo = sp):\n");
        scanf("%s", card[*numberOfCards].state);
        //sprintf = generate cardCod
        sprintf(card[*numberOfCards].cardCod, "%s%d", card[*numberOfCards].state, card[*numberOfCards].cardNumber);

        printf("Digite o Nome da cidade: (EX: São Paulo):\n");  //TODO: Resolver nome /espaço, subistituir fgets().
        scanf("%s", card[*numberOfCards].cityName);

        //get population
        printf("Digite quantas pessoas vivem em %s: \n", card[*numberOfCards].cityName);
        scanf("%lu", &card[*numberOfCards].population);

        //get area
        printf("Digite à área de %s: ", card[*numberOfCards].cityName);
        scanf("%f", &card[*numberOfCards].area);

        //get pib
        printf("Digite o PIB de %s: ", card[*numberOfCards].cityName);
        scanf("%f", &card[*numberOfCards].pib);

        //get touristAttractions
        printf("Digite a quantidade de atrações turísticas de %s: ", card[*numberOfCards].cityName);
        scanf("%d", &card[*numberOfCards].touristAttractions);
        
        // Generate pibPerCapita
        card[*numberOfCards].pibPerCapita = card[*numberOfCards].pib / card[*numberOfCards].population;
        // Generate population density 
        card[*numberOfCards].populationDensity = card[*numberOfCards].population / card[*numberOfCards].area;
        //Generate superPower 
        card[*numberOfCards].superPower = (long double) card[*numberOfCards].population + card[*numberOfCards].area + card[*numberOfCards].pib + card[*numberOfCards].touristAttractions + card[*numberOfCards].pibPerCapita + (1/card[*numberOfCards].populationDensity);
        (*numberOfCards)++;
    }
}

void listCards(struct cityCard card[], int arraysize) {//TODO: Verificar especificadores corretos Unsigend long
    printf("===== Cartas cadastradas: %d =================\n", arraysize);
    
    for(int i = 0; i < arraysize; i++) {
        printf("Número da carta: %d\nEstado(UF):%s\nCidade: %s\nCódigo da Carta: %s\nPopulação: %ld\nÁrea: %.2f\nPIB: %.2f\nPIB per Capta: %.2f\nDensidade Populacional: %.2f\nNúmero de Pontos Turísticos: %d\nSuper Poder: %.2f\n",card[i].cardNumber,card[i].state, card[i].cityName, card[i].cardCod, card[i].population, card[i].area, card[i].pib, card[i].pibPerCapita, card[i].populationDensity, card[i].touristAttractions, card[i].superPower);
    }
    printf("======================\n");
}

void pauseEnter() {
    int c;
    printf("\nPressione Enter para continuar ...");
    fflush(stdout); // Flush the output buffer to ensure the prompt is displayed before waiting for input

    while((c = getchar()) != '\n' && c != EOF); //  Wait for the user to press Enter (newline character) and ignore any other input until Enter is pressed

    getchar(); // Consume the newline character left in the input buffer after pressing Enter to prevent it from affecting subsequent input operations
}
