// 3) Escreva uma função que receba um array de 10 elementos e retorne a sua soma.

#include <stdio.h>

float somaElementos(float *arrayElementos) {
    float soma = 0;

    for(int i = 0; i < 10; i++) {
        soma += arrayElementos[i];
    }

    return soma;
}


int main() {

    float arrayElementos[10];
    printf("Digite 10 números inteiros separados por espaço:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &arrayElementos[i]);
    }

    printf("A soma é %.2f.\n", somaElementos(arrayElementos));
    return 0;
}