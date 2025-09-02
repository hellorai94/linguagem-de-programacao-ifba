#include <stdio.h>
#include "personagem.h"
#include "inimigo.h"
#include "item.h"

int main() {
    char nome[50];
    int forca;

    printf("Digite o nome do personagem: \n");
    scanf(" %[^\n]", nome);
    printf("Digite a força do personagem: \n");
    scanf("%d", &forca);

    Personagem jogador = criarPersonagem(nome, forca);
    mostrarPersonagem(&jogador);

    return 0;
}

