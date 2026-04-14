#include <stdio.h>

/* =====================================================
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.

Estado |  MG  |  SP  |   RJ  |   MS  |
Imposto|  7%  |  12% |  15%  |   8%  |

=====================================================  */
int menu();
float getValue();
int main(void) {
    int state;
    float value, finalPrice;
    
    printf("===== Cálculo valor com Imposto =====\n");
    printf("Para qual estado vai o produto?\n");

    state = menu();

    if(state) {
        value = getValue();
        if (value) {
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
        }
       printf("Produto mais imposto: R$ %.2f\n", finalPrice); 
    } else {
        printf("Entrada inválida, tente novamente!\n");
    }
    

    
    
    return 0;
}

int menu() {
    int option;
    printf("Digite:\n(1) -> MG\n(2) -> SP\n(3) -> RJ\n(4) -> MS\n(0) -> Sair\n");
    scanf("%d", &option);

    if(option > 0 && option < 5) {
        return option;
    }

    return 0;
}

float getValue() {
    float value;
    printf("Digite o valor do produto: \n");
    scanf("%f", &value);

    if(value >= 0) {
        return value;
    }
    return 0;
}