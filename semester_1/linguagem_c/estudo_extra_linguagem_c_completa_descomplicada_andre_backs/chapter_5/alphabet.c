#include <stdio.h>

int main(int argc, char const *argv[])
{
    char  c;

    for(c = 'A'; c <= 'Z'; c++) {
        printf("Letter: %c, ", c);
    }
    return 0;
}
