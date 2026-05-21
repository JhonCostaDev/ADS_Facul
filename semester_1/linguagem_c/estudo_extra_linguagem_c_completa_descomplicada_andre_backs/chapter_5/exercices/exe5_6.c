#include <stdio.h>
#include <unistd.h>
/*6) Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10
e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.
 */
int main(int argc, char const *argv[])
{
    int start = 10;

    while(start >=0) {
        printf("%d\n", start);
        sleep(1);
        start--;
    }
    
    printf("Fim!\n");
    
    return 0;
}
