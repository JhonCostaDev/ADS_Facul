#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a, b;
    printf("Type two numbers\nType the first one: \n");
    scanf("%d", &a);
    printf("Type the second one: \n");
    scanf("%d", &b);
    printf("For Looping\nPrinting...\n");

    for(; a <= b; a++) { //Omitindo a inicialização do for
        printf("%d\n", a);
    }
    return 0;
}
