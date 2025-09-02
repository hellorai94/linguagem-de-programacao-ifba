#ifndef PERSONAGEM_H
#define PERSONAGEM_H

// Struct do personagem
typedef struct {
    int forca; 
    char nome[50];
    int velocidade;
    int x, y; 
} Personagem;

// Assinaturas das funções
Personagem criarPersonagem(char* nome, int forca); // Cria um personagem recebendo nome e força
void mostrarPersonagem(Personagem* p); // Mostra os dados do personagem

#endif