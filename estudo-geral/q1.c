// Crie uma função que receba um ponteiro para inteiro e dobre o valor apontado. No main, leia um número, chame a função e imprima o resultado.

#include <stdio.h>

void dobraValor(int *num) {
    *num *= 2;
}

int main() {
    int num, original;

    printf("Digite o número: \n");
    scanf("%d", &num);

    original = num;
    dobraValor(&num);
    
    printf("O dobro de %d é %d.\n", original, num);
    return 0;
}