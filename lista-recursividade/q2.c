// 2) Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N.

#include <stdio.h> 

int somaN(int num) {

    if (num == 1) {
        return 1;
    } else {
        return num + somaN(num - 1); 
    }
};

int main() {
    int num, soma;

    printf("Digite o número: ");
    scanf("%d", &num);

    soma = somaN(num);
    printf("A soma é %d.\n", soma);
}
  