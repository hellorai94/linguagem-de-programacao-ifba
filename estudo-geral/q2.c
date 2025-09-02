// Defina uma struct chamada Produto com um campo float preco. No main, declare uma variável do tipo Produto e um ponteiro para ela. Atribua um valor ao preço usando o ponteiro e imprima o valor usando tanto . quanto ->.

#include <stdio.h>

typedef struct{
    float preco;
} Produto;

int main() {
    Produto variavel;
    Produto *variavelPonteiro = &variavel;

    variavel.preco = 5.4;
    variavelPonteiro->preco = 4.3;
    
    printf("%.2f\n", variavel.preco);
    printf("%.2f\n", variavelPonteiro->preco);
};




