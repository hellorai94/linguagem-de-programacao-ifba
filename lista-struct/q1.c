// 1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
// esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char endereco[100];

} Pessoa;


int main() {
    Pessoa p;


    printf("Digite o nome: \n");
    scanf(" %[^\n]", p.nome);
    printf("Digite a idade: \n");
    scanf("%d", &p.idade);
    printf("Digite o endereço: \n");
    scanf(" %[^\n]", p.endereco);

    printf("%s tem %d anos e mora na %s.\n", p.nome, p.idade, p.endereco);
    
    return 0;
}
