#include <stdio.h>

int main(void) {
    int a, b;
    printf("Type two numbers\nType the first one: \n");
    scanf("%d", &a);
    printf("Type the second one: \n");
    scanf("%d", &b);
    printf("Printing...\n\n");
    
    //
    while (a < b) {
        printf("%d\n", a);
        a++;
    }
    
    printf("End of the program!\n");

    
    return 0;
}