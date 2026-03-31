#include <stdio.h>
int main() {
    int apple = 76.0; // Embora o tipo estaja errado do valor armazenado na variável, o programa é compilado corretamente.
    int orange = 77.0;


    if (apple > orange){
        printf("Apple is bigger than orange\n");
    } else {
        printf("Orange is bigger than apple \n");
    }
    return 0;
}
