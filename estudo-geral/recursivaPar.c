// Crie uma função recursiva chamada quantidadePares que receba um número inteiro positivo n e retorne a quantidade de números pares entre 1 e n (inclusive).
// No main, peça ao usuário para digitar um número inteiro positivo, chame a função e imprima o resultado.

#include <stdio.h>

int quantidadePares(int n) {
    if (n == 1) 
        return 0;
    else if (n % 2 == 0)
        return 1 + quantidadePares(n - 1);
    else 
        return quantidadePares(n - 1);
};

int main() {
    int numero;
    printf("Digite o número: \n");
    scanf("%d", &numero);

    printf("A quantidade de números pares é %d.\n", quantidadePares(numero));
    return 0;
}
