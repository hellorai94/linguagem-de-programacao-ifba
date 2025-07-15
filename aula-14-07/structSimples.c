#include <stdio.h>
#include <string.h>

 typedef struct {
        char nome[50];
        int idade;
    } Pessoa;

int main() {

    Pessoa p;
    strcpy(p.nome, "Ana");
    p.idade = 22;

    printf("Nome: %s.\nIdade: %d.\n", p.nome, p.idade);

    return 0;
}