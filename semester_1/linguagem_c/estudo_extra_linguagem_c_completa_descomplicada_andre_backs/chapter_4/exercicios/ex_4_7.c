#include <stdio.h>

/* =====================================================
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.

Estado |  MG  |  SP  |   RJ  |   MS  |
Imposto|  7%  |  12% |  15%  |   8%  |

=====================================================  */
int main(void) {
    int state;
    float value, finalPrice;
    
    printf("===== Cálculo valor com Imposto =====\n");
    printf("Para qual estado vai o produto?\n");

    while (1) {
        printf("Digite:\n(1) -> MG\n(2) -> SP\n(3) -> RJ\n(4) -> MS\n(5) -> Sair\n");
        if(scanf("%d", &state) == 1 && (state > 0 && state < 6)) {
            
            printf("Digite o valor do produto:\n");
            scanf("%f", &value);
            break;
        } else {
            printf("Erro! Opção inválida. Tente Novamente!\n");
            break;
        }
        printf("Aqui");
        //if(scanf)
    }
    
    switch (state)
    {
    case 1:
        finalPrice = value * 1.07;
        break;
    case 2:
        finalPrice = value * 1.12;
        break;
    case 3:
        finalPrice = value * 1.15;
        break;
    case 4:
        finalPrice = value * 1.08;
        break;
    
    default:
        break;
    }

    printf("Produto mais imposto: R$ %.2f", finalPrice);
    return 0;
}