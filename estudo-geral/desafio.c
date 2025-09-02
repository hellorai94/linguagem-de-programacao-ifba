// Crie um programa em C que seja capaz de cadastrar 5 estudantes. O cadastro do estudante deve ser composto por matrícula, nome e endereço. O cadastro deve ser realizado por uma função que receba parâmetros por valor e por referência.
// Uma outra função deve permitir buscar um estudante de forma recursiva. A matrícula deve ser o elemento informado para realizar a busca.

#include <stdio.h>
#define MAX_ALUNOS 5

typedef struct 
{
    int matricula;
    char nome[50];
    char endereco[100];
} Aluno;


void cadastra(Aluno *alunos, int qntAlunos) {

    if (qntAlunos >= MAX_ALUNOS) {
        printf("Quantidade máxima de alunos cadastrados.");
        return;
    } 
    printf("Digite a matricula do aluno.\n");
    scanf("%d", &alunos[qntAlunos].matricula);
    printf("Digite o nome do aluno.\n");
    scanf(" %[^\n]", &alunos[qntAlunos].nome);
    printf("Digite o endereço do aluno.\n");
    scanf(" %[^\n]", &alunos[qntAlunos].endereco);

};

int buscaALuno(int matricula, Aluno *alunos) {
    if (matricula[])
}



int main() {

    Aluno alunos[MAX_ALUNOS];
    int qntAlunos = 0;

    while (qntAlunos < MAX_ALUNOS)
    {
        cadastra(alunos, qntAlunos);
        qntAlunos++;
    }
    

    return 0;
}
