// Defina uma struct Numero com um campo int valor. Crie um vetor de 5 elementos do tipo Numero. Escreva uma função que preencha o vetor com números digitados pelo usuário (passando o vetor por referência e o índice por valor). Depois, crie uma função recursiva que calcule a média dos valores no vetor e retorne esse valor.

#include <stdio.h>


typedef struct 
{
    int valor;
} Numero;

void preencheVetor(Numero *vetor, int i);
float media(Numero *vetor, int i);

int main() {
    Numero vetor[5];
    int i = 0;

    while (i < 5) {
        preencheVetor(vetor, i);
        i++;
    }

    float mediaFinal = media(vetor, i) / 5;
    printf("A média final é %.2f.\n", mediaFinal);

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
