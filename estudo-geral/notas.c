// Defina uma struct chamada Aluno com os campos nome (string) e notas (array de 3 números reais). Crie uma função que receba um Aluno como parâmetro e retorne a média de suas notas. Leia os dados de dois alunos, calcule e mostre a média de cada um.
#include <stdio.h>

typedef struct {
    char nome[50];
    float notas[3];

} Aluno;

float retornaMedia(Aluno aluno) {
    float media = (aluno.notas[0] + aluno.notas[1] + aluno.notas[2])/ 3;

    return media;
}

int main() {
    Aluno aluno;
    int count = 0;
    float media = 0;

    while (count < 2)
    {
       printf("Nota 1º:\n");
       scanf("%f", &aluno.notas[0]);
       printf("Nota 2º:\n");
       scanf("%f", &aluno.notas[1]);
       printf("Nota 3º:\n");
       scanf("%f", &aluno.notas[2]);
       printf("Nome do aluno: \n");
       scanf(" %[^\n]", aluno.nome);

       media = retornaMedia(aluno);
       printf("A média de %s é %.2f.\n", aluno.nome, media);
       count ++;

    }
    
    return 0;
}