#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[] = {3,51,18,2,45};
    int biggest = 0;
    int arrLength = sizeof(numbers) / sizeof(numbers[0]);
    for(int i = 0; i < arrLength; i++) {
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }
    }

    printf("O maior número no array é: %d\n", biggest);

    return 0;
}