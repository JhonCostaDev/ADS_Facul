#include <stdio.h>

/* =====================================================
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.

Estado |  MG  |  SP  |   RJ  |   MS  |
Imposto|  7%  |  12% |  15%  |   8%  |

=====================================================  */
int main(void) {
    int state;
    
    printf("===== Cálculo valor com Imposto =====\n");
    printf("Para qual estado vai o produto?\n");

    while (1) {
        printf("Digite:\n(1) -> MG\n(2) -> SP\n(3) -> RJ\n(4) -> MS\n(0) -> Sair\n");
        scanf("%d", &state);

        if (state == 0) break;
        
    }
    
        
    
    
    
    
    switch (state)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    
    default:
        break;
    }
    return 0;
}