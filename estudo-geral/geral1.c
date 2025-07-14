#include <stdio.h>
#include <stdlib.h>

int fatorial(int num) {
    int i, f = 1;
    for (i = 1; i <= num; i++) 
        f = f * i;
    return f;
}

int main() {
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    printf("O fatoril de %d é: %d.", num, fatorial(num));
}
