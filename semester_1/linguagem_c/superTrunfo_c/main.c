#include <stdio.h>
#include "managerCards.h"
#include <string.h>


//TODO: Crete the logic of the game
//TODO: using ENUM to make mainMenu() more redable.
//TODO: change the codCard logic (a1, a2, a3, a4)
//TODO: change scale of PIB values
//TODO: ask to registre a new card again
//TODO: check PIB per capta value, the values is 0.0 in all cards, check scale
//TODO: Write the game rules
//TODO: o deck inicial deve ter no minimo 32 cartas


void newGame(struct cityCard card[], int numberOfCards);
void game(struct cityCard player1[], struct cityCard player2[], int arrayLenght);

//main
int main(int argc, char const *argv[]) {
    //srand(time(NULL));
    struct cityCard cityCards[MAX_CARDS]; // Array de cartas
    int numberOfCards = 0;
    int option = 0;

    loadData(cityCards, &numberOfCards); //Load cards from a file

    do
    {
        
        option = mainMenu();
    
        switch (option) {
        case 1:
            printf("New Game%d\n", option);
            newGame(cityCards, numberOfCards);
            pauseEnter();
            break;
        case 2:
            printf("Rules%d\n", option);
            break;
        case 3:
            printf("New card%d\n", option);
            createNewCard(cityCards, &numberOfCards);
            pauseEnter();
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
// NEW GAME
//TODO: move this functions to the proper file
void newGame(struct cityCard card[], int numberOfCards) {
    int deckLength, firstDeck;
    printf("Super Trunfo Cidades do Brasil\n");
    

    // Escolher o nivel
    
    int chooseNumberOfFirstDeck = getUserInput("Escolha a quantidade de cartas no baralho inicial\n1 - 4 Cartas\n2 - 8 Cartas\n3 - 12 Cartas", 1, 3);
    if(chooseNumberOfFirstDeck == 1) {
        firstDeck = 4;
    } else if(chooseNumberOfFirstDeck == 2) {
        firstDeck = 8;
    } else {
        firstDeck = 12;
    }
    
    //int randomUserCards[firstDeck];
    if(numberOfCards % 2 != 0) {
        deckLength = numberOfCards - 1; //Se o deck for 1 vai quebrar CORRIGIR
    }
    //printf("%d\n", deckLength);

    // arrays com indices para o baralho de cada jogador
    int userIndex[firstDeck], computerIndex[firstDeck];
    memset(userIndex, 0, sizeof(userIndex)); // Para niciar os arrays com valores 0
    memset(computerIndex, 0, sizeof(computerIndex));
    
    //sorteia os indices das cartas
    generateDeckIndex(userIndex,computerIndex, firstDeck, numberOfCards);

    //cria arrays de structs para os players
    struct cityCard userCards[firstDeck];
    struct cityCard computerCards[firstDeck];

    //atribui as cartas aos  baralhos de cada player
    for (int i = 0; i < firstDeck; i++) {
        userCards[i] = card[userIndex[i]];
        computerCards[i] = card[computerIndex[i]];
    }
    //escolher o atributo para comparar
    

    game(userCards, computerCards, firstDeck);
}
//criar a funcao que sorteia o array de inteiros para o indice das cartas

void game(struct cityCard player1[], struct cityCard player2[], int arrayLenght) {
    //listCards(player1, arrayLenght);
    struct cityCard player1Cards[30];
    struct cityCard player2Cards[30];

    for(int i = 0; i < arrayLenght; i++) {
        player1Cards[i] = player1[i];
        player2Cards[i] = player2[i];
    }

    long double player1Attribute, player2Attribute;
    int attribute;
    int quantCardsPlayer1 = arrayLenght;
    int quantCardsPlayer2 = arrayLenght;
    

    while (quantCardsPlayer1 > 0 && quantCardsPlayer2 > 0) {
    
        attribute = getUserInput("Escolha o atributo\n1 - População\n2 - Área\n3 - PIB\n4 - PIB per capta\n5 - Densidade Populacional\n6 - Número de pontos turísticos\n", 1, 6);
        
        switch (attribute){
        case 1:
            player1Attribute = player1Cards[0].population;
            player2Attribute = player2Cards[0].population;
            break;
        case 2:
            player1Attribute = player1Cards[0].area;
            player2Attribute = player2Cards[0].area;
            break;
        case 3:
            player1Attribute = player1Cards[0].pib;
            player2Attribute = player2Cards[0].pib;
            break;
        case 4:
            player1Attribute = player1Cards[0].pibPerCapita;
            player2Attribute = player2Cards[0].pibPerCapita;
            break;
        case 5:
            player1Attribute = player1Cards[0].populationDensity;
            player2Attribute = player2Cards[0].populationDensity;
            break;
        case 6:
            player1Attribute = player1Cards[0].touristAttractions;
            player2Attribute = player2Cards[0].touristAttractions;
        }
        struct cityCard cardTemp;

        if(player1Attribute > player2Attribute) {
            //player1 wins
            //variavel temporaria para quardar a carta que vai para o fim
            cardTemp = player1Cards[0];
            
            //loop para mover as cartas uma posicao para a esquerda
            for(int i = 0; i < quantCardsPlayer1 -1; i++) {
                player1Cards[i] = player1Cards[i + 1];
            }
            //a carta do topo assume a ultima posicao
            player1Cards[quantCardsPlayer1 - 1] = cardTemp;

            //a carta ganha do jogador 2 agora é a última do deck
            player1Cards[quantCardsPlayer1] = player2Cards[0];
            
            //incrementa a quantidade de cartas
            quantCardsPlayer1++;

            //player2 lost -  retirar uma carta do perdedor
            for(int i = 0; i < quantCardsPlayer2 - 1; i++) {
                player2Cards[i] = player2Cards[i + 1];
            }
            quantCardsPlayer2--;
            printf("Jogador Ganhou\n");
            printf("Jogador Cidade: %s > Computador Cidade: %s", player1Cards[0].cityName, player2Cards[0].cityName);
            pauseEnter();

        } else if(player1Attribute < player2Attribute) {
            //player 2 wins

            //variavel temporaria para quardar a carta que vai para o fim
            cardTemp = player2Cards[0];
            
            //loop para mover as cartas uma posicao para a esquerda
            for(int i = 0; i < quantCardsPlayer2 -1; i++) {
                player2Cards[i] = player2Cards[i + 1];
            }
            //a carta do topo assume a ultima posicao
            player2Cards[quantCardsPlayer2 - 1] = cardTemp;

            //a carta ganha do jogador 2 agora é a última do deck
            player2Cards[quantCardsPlayer2] = player1Cards[0];
            
            //incrementa a quantidade de cartas
            quantCardsPlayer2++;

            //player2 lost -  retirar uma carta do perdedor
            for(int i = 0; i < quantCardsPlayer1 - 1; i++) {
                player1Cards[i] = player1Cards[i + 1];
            }
            quantCardsPlayer1--;
            printf("Computador Ganhou\n");
            printf("Computador Cidade: %s > Jogador Cidade: %s", player1Cards[0].cityName, player2Cards[0].cityName);
            pauseEnter();
        } else {
            //empate - apenas move as cartas para a esquerda
            cardTemp = player1Cards[0];
            
            //loop para mover as cartas uma posicao para a esquerda
            for(int i = 0; i < quantCardsPlayer1 -1; i++) {
                player1Cards[i] = player1Cards[i + 1];
            }
            //a carta do topo assume a ultima posicao
            player1Cards[quantCardsPlayer1 - 1] = cardTemp;

            //
            cardTemp = player2Cards[0];
            
            //loop para mover as cartas uma posicao para a esquerda
            for(int i = 0; i < quantCardsPlayer2 -1; i++) {
                player2Cards[i] = player2Cards[i + 1];
            }
            //a carta do topo assume a ultima posicao
            player2Cards[quantCardsPlayer2 - 1] = cardTemp;
            printf("Empate\n");
            pauseEnter();
        }
    }
}





