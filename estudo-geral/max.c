// Escreva uma função em C chamada max que receba dois números inteiros e retorne o maior deles.

#include <stdio.h> 

int max(int x, int y){
    int maior;

    if (x > y) {
        maior = x;
    } else if (x < y) {
        maior = y;
    } else {
        return 1;
    };

    return maior;
    
}

int main() {
    int x, y, maior;

    printf("Digite x: \n");
    scanf("%d", &x);
    printf("Digite x: \n");
    scanf("%d", &y);

    maior = max(x, y);
    if (maior == 1) {
        printf("Os números são iguais.");
    } else {
        printf("O maior é %d.\n", maior);
    }

    return 0;
}