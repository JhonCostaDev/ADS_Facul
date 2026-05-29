#include <stdio.h>

int main(int argc, char const *argv[])
{
    double grades[5], sum, mean;
    int arrayLenght;

    arrayLenght = sizeof(grades) / sizeof(grades[0]);
    for(int i = 0; i < arrayLenght; i++) {
        printf("Digite a %dº nota: ", i + 1);
        scanf("%lf", &grades[i]);

        sum += grades[i];
    }

    mean = sum / 5;

    printf("The average of the grades typed was: %.2f\n", mean);
    return 0;
}
