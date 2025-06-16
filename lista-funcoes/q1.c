// 1) Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

#include <stdio.h>

int maiorNumero(int num1, int num2);

int main() {
    int num1, num2;
    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);
    if (num1 == num2) {
        printf("Os números são iguais.\n");
    } else {
        printf("O maior número é: %d.\n",  maiorNumero(num1, num2));
    }
}

int maiorNumero(int num1, int num2) {
    
    if (num1 > num2) {
        return num1; 
    } else {
        return num2;
    }
};
    