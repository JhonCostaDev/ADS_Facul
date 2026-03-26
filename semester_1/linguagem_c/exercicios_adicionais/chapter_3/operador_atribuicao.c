#include <stdio.h>

int main(void) {
    float x, y, z;

    x = y = z = 5;

    printf("%f\n%f\n%f\n", x, y, z);
    
    x += 2;
    y *= 2;
    z -= 3;
    printf("%f\n%f\n%f\n", x, y, z);

    return 0;
}