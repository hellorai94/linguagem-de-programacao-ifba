// 4) Crie uma função recursiva que receba um número inteiro N e imprima todos os números naturais de 0 até N
// em ordem decrescente.

#include <stdio.h>

void imprimeNumerosDecrescente(int num) {

    if (num == 0) {
        printf("0\n");
    } else {
        printf("%d\n", num);
        imprimeNumerosDecrescente(num - 1);
    } 
}

int main() {
    int num, imprime;

    printf("Digite o número: ");
    scanf("%d", &num);
    imprimeNumerosDecrescente(num);
    printf("\n");
    
}
  