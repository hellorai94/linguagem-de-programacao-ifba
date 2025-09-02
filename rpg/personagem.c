#include <stdio.h>
#include <string.h>
#include "personagem.h" // Inclui o header do personagem

// Função para criar o personagem
Personagem criarPersonagem(char* nome, int forca) {
    Personagem p;
    strcpy(p.nome, nome); // Cópia a string para o campo 'nome'
    p.forca = forca;
    p.velocidade = 1; 
    p.x = 0;
    p.y = 0;

    return p;
}

void mostrarPersonagem(Personagem* p) {
    printf("Personagem criado com sucesso.\n");
    printf("Nome: %s | Força: %d | Velocidade: %d.\n", p->nome, p->forca, p->velocidade);
}
