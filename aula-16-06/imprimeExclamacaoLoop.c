/* Escreva um programa em linguagem C que leia um número inteiro positivo n digitado pelo usuário e, utilizando recursividade, imprima n linhas, onde a primeira linha contém um ponto de exclamação (!), a segunda linha contém dois pontos de exclamação (!!), e assim por diante até a n-ésima linha, que deve conter n pontos de exclamação. */

#include <stdio.h>

void imprimeExclamacoes(int n, int atual);

int main() {
    int n;
    printf("Digite a quantidade: \n");
    scanf("%d", &n);
    imprimeExclamacoes(n, 1);
    return 0;

}

void imprimeExclamacoes(int n, int atual) {
    if (atual > n) return;

    for (int i = 0; i < atual; i++)
        printf("!");
    printf("\n");

    imprimeExclamacoes(n , atual + 1);

}




