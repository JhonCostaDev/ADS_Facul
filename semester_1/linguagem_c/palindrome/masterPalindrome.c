#include <stdio.h>
#include <string.h>

int checkPalindrome(char word[]);

int main(void){

    char *word = "goiaba";

    printf("%s\n", (checkPalindrome(word)? "Palindrome" : "Not Palindrome"));
    return 0;
}

int checkPalindrome(char word[]) {
    int i = 0, j = strlen(word) -1;

    while (j > i) {
        if(word[i++] != word[j--]) {
            return 0;
        }
    }
    return 1;
}