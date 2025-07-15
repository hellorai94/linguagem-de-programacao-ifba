#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
} Pessoa;

int main() {

    Pessoa lista[3];
    strcpy(lista[0].nome, "Raissa");
    strcpy(lista[1].nome, "Hellen");
    strcpy(lista[2].nome, "Manu");

    for(int i = 0; i <= 3; i++) {
        puts(lista[i].nome);
    }

    return 0;
}