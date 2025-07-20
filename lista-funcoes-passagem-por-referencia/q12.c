// 12) Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros. Essa função deve
// retornar, por referência, dois valores: a soma dos números pares e ímpares.

#include <stdio.h>

void somaParesImpares(int n, int *vetor, int *somaPares, int *somaImpares)  {
    *somaPares = 0;
    *somaImpares = 0;

    for(int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            (*somaPares) += vetor[i];
        } else {
            (*somaImpares) += vetor[i];
        }
        
    }

}

int main() {
    int n;

    printf("Qual o tamanho do vetor? \n");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite %d números separados por espaço.\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    int somaPares, somaImpares;
    somaParesImpares(n, vetor, &somaPares, &somaImpares);
    printf("A soma de números pares é %d e de números ímpares é %d.\n", somaPares, somaImpares);
 
    return 0;
}