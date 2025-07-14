#include <stdio.h>
#include <string.h>

int main() {
    char sigla[10];
    printf("Digite um nome: ");
    fgets(sigla, 10, stdin);
    
    for (int i = 0; i < 11 && sigla[i] != '\0'; i++) {
        printf("Posição [%d]: %c\n", i, sigla[i]);
    }
}
