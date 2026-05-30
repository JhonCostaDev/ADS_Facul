#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int sum = 0;
    int matLenghtExt = sizeof(matrix) / sizeof(matrix[0]);
    int matLenghtInt = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    
    for(int i = 0; i < matLenghtExt; i++) {
        for(int j = 0; j < matLenghtInt; j++) {
            //printf("%d\n", matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("A soma dos elementos da matriz é: %d\n", sum);

    return 0;
}