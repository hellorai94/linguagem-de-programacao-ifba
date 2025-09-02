// Crie uma struct chamada Dado com um campo int valor.
// Escreva uma função leitura() que receba um ponteiro para Dado e leia o valor do usuário.
// Imprima esse valor no main.

#include <stdio.h>

typedef struct{
    int valor;
} Dado;

int leitura(Dado *numero) {
    printf("Digite um valor: \n");
    scanf("%d", &numero->valor);

    return numero->valor;
}

int main() {
    Dado numero;
    printf("O número é %d.\n", leitura(&numero));

    return 0;
}
