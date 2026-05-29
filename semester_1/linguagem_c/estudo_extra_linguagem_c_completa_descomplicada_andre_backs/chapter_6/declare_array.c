#include <stdio.h>

int main(int argc, char const *argv[]) {
    //empty array with 10 spaces
    double grades[10]; 

    grades[0] = 5.5;\
    grades[1] = 2.8;
    grades[2] = 10.;
    grades[3] = 6.2;
    printf("Priting grades\n");

    int gradesLenght = sizeof(grades) / sizeof(grades[0]);
    for(int i = 0; i < gradesLenght; i++) {
        printf("%.2f\n", grades[i]);
    }


    char letter[3] = {'a', 'b', 'c'};
    int number[5] = {1, 2, 3, 4, 5};
    float whether[5] = {22.3, 34.5, 23.2, 25.3, 32.1};

    int charLenght = sizeof(letter) / sizeof(letter[0]);
    
    printf("Priting chars\n");
    for(int i = 0; i < charLenght; i++) {
        printf("%c\n", letter[i]);
    }

    int numLenght = sizeof(number) / sizeof(number[0]);
    
    printf("\nPriting Numbers\n");
    for(int i = 0; i < numLenght; i++) {
        printf("%d\n", number[i]);
    }

    int tempLenght = sizeof(whether) / sizeof(whether[0]);
    
    printf("\nPriting Temperature\n");
    for(int i = 0; i < tempLenght; i++) {
        printf("%f\n", whether[i]);
    }
    return 0;
}
