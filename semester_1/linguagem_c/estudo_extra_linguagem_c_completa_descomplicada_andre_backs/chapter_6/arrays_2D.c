#include <stdio.h>

int main(int argc, char const *argv[])
{
    char names[7][20] = {
        "jhon", 
        "josy",
        "rose",
        "fulio",
        "negoJr",
        "bolotas", 
        "menina"
    };

    for(int i = 0; i < 7; i++) {
        printf("%s, ", names[i]);
    }
    return 0;
}
