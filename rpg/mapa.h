#ifndef MAPA_H
#define MAPA_H

typedef struct {
    int largura;
    int altura;
    char** matriz;
} Mapa;

Mapa criarMapa(int largura, int altura);
void mostrarMapa(Mapa* m, int jogadorX, int jogadorY);

#endif