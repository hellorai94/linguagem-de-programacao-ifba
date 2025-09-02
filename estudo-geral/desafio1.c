// Crie um programa em C que defina uma struct chamada Numero, contendo um único campo valor do tipo inteiro.
// Crie uma função que receba uma variável do tipo Numero por referência e atribua a ela um número informado pelo usuário.
// Em seguida, crie uma função recursiva que receba um número inteiro n e imprima a contagem regressiva até 0.

#include <stdio.h>

typedef struct 
{
    int valor;
} Numero;


void unicoNumero(Numero *unicoNumero);
void contagemRegressiva(int n);

int main() {
    Numero n;
    int num;
    unicoNumero(&n);
    printf("Digite o número para começar a contagem regressiva.\n");
    scanf("%d", &num);
    contagemRegressiva(num);
    
    return 0;
}


void unicoNumero(Numero *unicoNumero) {
    printf("Digite o número.\n");
    scanf("%d", &unicoNumero->valor);
    printf("Número lido: %d\n", unicoNumero->valor);
}

void contagemRegressiva(int n) {
    if (n == 0) {
        printf("0\n");
    } else {
        printf("%d\n", n);
        contagemRegressiva(n - 1);
    
    }
}

