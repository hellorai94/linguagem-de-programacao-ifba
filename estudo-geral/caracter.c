// Peça ao usuário para digitar um caractere e uma palavra. Imprima os dois valores separadamente, usando %c e %s corretamente.
#include <stdio.h>
int main() {
    char caractere;
    char palavra[10];

    printf("Digite 1 caractere.\n");
    scanf(" %c", &caractere);
    printf("Digite 1 palavra.\n");
    scanf(" %s", palavra);

    printf("Caractere: %c.\n", caractere);
    printf("Palavra: %s.\n", palavra);
    return 0;
}