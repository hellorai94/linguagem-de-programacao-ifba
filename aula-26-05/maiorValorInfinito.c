#include <stdio.h>


void maiorValor(int valor1, int valor2) {
    if (valor1 > valor2){
        printf("O número %d é maior que %d.\n", valor1, valor2);
    } else if (valor2 > valor1) {
        printf("O número %d é maior que %d.\n", valor2, valor1);
    } else {
        printf("%d é igual a %d.\n", valor1, valor2);
    }
}


int main() {
    int num1, num2;
    int valorQuebra = 0;

    while(valorQuebra == 0) {
        printf("Informe o 1º número.\n");
        scanf("%d", &num1);
        printf("Informe o 2º número.\n");
        scanf("%d", &num2);
        maiorValor(num1, num2);

    }


}