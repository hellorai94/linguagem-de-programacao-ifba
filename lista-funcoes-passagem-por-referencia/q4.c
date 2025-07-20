// 4) Escreva uma função que receba um array contendo a nota de 10 alunos e retorne a média dos alunos.

#include <stdio.h>

float mediaAlunos(float *arrayAlunos) {
    float somaNotas = 0, media;

    for(int i = 0; i < 10; i++) {
        somaNotas += arrayAlunos[i];
    }

    media = somaNotas / 10;
    return media;
}

int main() {
    float arrayAlunos[10];
    printf("Digite a nota de 10 alunos separadas por espaço.\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%f", &arrayAlunos[i]);
    }

    printf("A média dos 10 alunos é %.2f.\n", mediaAlunos(arrayAlunos));
}
