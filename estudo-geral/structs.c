// Crie uma struct chamada Pessoa com um campo int idade.
// No main, declare uma variável do tipo Pessoa e um ponteiro para ela.
// Atribua e imprima a idade usando tanto . quanto ->.

#include <stdio.h>

typedef struct 
{
    int idade;
} Pessoa;

int main() {
    Pessoa pessoa;
    Pessoa *p = &pessoa;

    pessoa.idade = 35;
    p->idade = 30;

    printf("%d\n", pessoa.idade);
    printf("%d\n", p->idade);
    return 0;
}