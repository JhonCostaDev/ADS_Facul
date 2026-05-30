#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[] = {3,51,18,2,45};
    int sum = 0;
    int arrLength = sizeof(numbers) / sizeof(numbers[0]);
    for(int i = 0; i < arrLength; i++) {
        sum += numbers[i];
    }

    printf("A soma dos elementos do array é: %d\n", sum);

    return 0;
}
