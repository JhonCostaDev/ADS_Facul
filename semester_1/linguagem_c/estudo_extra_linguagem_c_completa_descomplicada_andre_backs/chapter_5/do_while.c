#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        printf("Choose a number\n(1)\n(2)\n(3)\n");
        scanf("%d", &n);
    } while ((n < 1) || (n > 3));
    
    return 0;
}
