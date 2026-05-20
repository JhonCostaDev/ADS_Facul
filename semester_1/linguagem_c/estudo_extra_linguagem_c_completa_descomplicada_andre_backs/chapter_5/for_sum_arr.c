#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //Divide the sizeof(arr) / sizeof(arr[0]) to get the arr lenght.
    int arrLenght = sizeof(numbers) / sizeof(numbers[0]); //
    int sum = 0;

    for(int i = 0; i < arrLenght; i++) {
        printf("%d\n", numbers[i]);
        sum += numbers[i];
    }

    printf("The sum of all the numbers on the array is: %d\n", sum);
    return 0;
}
