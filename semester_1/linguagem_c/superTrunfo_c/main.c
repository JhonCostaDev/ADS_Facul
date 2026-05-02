#include <stdio.h>
#include "managerCards.h"
//TODO: create a function to save a new card out of createNewCard()
//TODO: Crete the logic of the game
//TODO: using ENUM to make mainMenu() more redable.
//TODO: change the codCard logic (a1, a2, a3, a4)
//TODO: change scale of PIB values
//TODO: ask to registre a new card again
//TODO: check PIB per capta value, the values is 0.0 in all cards, check scale
//TODO: Write the game rules





//main
int main(int argc, char const *argv[]) {
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

