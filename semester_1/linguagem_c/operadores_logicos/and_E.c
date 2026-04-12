#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    

    if (a > 0 && b > 0) {
        printf("Both a and b are positive numbers.\n");
        if(a > b) {
            printf("The number %d is greater than the number %d\n", a, b);
        } else {
            printf("The number %d is greater than the number %d\n", b, a);
        }
    } else {
        printf("Either a or b is not a positive number.\n");
    }

    return 0;
}