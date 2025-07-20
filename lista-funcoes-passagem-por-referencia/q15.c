// 15) Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior e o menor
// elemento desse vetor. 

#include <stdio.h>

void menorMaiorElemento(int n, float *vetor, float *maior, float *menor) {
    *maior = vetor[0];
    *menor = vetor[0];

    for(int i = 0; i <n ; i++) {
        if (vetor[i] > *maior) 
            *maior = vetor[i];
        if (vetor[i] < *menor)
            *menor = vetor[i];
    }
};


int main() {
    int n;

    printf("Digite o tamanho do vetor.\n");
    scanf("%d", &n);

    float valores[n];

    printf("Digite %d valores separados por espaço.\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    float maior, menor;
    menorMaiorElemento(n, valores, &maior, &menor);
    printf("O maior é %.2f e o menor é %.2f.\n", maior, menor);


    return 0;
}