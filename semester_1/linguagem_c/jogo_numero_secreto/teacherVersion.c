#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int option, guess, secretNumber;
    //prompt the user option
    printf("Escolha uma opção: \n");
    scanf("%d", &option);
    

    switch (option) {
    case 1: //start game
        
        srand(time(0));
        secretNumber = rand() %10;
        printf("Digite seu palpite: \n");
        scanf("%d", &guess);

        //printf("%d", secretNumber);
        break;
    case 2: //View rules
        /* code */
        break;
    case 3: //quit the game
        /* code */
        break;
    default:
        break;
    }
    if (secretNumber == guess) {
        printf("Você acertou!\n");
    } else {
        printf("Você Errou!\n");
    }
    
    return 0;
}