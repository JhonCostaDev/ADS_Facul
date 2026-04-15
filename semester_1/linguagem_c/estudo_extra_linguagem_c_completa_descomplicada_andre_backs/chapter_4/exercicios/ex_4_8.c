#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* =====================================================
Escreva um programa que, dada a idade de um nadador, o classifique em uma das
seguintes categorias:

* Infantil A - 5-7
* Infantil B - 8-10
* Juvenil A - 11 - 13
* Juvenil B - 14 - 17
* Sênior - > 18
=====================================================  */
//TODO: Clean
int getAge();                   // Function prototype to get the age of the swimmer with input validation
int classifySwimmer(int age);   // Function prototype to classify the swimmer based on age

int main(void) {
    int age, category;          // Variables to store the age and category of the swimmer
    
    age = getAge();             // Get the age of the swimmer using the getAge function
    category = classifySwimmer(age); // Classify the swimmer based on the age using the classifySwimmer function
    
    // Use a switch statement to print the category of the swimmer based on the classified category
    switch (category) {
    case 1:
        printf("O nadador é: Infantil A\n");
        break;
    case 2:
        printf("O nadador é: Infantil B\n");
        break;
    case 3:
        printf("O nadador é: Juvenil A\n");
        break;
    case 4:
        printf("O nadador é: Juvenil B\n");
        break;
    case 5:
        printf("O nadador é: Sênior\n");
        break;
    
    default:
        break;
    }

    return 0;
}

int getAge() { //Function to get the age of the swimmer with input validation
    char userInput[100];    // Buffer to store user input
    int value;              // Variable to store the converted age
    int isValid = 0;        // Flag to indicate if the input is valid

    while (!isValid) {      // Loop until a valid age is entered
        printf("Digite sua Idade: \n");     // Prompt the user to enter their age

        // Read user input and check for errors or empty input
        if(fgets(userInput, sizeof(userInput), stdin) == NULL || userInput[0] == '\n') {
            printf("Erro: Valor inválido para idade: \n");
            continue;
        }
        userInput[strcspn(userInput, "\n")] = 0; // Remove newline character from the input

        int i = 0;              // Check if the input contains only digits
        int justNumbers = 1;    // Flag to indicate if the input contains only digits
        
        // Loop through each character in the input to check if it's a digit
        while (userInput[i] != '\0') {
            if(!isdigit(userInput[i])) {    // If a non-digit character is found, set justNumbers to 0 and break the loop
                justNumbers = 0;
                break;
            }
            i++;
        }
        
        // If the input contains non-digit characters, display an error message and prompt the user again
        if (!justNumbers) {
            printf("Erro: Letras ou caracteres especiais não são aceitos.\n");
            continue;
        }

        // Convert the valid input string to an integer using atoi and check if it's greater than 4
        value = atoi(userInput);
        if(value > 4) {
            isValid = 1;
        } else {
            printf("Erro: A idade mínima de um nadador é de 5 anos.\n");
        }
        
    }
    // Return the valid age value
    return value;
    
}

int classifySwimmer(int age) {
    
    if (age >= 5 && age <=7) {          //Infantil A - 5-7 - return 1
        return 1;
    } else if(age >= 8 && age <= 10) {  //Infantil B - 8-10 > return 2
        return 2;
    } else if(age >= 11 && age <= 13) { //Juvenil A - 11 - 13 > return 3
        return 3;
    } else if(age >= 14 && age <= 17) { //Juvenil B - 14 - 17 > return 4
        return 4;
    } else {                            // Sênior - > 18
        return 5;
    }
} 