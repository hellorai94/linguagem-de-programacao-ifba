// Escreva um programa em C que leia 5 números inteiros positivos digitados pelo usuário e os armazene em um vetor de structs do tipo Numero, que contém apenas um campo int valor. Crie uma função para preencher o vetor, recebendo-o por referência junto com o índice atual. Em seguida, crie uma função recursiva que receba o vetor e a quantidade de elementos e retorne a soma total dos valores armazenados.


#include <stdio.h>

typedef struct
{
    int valor;
} Numero;

void preencheVetor(Numero *vetor, int indice);
int soma(Numero *vetor, int indice, int qnt);

int main() {
    int indice = 0;
    Numero vetor[5];


    while (indice < 5)
    {
        preencheVetor(vetor, indice);
        indice++;
    };

    int somaFinal;
    somaFinal = soma(vetor, 0, 5);
    printf("A soma é %d.\n", somaFinal);
}

void preencheVetor(Numero *vetor, int indice) {
    printf("Digite o %dº número.\n", indice + 1);
    scanf("%d", &vetor[indice].valor);
}

int soma(Numero *vetor, int indice, int qnt) {
    if (indice == qnt) {
        return 0;
    } else {
        return vetor[indice].valor + soma(vetor, indice + 1, qnt);
    }
}