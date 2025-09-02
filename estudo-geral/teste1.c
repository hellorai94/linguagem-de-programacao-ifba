// Escreva uma função recursiva que receba um inteiro n e um caractere c, e imprima uma linha com n vezes o caractere c. Use passagem por valor para n e por referência para o caractere c. No main, peça para o usuário informar n e c e chame a função.

#include <stdio.h>

int imprimeCaracter(int n, char *c){
    if (n == 0) {
        return 0;
    } else {
        imprimeCaracter(n - 1, c);
        printf("%s", c);
    }
  
}

int main() {
    int n;
    char c;

    printf("Digite a quantidade de vezes que você quer ver o caracter: \n");
    scanf("%d", &n);
    printf("Digite o caracter: \n");
    scanf(" %c", &c);

    imprimeCaracter(n, &c);
    printf("\n");
}