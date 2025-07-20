// 16) Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior elemento do 
// vetor e o número de vezes que esse elemento ocorreu no vetor

#include <stdio.h>

void maiorQntElemento(int n, float *vetor, float *maior, int *qnt) {
    *maior = vetor[0];
    *qnt = 0;

    for(int i = 0; i < n; i++) {
        if (vetor[i] > *maior) 
            *maior = vetor[i];
    }
     for(int i = 0; i < n; i++) {
        if (vetor[i] == *maior) 
            (*qnt)++;
    }

}

int main() {
    int n;

    printf("Digite o tamanho do vetor.\n");
    scanf("%d", &n);

    float vetor[n];

    printf("Digite %d valores separados por espaço.\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
    }

    int qnt;
    float maior;
    maiorQntElemento(n, vetor, &maior, &qnt);
    printf("O maior é %.2f e a quantidade dele é %d.\n", maior, qnt);


    return 0;
}