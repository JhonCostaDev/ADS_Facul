#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

// Color codes for terminal output
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

// Function prototypes
int mainMenu();
int getAndValidateUserInput();
void showRules();
int getUserChoose();
void whoWin(int userChoose, int computerChoose);
void cleanScreen();
void pauseEnter();

// main function
int main(void) {
    int menuOption, userChoose, computerChoose;     // Variables to store menu option, user's choice, and computer's choice
    int running = 1;                                // Flag to control the game loop    
    srand(time(NULL));                              // Seed the random number generator with the current time for randomness
    
    
    cleanScreen();                                  // Clear the screen at the start of the game    
    
    // Game loop that continues until the user chooses to exit
    while (running) {
        menuOption = mainMenu();                // Display the main menu and get the user's menu option

        // Handle the user's menu option using a switch statement
        switch (menuOption) {
            case 1:
                cleanScreen();                          // Clear the screen before starting a new game
                userChoose = getUserChoose();           // Get the user's choice of item (rock, paper, scissors)
                computerChoose = (rand() % 3) + 1;      // Generate a random choice for the computer (1, 2, or 3)
                whoWin(userChoose, computerChoose);     // Determine the winner based on the user's and computer's choices and display the result
                pauseEnter();               // Pause the game and wait for the user to press Enter before continuing
                cleanScreen();                        // Clear the screen after the game round is over
                break;
            case 2:
                showRules();            // Display the rules of the game to the user
                pauseEnter();   
                cleanScreen();
                break;
            case 3:
                running = 0;    // Set the running flag to 0 to exit the game loop and end the program
                break;
            
            default:
                break;
        }
    }
    
    return 0;
}

// Function to display the main menu and get the user's menu option
int mainMenu() {
    int option; //
    
    printf("\033[0;31m Pedra, Papel, Tesoura Game! \033[0m\n"); // Display the game title in red color
    printf("1 - Novo Jogo\n2 - Ver Regras\n3 - Sair\n");        // Display the menu options to the user
    option = getAndValidateUserInput();                    // Get the user's menu option with input validation (1 for menu options)
    return option; 
}
//TODO: 
int getAndValidateUserInput() {
    char userInput[100];    // Buffer to store user input
    int value;              // Variable to store the converted integer value from user input
    int isValid = 0;        // Flag to indicate if the input is valid
    char msgMenu[] = "Digite uma das opções acima\n";

    while (!isValid) {      // Loop until a valid input is entered
        
        printf("%s", msgMenu); // Prompt the user to enter a menu option

        // Read user input and check for errors or empty input
        if(fgets(userInput, sizeof(userInput), stdin) == NULL || userInput[0] == '\n') {
            printf("Erro: Valor inválido.");
            continue;
        }

        // Remove newline character from the input
        userInput[strcspn(userInput, "\n")] = 0;

        // Check if the input contains only digits
        int i = 0;
        int justNumbers = 1;    // Flag to indicate if the input contains only digits

        // Loop through each character in the input to check if it's a digit
        while (userInput[i] != '\0') {
            if(!isdigit(userInput[i])) {        // If a non-digit character is found, set justNumbers to 0 and break the loop
                justNumbers = 0;
                break;
            }
            i++;        // Move to the next character in the input
        }

        // If the input contains non-digit characters, display an error message and prompt the user again
        if (!justNumbers) {
            printf("Erro: Digite apenas números\n");
            continue;
        }

        //  Convert the valid numeric input to an integer value using atoi and check if it's within the valid range (0 to 10)
        value = atoi(userInput);
        if(value < 0 || value > 10) {
            printf("Erro: Digite números entre 0 e 10\n");
        } else {
            isValid = 1;    // Set the isValid flag to 1 to exit the loop if the input is valid
        }
    }
    return value;
}

// Function to display the rules of the game to the user
void showRules() {
    printf("=================== REGRAS DO GAME ===========================\n\n");
    printf(BLUE "Pedra" RESET " vence " RED "Tesoura" RESET " (quebra a tesoura).\n");

    printf(RED "Tesoura" RESET " vence " GREEN "Papel" RESET " (corta o papel).\n");

    printf(GREEN "Papel" RESET " vence " BLUE "Pedra" RESET " (embrulha a pedra).\n");

    printf("Se ambos escolherem a mesma opção, o resultado é " YELLOW "Empate" RESET ".\n");
    printf("==============================================\n");
}

// Function to get the user's choice of item (rock, paper, scissors) with input validation
int getUserChoose() {
    int option;
    printf("Escolha seu item:\n");
    printf(BLUE "1 - Pedra" RESET "\n" GREEN "2 - Papel" RESET "\n" RED "3 - Tesoura" RESET "\n");
    option = getAndValidateUserInput(1);
    return option;
}
//  Function to determine the winner based on the user's and computer's choices and display the result
void whoWin(int userChoose, int computerChoose){
    
    char *items[] = {"Pedra", "Papel", "Tesoura"};      // Array of strings to represent the items (rock, paper, scissors) for display purposes

    // Display the choices made by the user and the computer
    if(userChoose == computerChoose) {
        printf("=== Empate ===\n");
    } else if ((userChoose == 1 && computerChoose == 3) || (userChoose == 3 && computerChoose == 2) || (userChoose == 2 && computerChoose == 1)){
        printf("=== Você Venceu ===\n%s > %s\n", items[userChoose - 1], items[computerChoose - 1]);
    } else {
        printf("=== Computador Venceu ===\n%s > %s\n", items[computerChoose - 1], items[userChoose - 1]);
    }
}

// Function to clear the screen using ANSI escape codes
void cleanScreen() {
    printf("\033[H\033[J");
    fflush(stdout); // Flush the output buffer to ensure the screen is cleared immediately
}

// Function to pause the game and wait for the user to press Enter before continuing
void pauseEnter() {
    int c;
    printf("\nPressione Enter para continuar ...");
    fflush(stdout); // Flush the output buffer to ensure the prompt is displayed before waiting for input

    while((c = getchar()) != '\n' && c != EOF); //  Wait for the user to press Enter (newline character) and ignore any other input until Enter is pressed

    getchar(); // Consume the newline character left in the input buffer after pressing Enter to prevent it from affecting subsequent input operations
}
