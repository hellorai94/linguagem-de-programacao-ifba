// 6) Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.

#include <stdio.h>

int mediaElementosVetor(int *vetor, int n) {
    if (n == 0) {
        return 0;
    } else {
        return vetor[n - 1] + mediaElementosVetor(vetor, n - 1); 
    }

}

int main() {
    int n;

    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite %d números inteiros seguidos por espaço.\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("A média é %d.\n", (mediaElementosVetor(vetor, n)) / n);
}