#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

//Colors 
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

//Prototypes
int mainMenu();
int getAndValidateUserInput(int option);
void showRules();
int getUserChoose();
void whoWin(int userChoose, int computerChoose);

int main(void) {
    int menuOption, userChoose, computerChoose;
    int running = 1;
    srand(time(NULL));
    
    //show menu

    while (running)
    {
        menuOption = mainMenu();

        switch (menuOption) {
            case 1:
                userChoose = getUserChoose();
                computerChoose = (rand() % 3) + 1;

                whoWin(userChoose, computerChoose);

                break;
            case 2:
                showRules();
                break;
            case 3:
                running = 0;
                break;
            
            default:
                break;
        }
    }
    
    

    //get random number from computer

    //compare user input with computer random number

    // show the result
    return 0;
}

int mainMenu() {
    int option;
    printf("\033[0;31m Pedra, Papel, Tesoura Game! \033[0m\n");
    printf("1 - Novo Jogo\n2 - Ver Regras\n3 - Sair\n");
    option = getAndValidateUserInput(1);
    return option; 
}

int getAndValidateUserInput(int option) {
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

void showRules() {
    printf("==============================================\n");
    printf(BLUE "Pedra" RESET " vence " RED "Tesoura" RESET " (quebra a tesoura).\n");

    printf(RED "Tesoura" RESET " vence " GREEN "Papel" RESET " (corta o papel).\n");

    printf(GREEN "Papel" RESET " vence " BLUE "Pedra" RESET " (embrulha a pedra).\n");

    printf("Se ambos escolherem a mesma opção, o resultado é " YELLOW "empate" RESET ".\n");
    printf("==============================================\n");
}

int getUserChoose() {
    int option;
    printf(BLUE "1 - Pedra" RESET "\n" GREEN "2 - Papel" RESET "\n" RED "3-Tesoura" RESET "\n");
    option = getAndValidateUserInput(1);
    return option;
}
//TODO: Finish core logic
void whoWin(int userChoose, int computerChoose){
    //1 > 3
    //3 > 1
    //2 > 1

    if(userChoose == computerChoose) {
        printf("Empate");
    } else if (userChoose == 1 && computerChoose)
}
