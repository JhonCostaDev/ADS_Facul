#include <stdio.h>

/* =====================================================
Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

Altura (a) |                Peso(p)
                | p < 60   |  60 < p <=90    | p > 90
< 1.20          |    A     |        D        |   G   |
1.20 < a < 1.70 |    B     |        E        |   H   |
a > 1.7         |    C     |        F        |   I   |

=====================================================  */

//prototypes - .h files
float getUserInput(char prompt[], float min, float max);
char classifyUser(float weight, float height);

//The main function
int main(void) {
    //get input
    float heigth = getUserInput("Digite sua altura (m)", 0.0, 3.0); //Float variable to store the height
    float weigth = getUserInput("Digite o seu peso (kg)", 10, 300); //Float variable to store the weight
    
    //classify
    char classification = classifyUser(weigth, heigth);             // char variable to store the result of classification

    //Show results
    printf("Sua classificação é: %c\n", classification);            // print results on screen
    return 0;
}

//Function to get user input and validate data
float getUserInput(char prompt[], float min, float max) {
    float value;
    printf("%s (%.2f - %.2f): \n", prompt, min, max);

    while (scanf("%f", &value) != 1 || value < min || value > max) { //Looping until scanf don't read number 1
        printf("Error: Digite apenas números na faixa %.2f a %.2f\n", min, max);

        while (getchar() != '\n');      //clean buffer
        
    }
    return value;
}

//Function to classify the user it get weight and heigth as parameters
char classifyUser(float weight, float height) {
    char classification;
    printf("%f\n", weight);
    if (height < 1.2) {
        if (weight < 60.0) {
            classification =  'A';
        } else if (weight >= 60.0 && weight <= 90.0) {
            classification =  'D';
        } else {
            classification =  'G';
        }
    } else if(height >= 1.2 && height <= 1.7) {
        if (weight < 60.0) {
            classification =  'B';
        } else if (weight >= 60.0 && weight <= 90.0) {
            classification =  'E';
        } else {
            classification =  'H';
        }
    } else {
        if (weight < 60.0) {
            classification =  'C';
        } else if (weight >= 60.0 && weight <= 90.0) {
            classification =  'F';
        } else {
            classification =  'I';
        }
    }
    
    return classification;
}

