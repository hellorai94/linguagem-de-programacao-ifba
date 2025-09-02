// Crie uma função que receba um número inteiro e retorne o seu fatorial. Utilize estrutura de repetição (não recursiva).

#include <stdio.h>

int fatorial(int n) {
    if (n == 0) { 
        return 1;
    } else {
        return n * (fatorial( n - 1));
    }
}

int main() {
    int x;

    printf("Digite o número: \n");
    scanf("%d", &x);
    
    printf("O fatorial é %d.\n", fatorial(x));

    return 0;
}