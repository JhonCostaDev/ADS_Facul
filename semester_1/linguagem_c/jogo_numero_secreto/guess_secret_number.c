#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
/*This game is a simple number guessing game where the player has to guess a randomly generated secret number. The game will provide feedback on whether the player's guess is too high, too low, or correct. The player can choose to play again after each round. The main components of the game include a main menu, random number generation, user input validation, and result display.
*/

//TODO: inserir número mínimo de tentativas
//TODO: inserir pontuação
int mainMenu();
int userInput(int option);
int main(void) {
    int optionMenu, secretNumber, guess;
    //show main menu
    optionMenu= mainMenu(); 
    
    //generate a rand number 
    srand(time(0));
    secretNumber = rand() %10;
    //get input user and validate it
    guess = userInput(0);
    //check the answer
    if (secretNumber == guess) {
        printf("Você acertou!\n");
    } else {
        printf("Você Errou!\nO número secreto era: %d\n", secretNumber);
    }
    // show the result
    
    return 0;
}

int mainMenu() {
    int option;
    printf("1 - Novo Jogo\n2 - Ver regras\n3 - Sair\n");
    option = userInput(1);


    return option;
}

//get and validate input user
int userInput(int option) {
    char userInput[100];
    int value;
    int isValid = 0;
    char msgMenu[] = "Digite uma das opções acima\n";
    char msgGuess[] = "Digite seu palpite\n";

    while (!isValid) { 
        if (option == 1) {//TODO: tentar ternario / passar como argumento
            printf("%s", msgMenu);
        } else {
            printf("%s", msgGuess);
        }
        if(fgets(userInput, sizeof(userInput), stdin) == NULL || userInput[0] == '\n') {
            printf("Erro: Valor inválido.");
            continue;
        }

        userInput[strcspn(userInput, "\n")] = 0;

        int i = 0;
        int justNumbers = 1;

        while (userInput[i] != '\0') {
            if(!isdigit(userInput[i])) {
                justNumbers = 0;
                break;
            }
            i++;
        }
        if (!justNumbers) {
            printf("Erro: Digite apenas números\n");
            continue;
        }

        value = atoi(userInput);
        if(value < 0 || value > 10) {
            printf("Erro: Digite números entre 0 e 10\n");
        } else {
            isValid = 1;
        }
    }
    return value;
    
}