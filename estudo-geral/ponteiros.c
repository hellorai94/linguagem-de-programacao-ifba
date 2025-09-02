// Crie uma função chamada dobrarValor que receba um ponteiro para inteiro e dobre o valor que ele aponta. No main, leia um número do usuário, chame a função passando o endereço, e imprima o resultado.

#include <stdio.h>

int dobrarValor(int *num) {
    *num = *num * 2;
    return *num;
}

int main() {
    int num;
    printf("Número: \n");
    scanf("%d", &num);
    printf("%d", dobrarValor(&num));
}