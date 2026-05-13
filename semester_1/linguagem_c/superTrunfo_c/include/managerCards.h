#ifndef MANAGERCARDS_H
#define MANAGERCARDS_H

#define MAX_CARDS 100 //Const tamanho maximo do array de cartas
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
void loadData(struct cityCard cityCards[], int *numberOfCards);
void generateDeckIndex(int userIndex[], int computerIndex[], int quantDeck, int TotalCards);


#endif 