#include <stdio.h>
#include <stdlib.h>

int fatorial(int num) {
    int i, f = 1;
    for (i = 1; i <= num; i++) 
        f = f * i;
    return f;
}

int main() {
    int num = 1;
    
    while (num > 0) {
        printf("Digite um número inteiro positivo: \n");
        scanf("%d", &num);

        printf("O fatoril de %d é: %d.", num, fatorial(num));
    }
}
