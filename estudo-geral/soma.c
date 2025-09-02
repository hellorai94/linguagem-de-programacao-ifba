// Crie uma função int soma(int a, int b) que retorne a soma de dois inteiros.
// No main, leia dois valores do usuário, chame a função e imprima o resultado.

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {

    int a, b, somaDois;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    somaDois = soma(a, b);
    printf("A soma de %d + %d é = %d.\n", a, b, somaDois);
    return 0;
}
