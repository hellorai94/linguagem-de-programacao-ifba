/* Escreva um programa em linguagem C que leia um número inteiro positivo n digitado pelo usuário e, utilizando recursividade, imprima n linhas, onde a primeira linha contém um ponto de exclamação (!), a segunda linha contém dois pontos de exclamação (!!), e assim por diante até a n-ésima linha, que deve conter n pontos de exclamação. */

#include <stdio.h>

void imprimeExclamacoes(int qnt);
void imprimeLinhas(int n, int atual);

int main() {
    int n;
    printf("Digite a quantidade: \n");
    scanf("%d", &n);
    imprimeLinhas(n, 1);
    return 0;

}

void imprimeExclamacoes(int qnt) {
    if (qnt == 0)
        return;
    imprimeExclamacoes(qnt - 1);
    printf("!");
}

void imprimeLinhas(int n, int atual) {
    if (atual > n)
        return;
    imprimeExclamacoes(atual);
    printf("\n");
    imprimeLinhas(n, atual + 1);
}




