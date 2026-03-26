#include <stdio.h>

int main(void) {
    int x = 10, y = 20, z;
    z = x * y;
    printf("%d\n", z);

    z = y / 10;
    printf("%d\n", z);

    printf("x + y = %d\n", x + y);
    return 0;
}