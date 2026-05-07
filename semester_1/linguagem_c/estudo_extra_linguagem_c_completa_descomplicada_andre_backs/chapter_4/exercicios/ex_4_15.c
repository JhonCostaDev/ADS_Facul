#include <stdio.h>
#include <math.h>
/* =====================================================
Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como
 Δ = b2 – 4 * a * c e ax2 + bx + c = 0 
em que representa uma equação do segundo grau. 
A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensa-
gem “Não é equação de segundo grau”. 
Do contrário, imprima:
• Se Δ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se Δ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se Δ > 0, existem duas raízes reais. Imprima as raízes.
=====================================================  */

//Prototypes
int getNumbers();
void calcDelta(int arr[], int *delta);
void calcDeltaRoots(int coefficients[], int delta, double *roots);

//Main function
int main(void) {
    int coefficients[3];    //Array to store the coefficients 
    int delta;              // Variable to store Delta value     
    double roots[2];        ///Array to store x roots
    
    //read a, b and c
    int i = 0;              //To control while loop
    
    while (i < 3) {         
        coefficients[i] = getNumbers(); //This loop it's for read the 3 coefficients (a, b, c) and store in roots coefficients array
        if(i == 0 && coefficients[i] == 0) {        //check if coefficient a it's equal to 0 (zero)
            printf("Não é equação de segundo grau\n");
            return 0;                               //  End the program
        }
        i++;                                        //increment i
    }

    calcDelta(coefficients, &delta);        // call the calculate Delta function

    calcDeltaRoots(coefficients,delta,roots); // call the calculate Roots

    //check delta value
    if(delta < 0) return 0;

    if (delta == 0) {
        printf("Delta: %d\nRaiz única: %.2f\n", delta, roots[0]); // show results
    } else {

        printf("Delta: %d\nRaiz positiva: %.2f\nRaiz negativa: %.2f\n",delta, roots[0], roots[1]); // show results
    }

    return 0;
}

//This function validate numbers 
int getNumbers() {
    int number;
    do {
        printf("Digite o número\n");
        if(scanf("%d", &number) == 1) {
            return number;
        }
        printf("Entrada inválida! Digite novamente.\n");
        while (getchar() != '\n');
    }while(1);
}

//This function calculate delta
void calcDelta(int arr[], int *delta) {
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];
    
    *delta = pow(b, 2) - 4 * a * c; 
}

//This function calculate the roots
void calcDeltaRoots(int coefficients[], int delta, double *roots) {
    
    if (delta < 0) {
        printf("Não Existe raiz real\n");
        return;
    } else if(delta == 0) {
        roots[0]= -(coefficients[1] / 2 * coefficients[0]);
        return;
    }
    roots[0] = ((-1 * coefficients[1]) + sqrt(delta)) / (2 * coefficients[0]);
    roots[1] = ((-1 * coefficients[1]) - sqrt(delta))/ (2 * coefficients[0]);
}