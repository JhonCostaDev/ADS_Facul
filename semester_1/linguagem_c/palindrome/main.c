#include <stdio.h>
#include <string.h>

#define NUM_ELEMENTS 7

void checkPalindrome(char word[]);
int main(void) {
    char name[NUM_ELEMENTS][10] = {"banana","ada", "goiaba", "amor", "hannah", "maram", "reinier"};
    
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        printf("=======================\n");
        checkPalindrome(name[i]);
        printf("=======================\n");
    }
    
    
    return 0;
}

void checkPalindrome(char word[]) {
    int length = strlen(word);
    char inverted[length + 1];
    int j = 0;
    for(int i = length -1; i >= 0; i--) {
        inverted[j] = word[i];
        
        j++;
    }
    inverted[j] = '\0';
    int palindrome = strcmp(word, inverted);
    if(palindrome == 0){
        printf("Atual: %s\nInvertida: %s\nÉ um PALINDROMO\n", word, inverted);
    } else {
        printf("Atual: %s\nInvertida: %s\nNão é um PALINDROMO\n", word, inverted);
    }
    
}