// 3) Crie uma função recursiva que receba um número inteiro N e imprima todos os números naturais de 0 até N
// em ordem crescente.

#include <stdio.h>

void imprimeNumerosCrescente(int num) {

    if (num == 0) {
        printf("0\n");
    } else {
        imprimeNumerosCrescente(num - 1);
        printf("%d\n", num);

    } 
}

int main() {
    int num, imprime;

    printf("Digite o número: ");
    scanf("%d", &num);
    imprimeNumerosCrescente(num);
    printf("\n");
    
}
  