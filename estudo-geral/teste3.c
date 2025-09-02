// Com base no vetor de Numero da questão anterior, escreva uma função recursiva que receba o vetor, a quantidade de elementos, e um número inteiro x. A função deve retornar 1 se x estiver no vetor, e 0 caso contrário.

#include <stdio.h>


typedef struct 
{
    int valor;
} Numero;

void preencheVetor(Numero *vetor, int i);
float media(Numero *vetor, int i);
int procuraNumero(Numero *vetor, int qnt, int x);

int main() {
    Numero vetor[5];
    int i = 0;

    while (i < 5) {
        preencheVetor(vetor, i);
        i++;
    }

    float mediaFinal = media(vetor, i) / 5;
    printf("A média final é %.2f.\n", mediaFinal);

    int x;
    printf("Digite um número.\n");
    scanf("%d", &x);
    
    if (procuraNumero(vetor, 0, x)) {
        printf("O número está no vetor.\n");
    } else {
        printf("O número NÃO está no vetor.\n");
    }

};

void preencheVetor(Numero *vetor, int i) {
    printf("Digite o %d número.\n", i + 1);
    scanf("%d", &vetor[i].valor);
}

float media(Numero *vetor, int i) {
    if (i == 0) {
        return 0;
    } else {
         return vetor[i - 1].valor + media(vetor, i - 1);
    }
} 

int procuraNumero(Numero *vetor, int i, int x){
    if (i == 5) {
        return 0;
    } 
    if (vetor[i].valor == x) {
        return 1;
    } else {
        return procuraNumero(vetor, i + 1, x);
    }
}

