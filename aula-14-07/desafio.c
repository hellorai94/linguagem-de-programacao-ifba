// Crie um programa em C que seja capaz de cadastrar 5 estudantes. O cadastro do estudante deve ser composto por matrícula, nome e endereço. O cadastro deve ser realizado por uma função que receba parâmetros por valor e por referência.
// Uma outra função deve permitir buscar um estudante de forma recursiva. A matrícula deve ser o elemento informado para realizar a busca.

#include <stdio.h>
#define MAX_ALUNOS 5


typedef struct {
    int matricula[8];
    char nome[50];
    char endereco[100];
} Aluno;


int cadastraAluno(int totalAlunos, Aluno *alunos) {
    if (totalAlunos >= MAX_ALUNOS) {
        printf("Quantidade máxima de alunos atingida.\n");
        return totalAlunos;
    } 

    printf("Digite a matrícula do aluno:\n");
    scanf("%d", &alunos[totalAlunos].matricula);
    printf("Digite o nome do estudande:\n");
    scanf(" %[^\n]", &alunos[totalAlunos].nome);
    printf("Digite o endereço do estudante:\n.");
    scanf(" %[^\n]", &alunos[totalAlunos].endereco);
    totalAlunos++;
    return totalAlunos++;
}

int buscarEstudante(int matricula, int posicao, struct Aluno *alunos ) {
    if (posicao == MAX_ALUNOS);{
        printf("Aluno não encontrado.");
        return 999; 
    }
    if ()
}





