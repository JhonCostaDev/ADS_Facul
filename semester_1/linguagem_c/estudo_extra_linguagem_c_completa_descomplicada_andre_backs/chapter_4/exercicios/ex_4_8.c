#include <stdio.h>
/* =====================================================
 Escreva um programa que, dada a idade de um nadador, o classifique em uma das
seguintes categorias:

* Infantil A - 5-7
* Infantil B - 8-10
* Juvenil A - 11 - 13
* Juvenil B - 14 - 17
* Sênior - > 18
=====================================================  */
//TODO: REFACTOR SWITCH > IF
int getAge();
int main(void) {
    int age;
    age = getAge();
    if(age) {
        switch (age)
    {
    case 5:
    case 6:
    case 7:
        printf("Infantil A\n");
        break;
    case 8:
    case 9:
    case 10:
        printf("Infantil B\n");
        break;
    case 11:
    case 12:
    case 13:
        printf("Juvenil A\n");
        break;
    case 14:
    case 15:
    case 16:
    case 17:
        printf("Infantil B\n");
        break;
    default:
        printf("Sênior\n");
        break;
    }    
    } else {
        printf("Entrada inválida!\n");
    }

    
    return 0;
}

int getAge() {
    int age;
    printf("Digite sua idade: \n");
    scanf("%f", &age);

    if (age > 4) {
        return age;
    }
    return 0;
}