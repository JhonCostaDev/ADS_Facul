#include <stdio.h>
#include "managerCards.h"
//TODO: corrigir erros nas funções cadastrar nova carta e exibir cartas
// TODO: Modularização

//TODO: Load data n'ao esta atualizando o numero de cartas ja cadastradas
//Salvar cartas cadastradas em arquivo



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



//This function create a new card
//TODO: exibir mensagem de inserção success
//TODO: super power está exibindo os valores de área
